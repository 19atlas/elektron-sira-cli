void dizilim(int elektron){
    //ilk kısım 2) 8) 8) 2)
    while (true){
        if(elektron <= 2){
            printf("%d)\n", elektron);
            break;
        }else if (elektron <=10 ){
            printf("2) %d)\n", elektron-2);
            break;
        }else if (elektron <= 12 ){
            printf("2) 8) %d)\n", elektron-10);
            break;
        }else if (elektron <= 20){
            printf("2) 8) 8) %d)", elektron-18);
            break;
        }
    }
}
void ileri_dizilim(int elek){
    printf("%d", elek);
}