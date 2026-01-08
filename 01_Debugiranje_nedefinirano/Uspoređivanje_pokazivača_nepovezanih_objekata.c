#include <stdio.h>
#include<stdlib.h>
int main (void)
{
	long *p = malloc(sizeof(long));
	long *q = malloc(sizeof(long));
	if (p > q)
	    return printf("Dobar");
}
/*  Odgovor: Usporedba pokazivača nepovezanih objekta

-----------------------------------------------------------------------------------------------------
1) Malloc vraća void pokazivač, u ovom slučaju on će biti long veličine, ali i dalje void tipa
-----------------------------------------------------------------------------------------------------
1.1) Program definira dva pokazivača, imena p i q, te ih usmjerava na dva različita, memorijska bloka
-----------------------------------------------------------------------------------------------------
1.2) Uspoređivanje dva ne pozvezana memorijska bloka ne smisla, te je nedefinirano ponašanje, redonsljed
tih adresa nije definiran standardom
-----------------------------------------------------------------------------------------------------
2) Uspoređivanje (<, >, <=, >=) pokazivača ima smisla samo ako
    2.1) Samo ako pokazivači pokazuju na elementa istog polja
    2.2) Pokazuju na isti objekt
    2.3) Ili pokazuju na one-past-the-end istog polja
-----------------------------------------------------------------------------------------------------
3) Ovaj program će se zapravo kompajlirati i pokrenuti, ovo je primjer
sinataksne greške, malloc na heap zauzima adrese inače sekvencijalno
u našem slučaju, p će vjerojatno biti na adresi koja je manja od q, te
u našem program if statement će vjerojatno bacati nulu, jer nikada
se neće if(p>q) izvršiti
*/