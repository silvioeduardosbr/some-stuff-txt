#include <iostream>
using namespace std;

int main(){

	char jogo[3][3];
    int l,c;
    bool passa = true,fim = false, velha = false, ganhador = false;
    
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		  	jogo[i][j] = '-';
		}
        cout << endl;
	}
    
    while(fim == false){
        if(passa == true){
            cout << "jogador 1, linha: ";
            cin >> l;
            cout << "jogador 1, coluna: ";
            cin >> c;
            while(l>2 || c>2 || jogo[l][c] != '-'){//CASO NAO ENTRA
            	cout << "Posicao invalida!! Escolha outra coordenada. " << endl;
            	cout << "linha: ";
            	cin >> l;
            	cout << "coluna: ";
            	cin >> c;
            }
            system("clear");
            
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(i == l && j==c){
                    	jogo[i][j] = 'X';
                    }
                    cout << jogo[i][j] << " ";
                }
                cout << endl;
            }
            
            //VERIFICAÇOES DE FINAL DE JOGO(GANHADOR)-----------------------------
            if(jogo[0][0] != '-'){
            		
            	if(jogo[0][0] == jogo[0][1] and jogo[0][1]==jogo[0][2])
            		ganhador = true;
            	if(jogo[0][0] == jogo[1][0] and jogo[1][0]==jogo[2][0])
            		ganhador = true;        
            	if(jogo[0][0] == jogo[1][1] and jogo[1][1]==jogo[2][2])
            		ganhador = true;
            }
            if(jogo[1][0] != '-'){
            
            	if(jogo[1][0] == jogo[1][1] and jogo[1][1] == jogo[1][2])
            		ganhador = true;
            }
            if(jogo[2][0] != '-'){
            	if(jogo[2][0]==jogo[2][1] and jogo[2][1]==jogo[2][2])
            		ganhador = true;
            	if(jogo[2][0] == jogo[1][1] and jogo[1][1]==jogo[0][2])
            		ganhador = true;
          
            }
            if(jogo[0][1] != '-'){
            	if(jogo[0][1]==jogo[1][1] and jogo[1][1]==jogo[2][1])
            		ganhador = true;
            }
            if(jogo[0][1] != '-'){
            	if(jogo[0][1]==jogo[1][1] and jogo[1][1]==jogo[2][1])
            		ganhador = true;
            }	
            if(jogo[0][2] != '-'){
            	if(jogo[0][2]==jogo[1][2] and jogo[1][2]==jogo[2][2])
            		ganhador = true;
            }		
            
            if(velha or ganhador){
            	passa = false;
            	fim = true;
            }
        }
        if(passa == true){
        	cout << "jogador 2, linha: ";
            cin >> l;
            cout << "jogador 2, coluna: ";
            cin >> c;
            while(jogo[l][c] != '-'){
            	cout << "Posicao ocupada!! Escolha outra coordenada." << endl;
            	cout << "linha: ";
            	cin >> l;
            	cout << "coluna: ";
            	cin >> c;
            }
            system("clear");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(i == l && j==c){
                        jogo[i][j] = 'O';
                    }
                    cout << jogo[i][j] << " ";
                }
                cout << endl;
            }
            
            if(jogo[0][0] != '-'){
            		
            	if(jogo[0][0] == jogo[0][1] and jogo[0][1]==jogo[0][2])
            		ganhador = true;
            	if(jogo[0][0] == jogo[1][0] and jogo[1][0]==jogo[2][0])
            		ganhador = true;        
            	if(jogo[0][0] == jogo[1][1] and jogo[1][1]==jogo[2][2])
            		ganhador = true;
            }
            if(jogo[1][0] != '-'){
            
            	if(jogo[1][0] == jogo[1][1] and jogo[1][1] == jogo[1][2])
            		ganhador = true;
            }
            if(jogo[2][0] != '-'){
            	if(jogo[2][0]==jogo[2][1] and jogo[2][1]==jogo[2][2])
            		ganhador = true;
            	if(jogo[2][0] == jogo[1][1] and jogo[1][1]==jogo[0][2])
            		ganhador = true;
            }
            if(jogo[0][1] != '-'){
            	if(jogo[0][1]==jogo[1][1] and jogo[1][1]==jogo[2][1])
            		ganhador = true;
            }
            if(jogo[0][1] != '-'){
            	if(jogo[0][1]==jogo[1][1] and jogo[1][1]==jogo[2][1])
            		ganhador = true;
            }	
            if(jogo[0][2] != '-'){
            	if(jogo[0][2]==jogo[1][2] and jogo[1][2]==jogo[2][2])
            		ganhador = true;
            }		
            
            if(velha or ganhador){
            	passa = false;
            	fim = true;
            }
        }
    }
        
    return 0;
}

