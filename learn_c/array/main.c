//
//  main.c
//  array
//
//  Created by imac.feng on 2018/8/8.
//  Copyright © 2018 zhanfeng.zhang. All rights reserved.
//

#include <stdio.h>

void foo(int *);

void copyArray(int *, int *, int);

void printArray(int *, int);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[5];
    a[1] = 1;
    
    int b[] = {1, 2, 3};
    printf("%d\n", a[1]);
    printf("%d\n", *(a + 1));
    
    
    foo(b);
    
    
    int c[5], d[] = {5, 4, 3, 2, 1};
    copyArray(d, c, 5);
    printArray(c, 5);
    printArray(d, 5);
    printf("Hello, World!\n");
    return 0;
}

void foo(int a[5]) {
    printf("%d\n", a[1]);
}

void copyArray(int * src, int * dst, int lng) {
    for (int i = 0; i < lng; i++) {
        //dst[i] = src[i];
        //*(dst + i) = *(src + i);
        *(dst++) = *(src++);
    }
}

void printArray(int * array, int lng) {
    printf("[");
    for (int i = 0, last = lng - 1; i < lng; i++) {
        if (i == last) {
            printf("%d", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
    printf("]\n");
}



