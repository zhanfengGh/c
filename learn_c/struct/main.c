//
//  main.c
//  struct
//
//  Created by imac.feng on 2018/8/5.
//  Copyright © 2018 zhanfeng.zhang. All rights reserved.
//

#include <stdio.h>

#include "complex.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct complex_struct a = {11.11, 22.33},b;
    
    Complex c1 = &a;
    
    (*c1).real = 111; c1->imaginary=222;
    
    a.real = 5; a.imaginary = 6;
    
    printf("Hello, World!\n");
    return 0;
}


struct complex_struct_2 {
    double real;
    double imaginary;
};
