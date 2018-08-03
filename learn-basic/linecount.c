#include <stdio.h>

int main(int argc, char ** argv){
	int c,nc=0;
	while((c=getchar())!=EOF){
		if(c=='\n'){
			++nc;
		}
	}
	printf("%d", nc);
	return 0;
}
