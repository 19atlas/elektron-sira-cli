char* _dizilim(char* format, int elektron) {
	char* ret;
	asprintf(&ret, format, elektron);
	return ret;
}

char* dizilim(int elektron){
	if (elektron <= 2){
		return _dizilim("%d)", elektron);
	} if (elektron <=10){
		return _dizilim("2) %d)", elektron-2);
	} if (elektron <=18){
		return _dizilim("2) 8) %d)", elektron-10);
	} if (elektron <=20){
		return _dizilim("2) 8) 8) %d)", elektron-18);
	} if (elektron <= 30){ //2.n^2 rule begins bro 2 8 18 32
		return _dizilim("2) 8) %d) 2)", elektron-12);
	} if (elektron <= 60){
		return _dizilim("2) 8) 18) %d)", elektron-28);
	}
}

//debug mode mr whiteee!!!1!
int testFunc(){
	int debug = 1;
	while(debug <= 20 ) { //20 den sonrasi zor ya
		printf("%s\n", dizilim(debug));
		debug = debug + 1;
	}
	/*while(debug > 20 && debug < 118 ) { //btw max elektron size see Oganesson
		dizilim(debug);
		debug = debug + 1;
	}*/
}