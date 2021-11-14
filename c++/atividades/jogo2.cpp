#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

int main(void){
	string arrayS,inputS;
	
	int input,i,array,numeros=0,sizeL=0,flag=0;
	
	while(flag != 1 ){//start while 1
	flag=0;
	printf("Digite o tamanho do array \n");

	getline(cin,arrayS);
	sizeL=arrayS.size();
	numeros=0;
	
	for(i=0;i<sizeL;i++){//percorre a palavra indice por indice
	//verificado se todos caracters sao numeros
		if(isdigit(arrayS[i])){
			numeros++;
		}
	}
	//verifica se o input é totalmente numerico (sem negativos)
	if(numeros == sizeL && numeros <= 17 && numeros != 0 ){
		array = atoi(arrayS.c_str());
		if(array >= 518000){
			printf("O tamanho do array e invalido \n");
		}else{
		flag =1;	
		}
	}else{
		printf("Voce digitou uma entrada invalida \n");
		
	}
	}// end while 1
	int vet[array],acertou=0;
	int indiceI=0,indiceR=0,direitoR=0,esquerdoR=0,direitoI=0,esquerdoI=0;
	
	srand((unsigned)time(0));
	int random =rand()%array;
	
	int inicio =0;
	int fim =array;
	int tentativas =0;
	
while(random != input){//start while 2

	indiceI=0,indiceR=0,direitoR=0,esquerdoR=0,direitoI=0,esquerdoI=0;
	acertou=0;
	flag =0;
	
	while(flag != 1){//start while 3
	
	printf("tamanho do array %d-%d \n",inicio,fim);
	printf("Digite um numero -aleatorio = %d \n",random);
	getline(cin,inputS);
	
	sizeL= inputS.size();
	numeros=0;
	for(i=0;i<sizeL;i++){
		if(isdigit(inputS[i])){
			numeros++;
		}
	}
	//verifica se o input é valido
	if(numeros == sizeL && numeros != 0){
		input = atoi(inputS.c_str());
		flag=1;
	}else {
		printf("Voce digitou uma entrada invalida \n");
	}
	}//end while 3
	if(input == random){
		tentativas++;
		printf("Voce acertou parabens, em %d tentativas \n",tentativas);
		break;
	}
	
	int indice=0;
	for(i=inicio;i<fim;i++){//preenche array
		vet[indice]=i;
		indice++;
	}
	
	for(i=0;i<=indice;i++){//encontra indices do input e aleatorio
		
		if(vet[i] == input){
			indiceI=i;
		}
		if(vet[i] == random){
			indiceR=i;
		}
	}
	
	int meio=ceil(double(indice)/2);
	
	//os dois proximos if econtram o lado do array em que esta 
	//o numero digitado pelo usuario e o numero aleatorio
	if(indiceI <= meio){
		esquerdoI=1;
	}else{
		direitoI=1;
	}
	if(indiceR >= meio){
		direitoR=1;
	}else{
		esquerdoR=1;
	}
	
	if(input > fim || input < inicio){
		printf("Voce digitou fora do array \n");
	}else
	//os dois proximos ifs checam se o numero aleatorio esta do mesmo lado
	//do array que o numero digitado
	if(esquerdoI == 1 && esquerdoR == 1){	
		fim =inicio+meio;
	}else if(direitoI == 1 && direitoR == 1){
		inicio=inicio+meio;
	} 
	
	printf("Voce errou o numero secreto \n");
	tentativas++;		
}//end while 2	
	
	return(0);
}
