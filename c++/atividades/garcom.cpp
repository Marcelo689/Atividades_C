#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(void){
	
	int mesa,codigo=1,produto0=0,produto1=0,produto2=0,produto3=0,produto4=0,produto5=0;
	float valor,pProduto0=5.70,pProduto1=18.30,pProduto2=16.50,pProduto3=22.40,pProduto4=10.00,pProduto5=1.00;
	int quantidade,i,numeros=0;
	
	string mesaS,quantidadeS,codigoS;
	
	// captura valor da mesa
	printf("Qual o numero da mesa ?\n");
	cin >>mesaS;
	
	int tamanho = mesaS.size();
	//verifica se todos caracteres sao numeros
	for(i=0;i<tamanho;i++){
		if(isdigit(mesaS[i])){
			numeros++;
		}
	}
	if(numeros == tamanho){
		mesa = atoi(mesaS.c_str());
	}else{
		printf("Voce digitou uma mesa invalida tente novamente !!!\n");
		main();
	}
	
	while(codigo != 999){// Pergunta pelos pedidos enquanto codigo for diferente de 999; 
		
	printf("Qual o item (Codigo) do pedido abaixo?\n");
	printf("Codigo              Produto            Preco Unidade(R$)\n");
	printf("100               Cachorro quente          R$5,70 \n");
	printf("101               X Completo               R$18,30 \n");
	printf("102               X Salada                 R$16,50 \n");
	printf("103               Hamburguer               R$22,40 \n");
	printf("104               Coca 2L                  R$10,00 \n");
	printf("105               Refrigerante             R$1,00 \n");
	printf("999               Encerra pedido           \n");
	cin >> codigoS;
	
	tamanho = codigoS.size();
	numeros =0;
	for( i=0;i<tamanho;i++){
		if(isdigit(codigoS[i])){
			numeros++;
		}
	}
	if(numeros == tamanho){
		codigo = atoi(codigoS.c_str());
	}else{
		printf("O codigo digitado eh invalido \n");
		continue;
	}
	// coleta a quantidade do item selecionado
	if(codigo == 100 || codigo == 101 || codigo == 102 || codigo == 103 || codigo == 104 || codigo == 105){
	printf("Digite a quantidade \n");
	cin >>quantidadeS;
	
	int tamanho = quantidadeS.size();
	numeros=0;
	// verifica se todos caracteres sao numeros
	for(i=0;i<tamanho;i++){
		if(isdigit(quantidadeS[i])){
			numeros++;
		}
	}
	if(numeros == tamanho){
		quantidade = atoi(quantidadeS.c_str());
	}else{
		printf("Voce digitou uma quantidade invalida tente novamente !!!\n");
		continue;
	}
	
	}
	//Insere a quantidade de cada produto	
	switch(codigo){
		case 100:
		produto0+=quantidade;
		break;
		case 101:
		produto1+=quantidade;
		break;
		case 102:
		produto2+=quantidade;
		break;
		case 103:
		produto3+=quantidade;
		break;
		case 104:
		produto4+=quantidade;
		break;
		case 105:
		produto5+=quantidade;
		break;
		case 999:
			printf("Voce acabou de fazer seus pedidos\n");
			exit;
		default:
			printf("Voce digitou um produto invalido tente novamente !!!\n");
			break;
	}
	
	}
	
	
	/// Mostra quantos de cada produto foi escolhido
	printf("A mesa %d pediu os seguintes itens:\n",mesa);
	
	// e coleta os valores dos produtos;
	if(produto0 != 0){
		printf("%d- Cachorro(s) quente(s)\n",produto0);
		valor += produto0 * pProduto0;
	}
	if(produto1 != 0){
		printf("%d- X Completo(s)\n",produto1);
		valor += produto1 * pProduto1;
	}
	if(produto2 != 0){
		printf("%d- X Salada(s)\n",produto2);
		valor += produto2 * pProduto2;
	}
	if(produto3 != 0){
		printf("%d- Hamburguer(s)\n",produto3);
		valor += produto3 * pProduto3;
	}
	if(produto4 != 0){
		printf("%d- Coca 2L(s)\n",produto4);
		valor += produto4 * pProduto4;
	}
	if(produto5 != 0){
		printf("%d- Refrigerante(s)\n",produto5);
		valor += produto5 * pProduto5;
	}
	
	printf("Com o valor total R$: %.2f\n",valor);
	
	return(0);
}
