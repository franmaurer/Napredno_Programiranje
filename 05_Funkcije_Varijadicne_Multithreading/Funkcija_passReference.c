 
	Proslijeđivanje po refrenci u C jeziku ne postoji
--------------------------------------------------------------------------------------------------
	U C jeziku, svi parametri se proslijeđuju po vrijednosti
---------------------------------------------------------------------------------------
	Kada se u C jeziku, koristi mehanizam pokazivača, za pristup objektima
	izvan funkcije, onda se žargonski kaže, da se to naziva pristup po referenci
	jer je učinak sličan
---------------------------------------------------------------------------------------
	a) void foo(int* x){
		*x = 5;
		}
	b) int bar(int* x){
		return *x + 5;
		}
	c) int fiz(int* x){
		return x[3] + x[6];	
		}
---------------------------------------------------------------------------------------
	Proslijeđivanje parametara po referenci
---------------------------------------------------------------------------------------
	int bar(int* c, int* d){
		int res = *c + *d;
		*c = 3;
		*d = 7;
		return res;
	}
	int foo(){
		int a = 5, b = 9, c;
		c = bar(&a, &b);
		c = c + a + b;
		return c;
		}
---------------------------------------------------------------------------------------
	Povratna vrijednost iz foo: 24
---------------------------------------------------------------------------------------
/**/
