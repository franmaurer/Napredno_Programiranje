#include<stdio.h>
void checkEvenorNot(int num){
	if(num % 2 == 0)
		goto even;
	else
		goto odd;
	even:
		printf("%d is even", num);
		return;
	odd:
		printf("%d is odd", odd);
}
int main(void){
	int num = 26;
	checkEvenOrNot;
	return 0;
}
/* 
-----------------------------------------------------------------------------------
	1. Goto === Naredba skoka
-----------------------------------------------------------------------------------
   	Naredba se koristi za skok s bilo kojeg mjesta
   	na bilo koje, osim s jedne funkcije u drugu, isto tako
   	ne smije preskočiti inicijaliziranje varijable automatske vrijednosti
-----------------------------------------------------------------------------------
	2. Nedostatci goto naredbe
-----------------------------------------------------------------------------------
	Upotreba naredbe se ne preporučuje jer programsku logiku čini
	vrlo složenom
-----------------------------------------------------------------------------------
	Korištenje goto znatno otežava praćenje toka programa
-----------------------------------------------------------------------------------
	Korištenje goto čini zadatak, analize i provjere, ispravnosti programa
	vrlo teškim
-----------------------------------------------------------------------------------
	Korištenje goto, se može izbjeći, korištenjem naredbi, break i continue
-----------------------------------------------------------------------------------
*/
