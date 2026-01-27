/* Sto ce se ispisati nakon sto se izvrsi sljedeci program

#include<stdio.h>
#inlcude<stdlib.h>
int main(){
	int i, numbers[1];
	numbers[0] = 9;
	free(numbers);
	printf("\nStored integers are: ");
	printf("\nNumbers[%d] = %d", 0, numbers[0]);
	return 0;
}
Objasnjenje: Nedefinirano ponasanje
numbers je na stogu spremljen
koristenje free(numbers) kao da je sa heapa je UB

Cak i da je dinamicki alociran, koristenje memorije
poslje free je UB
***********************************************************
Sto ce se ispisati
***********************************************************
#include<stdio.h>
#include<stdlib.h>
int main(){
	struct test{
		int i;
		float f;
		char c;
	};
	struct test *ptr;
	ptr = (struct test*)malloc(sizeof(struct test));
	ptr->f = 6.5F;
	printf("%f", ptr->f);
	return 0;
}

Program dinamički alocira memoriju za jednu strukturu, 
pristupa njezinim članovima pomoću operatora ->,
ali bi trebao provjeriti povratnu vrijednost malloc 
i osloboditi memoriju pomoću free.







*/
