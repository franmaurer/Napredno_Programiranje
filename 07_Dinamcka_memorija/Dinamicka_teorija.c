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
		printf("%d\n", ptr[i]);
	return 0;	
}
Zauzmi memorijski blok od 40 bytea
Provjeri da li je uspjesjno zauzeto
Inicijaliziraj ga
Te printaj
************************************************
calloc()
#include<stdlib.h>
void* calloc(size_t nmemb, size_t size);

Funkcija calloc() rezervira prostor duljine nmemb
objekta od kojih je svaki velicine size

Rezervirani prostor je inicijaliziran na 0

Povratna vrijednost: 
Null pokazivac ili pokazivac na alociranu memoriju


calloc primjer: 
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int* ptr, i;
	ptr = (int*)calloc(10, sizeof(int));
	if(ptr == NULL){
		printf("Neuspjesna alokacija");
		exit(-1);
	}
	for(i=0;i<10;i++){
		printf("%d\n", ptr[i]);
	}
	return 0;
}
***************************************************
Inicijaliziraj memoriju za 10 elemenata tipa int
Za razliku od malloc, calloc automatski inicijalizira 
memoriju na 0

nakon inicijalizacije
ptr[0] = 0.... ptr[1] = 0...... ptr[9] = 0 
********************************************************
free() funkcija -- #include<stdlib.h>
void* free(void* ptr);

Funkcija free() oslobađa rezervirani prostor na koji pokazuje
pokazivac ptr

Ako je ptr NULL pokazivac, nista se ne dogada

Ako pokazivac ptr ne odgovara ranije vracenom pokazivacu
ili ako je prostor bio dealociran, koristenje funkcije
free ili realloc() je nepredvidivo ponasanje

nema povratnu vrijednost (void)
***********************************************************
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int* ptr, i;
	ptr = (int*)malloc(10*sizeof(int));
	if(ptr == NULL){
		printf("Neuspjesna alokacija");
		exit(-1);
	}else{
		for(i=0;i<10;i++)
			 ptr[i] = i;
	}
	free(ptr);
	ptr = (int*)malloc(100*sizeof(int));
	if(ptr == NULL){
		printf("Neuspjesna alokacija");
		exit(-1);
	}
	printf("novi pokazivac");
	for(i=0;i<100;i++)
		printf("%d\n", ptr[i]);
	return 0;
}
************************************************































*/
