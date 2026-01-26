/*

Slobodnom memorijom upravlja operacijski sustav
*******************************************************
Programski jezik c nema mogucnost izravnog upravljanja
slobodnom memorijom
*******************************************************
Ima mogucnost posrednog upravljanja memorijom
preko pokazivaca i funkcija malloc(), calloc(), free()
i realloc()
******************************************************
Dinamicka memorija - postupak kojim se dobiva na upotrebu
slobodna memorija

Dinamicka - vrsi se tijekom izvodenja programa

Kolicina memorija se definira prilikom poziva funkcije
dodjele memorije

*********************************************************
Dinamicki objekti: polja nepoznate ili promjenjive duljine
dinamicke strukture podataka; povezani popisi, stabla
*********************************************************
Nakon prestanka potrebe za dodatnom memorijom
istu tu memoriju je potrebno osloboditi
*********************************************************
Funkcije definirane u zaglavlju <stdlib.h>
********************************************************
malloc()

void* malloc(size_t size);

Funkcija malloc() rezervira prostor za objekt velicine size

Povratna vrijednost: null pokazivac ili pokazivac
na alociranu memoriju

malloc primjer:

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *ptr, i;
	ptr = (int*)malloc(10 * sizeof(int));
	if(ptr == NULL){
		printf("Neuspjesna alokacija");
	}
	else{
		for(int i = 0;i<10;i++){
			ptr[i] = i;
		}
	}	
	for(i=0;i<10;i++)
		printf("%d\n, ptr[i]");
	return 0;	
}

*/
