#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int i,cabrita[4];
	
	cabrita[0]= 10;
	cabrita[1]= 22;
	cabrita[2]= 30;
	cabrita[3]= 42;
	
	for(i=0;i<4;i++){
		printf("O valor do vetor[%d] = %d\n",i,cabrita[i]);
	}
	
	system("pause");
	return(0);
}
