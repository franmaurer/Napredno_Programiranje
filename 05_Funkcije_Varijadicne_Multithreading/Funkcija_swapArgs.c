#include<stdio.h>
void swapVar(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int i = 10, j = 20;
	printf("Prije swapa: i = %d, j = %d", i, j);
	puts("");
	swapVar(&i, &j);
	printf("Nakona swapa: i = %d, j = %d", i, j);
	puts("");
	return 0;
}
