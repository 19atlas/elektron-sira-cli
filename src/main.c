#include<stdio.h>
#include <stdbool.h> 
#include"kimya.h"

int elektron;
bool DEBUG_MODE=true;

int main(){
	if (DEBUG_MODE==false){
		printf("atom elektron sayısı = ");
		scanf("%d", &elektron);
		if(elektron <= 20) {
			printf("%s\n", dizilim(elektron));
			return 0;
		}
		printf("%d\n", ileri_dizilim(elektron));
	}else{
		testFunc();
	}
	return 0;
}

//debug mode mr whiteee!!!1!
int testFunc(){
	int debug = 1;
	while(debug < 20 ) { //20 den sonrasi zor ya
		printf("%s\n", dizilim(debug));
		debug = debug + 1;
	}
	/*while(debug < 118 ) { //btw max elektron size
		dizilim(debug);
		debug = debug + 1;
	}*/
}