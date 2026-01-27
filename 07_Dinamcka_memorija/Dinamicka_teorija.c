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
realloc() funkcia

void* realloc(void* ptr, size_t size);

Funkcija realloc() mijenja rezervirani memorijski prostor pokazivaca
ptr prema velicini

Funkcija realloc ce rezervirati prostor trazene velicine:

sadrzaj rezerviranog prostora trebao bi biti identican 
onog starog objekta sve dok je alocirano podrucje
vece od postojeceg

vrijednosti novog objekta veceg od starog nisu odredene
tj ne mogu biti poznate

pokazivac na alociranu memoriju novog objekta

ako nije moguce alocirati trazenu memoriju, stari objekt nije
dealociran i njegov sadrzaj je nepromijenjen
******************************************************************
realloc() primjer

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int *ptr, i;
	ptr = (int *) malloc(10 * sizeof(int));
	if (ptr == NULL) {
		printf("Neuspjesna alokacija!\n");
		exit(-1);
		} else {
			for(i=0; i<10; i++) ptr[i] = i; ---> inicijalizira od 0 do 9, inace garbage zbog malloca
			}
			for(i=0; i<10; i++) printf("%d\n", ptr[i]); ----> printaj ih
			ptr = realloc(ptr, 100 * sizeof(int)); ---> povećaj na 400 bytea
			if (ptr == NULL) {
				printf("Neuspjesna alokacija!\n");
				exit(-1);
				}
				printf("novi pokazivac\n");
				for(i=0; i<100; i++) printf("%d\n", ptr[i]);
				free(ptr);
				return 0;
				}
			}
		}
	}
}
******************************************************************
Dinamicka memorija i stringovi

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	int i, N = 100;
	char **txt;
	txt = calloc(N, sizeof(char*)); 
	txt[0]= strdup("Hello");
	txt[1]= strdup("World!");
	txt[2]= strdup("je prvi C program");
	printf("%s\n%s\n%s\n", txt[0], txt[1], txt[2]);
}

Alocira se niz od 100 pokazivaca na char
Zbog calloca svi su pocetno na NULL postavljeni

strdup: 1) alocira memoriju, 2) kopira string, 3) vraca char*

svaki txt[i] je zasebni dinamicki string

***************************************************************************
Alociranje visedimenzionalnih nizova

Dinamicke matrice

int brojRedaka = 5, brojStupaca = 10;
double** mat;
mat = malloc(brojRedaka * sizeof(double)); //alociranje memorije za polje pokazivaca na retke
for(k=0;k<brojRedaka;k++) //alociranje za svaki redak
	mat[i] = malloc(brojStupaca*sizeof(double));
for(i=0;i<brojRedaka;i++){
	for(j=0;j<brojStupaca;j++){
		mat[i][j] = 0; //postavljanje vrijednosti elementa na 0
	}
}
//dealociranje memorije za svaki redak
free(k=0;k<brojRedaka;k++)
	free(mat[k]);
free(mat); //dealociranje memorije na polje pokazivaca redaka


















*/
