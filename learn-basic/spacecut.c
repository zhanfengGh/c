#include <stdio.h>

int main(int argc, char * argv[]){
	int prec, curc;

	prec=EOF;
	while ((curc=getchar())!=EOF){
		if (prec!=' ' || curc!=' '){
			putchar(curc);
		}
		prec=curc;
	}
	return 0;
}


