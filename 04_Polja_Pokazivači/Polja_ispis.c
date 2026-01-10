#include<stdio.h>
int main(){
    int polje[5] = {1, 2, 3, 4, 5};    
    char ime[] = "Severina Vuckovic";
    float brojevi[4] = {1.2, 7.8, 9.1, 8};
    int* p;
    p = polje;
    printf("%d", p[1]);
    scanf("%c", &ime[2]);
    printf("%.2f", brojevi[0]+brojevi[3]);
    printf("%s", ime);
    return 0;
}
/*  Što će se ispisati nakon izvođenja
    1. printf ----> 2
    2. printf ----> 1.2 + 8 = 9.2
    3. printf ----> "Severina vukovic"

-----------------------------------------------------------





*/
