#include<stdio.h>
int main(void){
    int a = 0, b = 1, c = 2;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    
    *pc = a + *pb;
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    (*pa++);
    printf("%d", pa);
    printf("%d", &a);
    printf("%d", pc);
    return 0;
}
/*  Što će se ispisati:
    
    1.printf = 0
    2.printf = 1
    3.printf = 1
    4.printf = adresa od a
    5.printf = 1
    6.printf = 1
*/

