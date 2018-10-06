/*
 * =====================================================================================
 *
 *       Filename:  operator.c
 *
 *    Description:  operator learn
 *
 *        Version:  1.0
 *        Created:  09/20/2018 13:54:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhanfeng.zhang (), zhanfeng.zhang@icloud.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void print_type_range();
void print_type_size();


int main(int argc, const char * argv[]) {
	print_type_range();
	print_type_size();
	return 0;
}

void print_type_range() {
	printf("%16s: %d~%d\n","signed char", SCHAR_MIN, SCHAR_MAX);
	printf("%16s: %d~%d\n","signed short", SHRT_MIN, SHRT_MAX);
	printf("%16s: %d~%d\n","signed int", INT_MIN, INT_MAX);
	printf("%16s: %ld~%ld\n","signed long", LONG_MIN, LONG_MAX);
	printf("%16s: %ld~%ld\n","signed long",-(long)((unsigned long)~0 >> 1), (long)((unsigned long)~0 >> 1));

	printf("%16s: %u~%u\n","unsigned short",0, USHRT_MAX);
	printf("%16s: %lu~%lu\n","unsigned long",0ul, ULONG_MAX);

}

void print_type_size() {
	printf("%16s: %lu bytes\n", "char", sizeof(char));
	printf("%16s: %lu bytes\n", "short", sizeof(short int));
	printf("%16s: %lu bytes\n", "int", sizeof(int));
	printf("%16s: %lu bytes\n", "long", sizeof(long));


	if ( 0 ) {
        if (1) {
            if (0) {

            }
        }

	}
}
