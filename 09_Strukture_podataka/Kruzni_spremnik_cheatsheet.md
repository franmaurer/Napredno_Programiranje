************************************************************
Cheet sheet of kruznog spremnika
***********************************************************
Treba napisati pet funkcija i jednu strukturu

struktura s podatcima za:
	1. int head
	2. int tail
	3. int count
	4. int data[BUFFER_SIZE]

	* koristiti typedef, neka BUF_SIZE bude makro,i nazvati ga na kraju nesto poput CircularBuffer

1. Funkcija - inicijalizacija kruznog spremnika
	1.1 void cb_init(CircularBuffer* cb)
	1.2 Postavi preko cb; head, tail i count na 0
	1.3 cb_init gotov

2. Funkcija - Pisanje elemenata u kruzni spremnik
	2.1 void cb_push(CircularBuffer* cb, int x)
	2.2 Postaviti data[cb->head] = x //Postavi za data polje na head indeksu, podatak koji unosis
	2.3 Kruzno Upisiavnje podataka preko
		cb->head = (cb->head + 1) % BUFFER_SIZE;
	2.4 Provjeri da li je pun, ako je pisi na prvi upisani element
		if(cb->count == BUFFERSIZE){
			cb->tail = (cb->tail + 1 ) % BUFFER_SIZE
		}else{
			cb->count++;
		}

3. Funkcija - Prinatnje elemenata
	3.1 Postavi varijablu index na tail
	3.2 Od o do count, printaj data[index], index se kruzno krece
	3.3 printaj novi red

4. Funkcija - Provjera popunjenosti funkcije
	4.1 is_full, vrati count ako je jednak BUFFER_SIZE
	4.2 if_empty, vrati count ako je jednak 0

5. Funkcija - Brisanje
	5.1 postavi head, tail i count na 0



		
