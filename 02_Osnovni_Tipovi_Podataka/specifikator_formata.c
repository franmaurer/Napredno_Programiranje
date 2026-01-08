/*
#include<stdio.h>
int main(){
	unsigned int a = -7;
	printf("%u", a);
		
	return 0;
}
	Što će se ispisati
	a) -7
	b) 7
	c) Ništa od navedenog

	Odgovor: C)
-----------------------------------------------------------------------
1. unsgined int ne može pohraniti ovaj broj,
   događa se konverzija tipa a ne greška
   U dvojnome komplementu 2^32 - 7 = 4294967289
---------------------------------------------------------
2. Kada se sprema negativni broj u unsigned
	2^n - abs(taj_broj), gdje je n broj bitova
	tog tipa podatak
	











*/
