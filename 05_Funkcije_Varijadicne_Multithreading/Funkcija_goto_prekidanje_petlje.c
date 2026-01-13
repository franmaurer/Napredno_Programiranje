#include<stdio.h>
int main(){
	int i, j, k;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				printf("%d %d %d", i, j, k);
				if(j == 3)
					goto out;
			}	
		}
		
	}
	out:
		printf("Came out of the loop");
}
/*
	Demonstracija prikaza skoka iz zamršene petlje
	pomoću goto naredbe
	
*/
