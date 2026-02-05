Nul matrica
***********************************************************
void NulMat(double** mat, int brojRedaka, int brojStupaca){
	for(int i = 0;i<brojRedaka;i++){
		for(j=0;j<brojStupaca;j++){
			mat[i][j] = 0;
		}
	}
}
*******************************************************
Printanje matrice
*********************************************************
void printMat(double** mat, int brojRedaka, int brojStupaca, char* format){
	int i, j;
	for(i=0;i<brojRedaka;i++){
		for(j=0;j<brojStupaca;j++){
			printf(format, mat[i][j]);
			printf("\n");
		}
	}
}
********************************************************
Alociranje matrice
*******************************************************
double** alocirajMat(int brojRedaka, int brojStupaca){
	int k;
	double** mat = malloc(brojRedaka * sizeof(double));
	if(mat == NULL)
		return NULL;
	for(k=0;k<brojRedaka;k++){
		mat[k] = malloc(brojStupaca*sizeof(double));
	}
	return mat;
}
********************************************************
Dealociranje matrice
********************************************************
void dealocirajMat(double** mat, int broj redaka){
	int k;
	for(k=0;k<brojRedaka;k++){
		free(mat[k]);
	}
	free(mat);
}
********************************************************
Vazno: uvijek provjeriti uspjesnost postupka alokacije

funkcijom free() oslobada se prethodno alocirana memorija

pokazivac ptr potrebno je usmjeriti na vrijednost null
jer funkcija free() ne mijenja njegovu vrijednost

Oslobodena memorija se ne smije koristiti
*******************************************************
