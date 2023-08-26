#include<stdio.h>
#include <stdbool.h>
#include"kimya.h"

int elektron, i, j;

int main(){
	printf("atom elektron sayısı = ");
	scanf("%d", &elektron);
	//printf("%d", elektron);
	
	if(elektron <= 20) {
		dizilim(elektron);
	
	}else{
		ileri_dizilim(elektron);
	}
	return 0;
}