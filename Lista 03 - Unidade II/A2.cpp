#include <iostream>
#include <fstream>

using namespace std;

void questao02();

int main() {
	
	questao02();
}

void questao02() {
	
	ifstream x;
	string s;
	int maior=0, ini=0;
	int cont=0, temp_ini=0;
	
	x.open("arquivo_02.txt");
	
	if (x.is_open()) {
		while (getline(x, s)) {
		}
		
    
	    for (int i=0; i<=s.length(); i++){
	    	
	        if(i==s.length() || s[i] == ' '){
	            if(maior<cont){
	                maior=cont;
	                ini=temp_ini;
	            }
	            cont=0;
	            temp_ini=i+1;
	        }
	        else{
	            cont++;
	        }
	    }
	
	    cout << maior;
	    x.close();
	}
	
	else {
		cout << "Erro ao abrir o arquivo" << endl;
	}
	
}


