#include<stdio.h>
int main(void){
    int a = 1, b = 2, c = 3;
    int* const pok = &a;
    pok = &c;
    printf("%d", *pok);
    return 0;
}
/*Sto ce se ispisati

 a) Pogreska prilikom prevodenja
 b) 1
 c) 3

 Odgovor: a)
 
 Pokazivac je const tipa, ne smije se mijenjati adresa
 na koju pokazuje
 
 
 
 
 


*/

