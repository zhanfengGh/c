#include <stdio.h>

int main(int argc, char * argv[]){
	int c=getchar();
	while(c!=EOF){
		putchar(c);
		c=getchar();
	}
	return 2;
}
