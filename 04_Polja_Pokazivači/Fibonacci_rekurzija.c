#include<stdio.h>
int func(int i){
    if(i == 0)
        return 0;
    if(i == 1)
        return 1;
    return func(i - 1) + func(i - 2);
    //Fibonacci ???
}
int main(){
    int i;
    for(i = 0;i < 5;i++){
        printf("%d", func(i));
    }
    return 0;
}
/*  Što će se ispisati kada se izvrši sljedeća funkcija
    a) 01233
    b) Ništa od navedenog
    c) 0122
    d) 01123

    Odgovor: d)






*/