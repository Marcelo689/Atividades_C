#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

int main(void){
	
	string entrada;
	
	printf("Digite um texto para ser convertido \n");
	getline(cin,entrada);
	//entrada = "nairo san";
	string saida; 
	int i;
	int quantidade[7];
	char caracter[7];
	int size =sizeof(quantidade)/sizeof(quantidade[0]);
	int tam=entrada.size();
	quantidade[0]=quantidade[1]=quantidade[2]=quantidade[3]=quantidade[4]=quantidade[5]=quantidade[6]=0;
	for(i=0;i<tam;i++){
		switch(entrada[i]){
			case 'a':
				saida[i]='@';
				quantidade[0]+= 1;
				caracter[0]='@';
				break;
			case 'i':
				saida[i]='1';
				quantidade[1]+= 1;
				caracter[1]='1';
				break;
			case 'r':
				saida[i]='3';
				quantidade[2]+= 1;
				caracter[2]='3';
				break;
			case 'o':
				saida[i]='0';
				quantidade[3]+= 1;
				caracter[3]='0';
				break;
			case ' ':
				saida[i]='*';
				quantidade[4]+= 1;
				caracter[4]='*';
				break;
			case 's':
				saida[i]='5';
				quantidade[5]+= 1;
				caracter[5]='5';
				break;
			case 'n':
				saida[i]='n';
				quantidade[6]+= 1;
				caracter[6]='n';
				break;
				// novas entradas
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[7]+= 1;
		//		caracter[7]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[8]+= 1;
		//		caracter[8]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[9]+= 1;
		//		caracter[9]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[10]+= 1;
		//		caracter[10]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[11]+= 1;
	//			caracter[11]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[12]+= 1;
		//		caracter[12]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[13]+= 1;
		//		caracter[13]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[14]+= 1;
		//		caracter[14]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[15]+= 1;
		//		caracter[15]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[16]+= 1;
		//		caracter[16]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[17]+= 1;
		//		caracter[17]='n';
		//		break;
		//	case 'n':
		///		saida[i]=entrada[i];
		//		quantidade[18]+= 1;
		//		caracter[18]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[19]+= 1;
		//		caracter[19]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[20]+= 1;
		//		caracter[20]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[21]+= 1;
		//		caracter[21]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[22]+= 1;
		//		caracter[22]='n';
		//		break;
		//	case 'n':
		//		saida[i]=entrada[i];
		//		quantidade[23]+= 1;
			//	caracter[23]='n';
			//	break;
		//	case 'n':
			//	saida[i]=entrada[i];
			//	quantidade[24]+= 1;
			//	caracter[24]='n';
			//	break;
		//	case 'n':
			//	saida[i]=entrada[i];
			//	quantidade[25]+= 1;
			//	caracter[25]='n';
			//	break;
			//case 'n':
			//	saida[i]=entrada[i];
			//	quantidade[26]+= 1;
			//	caracter[26]='n';
			//	break;
			default:
				saida[i]=entrada[i];
				break;
		};//end switch

	}//end for
		int aux,j,k;
		int arrayAlvo[size];
		for(i=0;i<size;i++){
			arrayAlvo[i]=quantidade[i];
		}
		
		for(i=0;i<size;i++){
			aux = arrayAlvo[i];
			for(j=0;j<size;j++){
				if(aux > arrayAlvo[j]){
					aux = arrayAlvo[i];
					arrayAlvo[i]=arrayAlvo[j];
					arrayAlvo[j]=aux;
				}
			}
		}
		
		
		printf("%s  \n  \n",saida.c_str());
		
		
			for(j=arrayAlvo[0];j>0;j--){
				for(i=0;i<size;i++){	
				if(quantidade[i]== j){
					for(k=j;k>0;k--){
						printf("%c",caracter[i]);
						
					}//end for k								
				}//end if
			}//end for i
	
			}//end for j
			printf("\n");
		
		

	return(0);
}
