#include<stdio.h>
#include<stdarg.h>
int add(int num, ...);
int main(){
	printf("The value from the first func call is = %d\n", add(2, 3, 4));
	printf("The value from the second func call is = %d\n", add(4, 2, 3, 4, 5));
	return 0;
}
int add(int num_args, ...){
	va_list valist;
	int sum = 0;
	va_start(valist, num_args);
	for(int i=0;i<num_args;i++){
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return sum;
}
/*
	va_list valist = pokazivač za varijadične argumente
	va_start(valist, num_args) = valist -> adresa prvog argumenta, num_args -> poslje ovog kreću varijadični
	va_arg(valist, int) = uzmi trenutni argument, i pomakni za jedan indeks pokazivač, int je tipa
	va_end(valist) = počisti sve što ti ne treba
	
*/
