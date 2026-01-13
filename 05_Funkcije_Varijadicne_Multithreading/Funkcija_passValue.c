/*
#include<stdio.h>
void sumaPrvih(int n){
	int i, sum = 0;
	for(i=0; i<=n;i++){
		sum += 1;
		printf("Suma prvih n brojeva je %d", sum);
	}
	n += 1;
}
int main(){
	int n = 5;
	sumaPrvih(n);
	printf("n = %d\n", n);
	return 0;	
}
---------------------------------------------------------------------------------------
int bar(int c, int d){
	int res = c + d;
	c = 3;
	d = 7;
	return res;
}	
int foo(){
	int a = 5, b = 9, c;
	c = bar(a, b);
	c = c + a + b;
	return c;
}
---------------------------------------------------------------------------------------
	bar() ne može mijenjati varijable a i b iz funcije foo()
---------------------------------------------------------------------------------------
	c i d, su sasvim druge varijable, koje postoje samo pri pozivu, funckije
	dobivaju vrijednost samo tijekom toga bloka
---------------------------------------------------------------------------------------
	povratna vrijednost foo: 28
---------------------------------------------------------------------------------------
*/
