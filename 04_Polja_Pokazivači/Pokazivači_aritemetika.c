#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = (arr + 1);
    printf("%d %d\n", *(arr + 1), *(ptr - 1));
    return 0;
}
/* Što će se ispisati
   a) 2 1
   b) 2 2
   c) 2 slučajan broj
   d) slučajan broj 1

   Odgovor: a)

--------------------------------------------------------------------------
ptr = (arr + 1) ---> ime polja predstavlja adresu prvog elementa polja
(arr + 1) znači uzmi adresu prvog elementa polja iz {1, 2, 3, 4, 5}
a to je 1 i pomakni se za jedan indeks, a to je 2
--------------------------------------------------------------------------
*(ptr -1) = *(arr + 1 -1) = *(arr) = arr[0] = 1

*/