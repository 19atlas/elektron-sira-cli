#include<stdio.h>
#include"kimya.h"

int elektron;

int main(){
	printf("atom elektron sayısı = ");
	scanf("%d", &elektron);

	if(elektron <= 20) {
		printf("%s\n", dizilim(elektron));
		return 0;
	}

	printf("%d\n", ileri_dizilim(elektron));
	return 0;
}