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
	
	//entrada = "nairo sanches";
	int tam=entrada.size();
	char saida[518000*4]=""; 
	int i;
	int quantidade[28];
	char caracter[28];
	int size =sizeof(quantidade)/sizeof(quantidade[0]);
	
	quantidade[0]=quantidade[1]=quantidade[2]=quantidade[3]=quantidade[4]=quantidade[5]=quantidade[6]=quantidade[7]=quantidade[8]=quantidade[9]=quantidade[10]=quantidade[11]=quantidade[12]=quantidade[13]=quantidade[14]=quantidade[15]=quantidade[16]=quantidade[17]=quantidade[18]=quantidade[19]=quantidade[20]=quantidade[21]=quantidade[22]=quantidade[23]=quantidade[24]=quantidade[26]=quantidade[27]=0;
	
	
	for(i=0;i< tam;i++){
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
				saida[i]='"';
				quantidade[6]+= 1;
				caracter[6]='"';
				break;
				// novas entradas
			case 'b':
				saida[i]='p';
				quantidade[7]+= 1;
				caracter[7]='p';
				break;
			case 'c':
				saida[i]='6';
				quantidade[8]+= 1;
				caracter[8]='6';
				break;
			case 'd' :
				saida[i]='/';
				quantidade[9]+= 1;
				caracter[9]='/';
				break;
			case 'e':
				saida[i]='y';
				quantidade[10]+= 1;
				caracter[10]='y';
				break;
			case 'f':
				saida[i]='v';
				quantidade[11]+= 1;
				caracter[11]='v';
				break;
			case 'g':
				saida[i]='b';
				quantidade[12]+= 1;
				caracter[12]='b';
				break;
			case 'h':
				saida[i]='r';
				quantidade[13]+= 1;
				caracter[13]='r';
				break;
			case 'j':
				saida[i]='-';
				quantidade[15]+= 1;
				caracter[15]='-';
				break;
			case 'k':
				saida[i]='+';
				quantidade[16]+= 1;
				caracter[16]='+';
				break;
			case 'l':
				saida[i]='.';
				quantidade[17]+= 1;
				caracter[17]='.';
				break;
			case 'm':
				saida[i]='_';
				quantidade[18]+= 1;
				caracter[18]='_';
				break;
			case 'p':
				saida[i]='9';
				quantidade[19]+= 1;
				caracter[19]='9';
				break;
			case 'q':
				saida[i]='8';
				quantidade[20]+= 1;
				caracter[20]='8';
				break;
			case 't':
				saida[i]='(';
				quantidade[21]+= 1;
				caracter[21]='(';
				break;
			case 'u':
				saida[i]='#';
				quantidade[22]+= 1;
				caracter[22]='#';
				break;
			case 'v':
				saida[i]='&';
				quantidade[23]+= 1;
				caracter[23]='&';
				break;
			case 'x':
				saida[i]='%';
				quantidade[24]+= 1;
				caracter[24]='%';
				break;
			case 'w':
				saida[i]='m';
				quantidade[25]+= 1;
				caracter[25]='m';
				break;
			case 'y':
				saida[i]='|';
				quantidade[26]+= 1;
				caracter[26]='|';
				break;
			case 'z':
				saida[i]='/';
				quantidade[27]+= 1;
				caracter[27]='/';
				break;
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
		
		
		printf("%s  \n \n",saida,tam);
	
		
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
