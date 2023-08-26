#include<stdio.h>
#include <stdbool.h> 
#include"kimya.h"

bool DEBUG_MODE=false; //debug options
int elektron;

int main(){
	if (DEBUG_MODE==true){
		testFunc();
		return 0;
	}
	printf("atom elektron sayısı = ");
	scanf("%d", &elektron);
	if(elektron > 0) {
		printf("%s\n", dizilim(elektron));
		return 0;
	}
	return -1;
}