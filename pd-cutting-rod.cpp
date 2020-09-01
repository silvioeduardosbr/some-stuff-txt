#include <iostream>
//#define rep(i,n) for(int i = 0; i < n; i++) // 0 <- n-1
using namespace std;

int values[10001];
int memo[10001];

int naive(int n){ //soluçao inocente

	if (n == 0){
		return 0;
	}
	else{
		int best;
		for(int i = 0; i< n; i++){
			
			best = max(best, values[i] + naive(n-i-1));
			
		}
		return best;
	}
}

int topdown_dp(int n){ //problema
	
	if (memo[n] != -1){ //verifica se a memoria tem algo
		return memo[n];//se tiver retorna logo
	}
	
	if (n == 0){ //se for zero, coloca 0 na memoria
		 memo[0] = 0;
	}
	else{
		int best=0;
		for(int i = 0; i< n; i++){
			
			best = max(best, values[i] + naive(n-i-1));
			
		}
		memo[n] = best;
		
		return memo[n];
	}
}

int bottomup_dp(int n){ //problema
	
	int best;
	memo[0] = 0;
	
	//j é o tamanho do subproblema
	
	for(int j = 1; j <= n; j++){
		
		for(int i=0; i<j; i++){
		
			best = max(best, values[i]+memo[j-i-1]);
		}
		memo[j] = best;
	}
	return memo[n];
	
}

int main(){

	int a;
	for(int i=0;i<10000;i++){
		memo[i] = -1;
	}
	values[0] = 1;
	values[1] = 5;
	values[2] = 8;
	values[3] = 9;
	values[4] = 10;

	cin >> a;
	cout << "naive: " << naive(a) << endl;
	cout << "bottomup: " << bottomup_dp(a) << endl;
	cout << "topdown: " << topdown_dp(a) << endl;
	
	return 0;
}
