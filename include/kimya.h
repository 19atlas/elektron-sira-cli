char* _dizilim(char* format, int elektron) {
	char* ret;
	asprintf(&ret, format, elektron);
	return ret;
}

char* dizilim(int elektron){
	if(elektron <= 2){
		return _dizilim("%d)", elektron);
	} if (elektron <=10){
		return _dizilim("2) %d)", elektron-2);
	} if (elektron <=18){
		return _dizilim("2) 8) %d)", elektron-10);
	} if (elektron <=20){
		return _dizilim("2) 8) 8) %d)", elektron-18);
	}
}
int ileri_dizilim(int elek){
	return(elek);
}