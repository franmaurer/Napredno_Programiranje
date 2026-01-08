#include<stdio.h>
int main(){
    int a = 5, b = 2;
    float c = 3;
    printf("%d %.2f %.2f"
    , a/b, (float)a/b, a/c);
    return 0;
}
/*  Što će se ispisati, odaberite jedan odgovor
    a) 2.5, 2.5, 1
    b) 2, 2.50, 1.67
    c) 2, 2.00, 1.67
    d) 2, 2.00, 1
    e) 2.5, 2.00, 1
    
    Odgovor: b)

-----------------------------------------------------------------------------
1. Dijeljenje s cijelim brojevima
    5/2 -> oba izraza su cijelobrojnog tipa, rezultat će biti
    cijelobrojnog tipa, 5 / 2 = 2.5, cijelibroj(2.5) = 2f
    (int) 5 / (int) 2  == 2
-----------------------------------------------------------------------------
2. Dijelje gdje je jedan realni, eksplicitan cast u realni
    (float)5/2, ako je jedan broj u djeljenju realni,
    drugi isto bude promoviran u realni
    (float) 5 / 2 == 5.0 / 2 == 2.5
-----------------------------------------------------------------------------
3. Dijeljenje gdje je jedan implicitno definiran kao realni, 3 je float tipa
    5 / 3, isto kao i za eksplicitan cast,
    ako je jedan realni i drugi će biti, 5 / 3.0 == 1.67
-----------------------------------------------------------------------------
4. Specifikator formata isto mora odgovarati, bez obzira da li bi račun dao
    dobar rezultat, npr printf("%d", (float)5/2); bi na ispis dalo
    2, jer cast operator bi prebacio 2 u float tipa, podijelio 5.0 s 2.0,
    dobio 2.50, te bi %d ispisao sam 2 od 2.50 tog broja
*/