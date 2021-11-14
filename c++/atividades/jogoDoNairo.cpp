#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <ctime>
#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	int i,array,numeros=0,valida=4;
	string inputS,arrayS;
	
	while(valida != 1){//start while
	
	printf("Digite o tamanho do array \n");
	cin >> arrayS;
	
	int stringSize1 = arrayS.size();
	
	for(i=0;i<stringSize1;i++){
		
		if(isdigit(arrayS[i])){
		numeros++;
		}
	}
	if(numeros == stringSize1){
		array = atoi(arrayS.c_str());
		valida =1;
	}else{
		printf("Voce digitou um valor invalido \n");
	}
	
	}//end while
	srand((unsigned)time(0));
	
	int aleatorio = rand()%array;
	
	
	int tamanho,vet[array];
	
	printf("%d \n",aleatorio);
	
	tamanho = sizeof(vet)/sizeof(int);
	
	int corte=2;
	int multiplo=0;
	int input=-4;
	int flag=0;
	double inicio=0;
	double fim =tamanho;
	int indice =0;
	
	
	
	while(input != aleatorio){//start while 1
	
	valida=0;
	cout <<	"O tamanho atual do array " << inicio <<"-"<<fim<<endl;
	
	while(valida != 1){//start while 12
	
	
	
	printf("Digite um numero \n");
	
	cin >> inputS;
	
	numeros=0;
	
	int stringSize2 = inputS.size();
	
	for(i=0;i<stringSize2;i++){//start for
	
		if(isdigit(inputS[i])){
		numeros++;
		}
	
	}//end for
	
		if(numeros == stringSize2){
			input = atoi(inputS.c_str());
			valida=1;
		}else{
		printf("Voce digitou um valor invalido \n");
		}
	
	}//end while 12	
	multiplo=0;
	
	//int indice =0;
	for(i=inicio;i<=fim;i++){//preenche array
		vet[i]=i;
	}
	
	while(multiplo != corte){// start while 2
		
		if(aleatorio == input){// start cadeia de ifs
			printf("O numero digitado esta correto, voce venceu! \n");
			flag=1;
			break;
		}
		else
		if(input > fim || input < inicio){
			printf("Voce digitou um numero fora do tamanho do array \n");
			break;
		}else
		if(input >= ceil(double(tamanho)/double(corte))*(double(multiplo)) && aleatorio >= ceil(double(tamanho)/double(corte))*(double(multiplo))// 0 > 50> inicio
		&&
		input <= ceil(double(tamanho)/double(corte)*double(multiplo+1)) && aleatorio <= ceil(double(tamanho)/double(corte)*double(multiplo+1))//< 50 < 100 fim
		){
			fim = ceil(double(tamanho)/double(corte)*double(multiplo+1));
			inicio =ceil(double(tamanho)/double(corte))*(double(multiplo));
		//fim=(tamanho/corte)*(multiplo+1);
		//inicio =(tamanho/corte)*(multiplo);
			
			corte=corte*2;
		
			break;
	}// end cadeia de ifs
	
	multiplo++;
		
	}//end while 2
	
	if(flag == 0){
		printf("Voce errou tente novamente \n");
	}
	}// end while 1
	return(0);
}
