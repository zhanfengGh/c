//
//  main.c
//  learn_c
//
//  Created by feng on 2018/8/3.
//  Copyright © 2018 zhanfeng.zhang. All rights reserved.
//

#include <math.h>
#include <stdio.h>

void func_a(int);
int func_gcd(int, int);
int func_gcd_recursive(int, int);

int fabonacii_recursive(int);
int fabonacii(int);

int func_contains(int, int, int);

int main2(int argc, const char * argv[]) {
    // insert code here...
    // printf("Hello, World!\n");
    // func_a(158);
    
    // int a = 1000, b = 255;
    // int gcd = func_gcd(a, b);
    // gcd = func_gcd_recursive(a, b);
    
    // int fab = fabonacii(5);
    // fab = fabonacii_recursive(5);
    
    int counter = func_contains(0, 100, 9);
    counter = func_contains(0, 10, 0);
    
    return 0;
}

//enum coordinate_type {RECTANGULAR = 1, POLAR};

int main(int argc, const char * argv[]) {
    enum coordinate_type {RECTANGULAR = 1, POLAR};
//  int RECTANGULAR;
    printf("%d %d\n", RECTANGULAR, POLAR);
    return 0;
}



void func_a(int n){
    printf("%d: %d, %d\n", n, n / 10, n % 10);
}

int func_gcd_recursive(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    return func_gcd_recursive(b, a % b);
}

int func_gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    for (int r = a % b; r; r = a % b) {
        a = b;
        b = r;
    }
    return b;
}

int fabonacii_recursive(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fabonacii_recursive(n - 1) + fabonacii_recursive(n - 2);
}

int fabonacii(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    int fn_1 = 1, fn_2 = 0, fab = fn_1 + fn_2;
    for (int i = 3; i <= n; i++) {
        fab = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fab;
    }
    
    return fab;
}

int _func_num_contains(int, int);
int func_contains(int start, int end, int c) {
    int counter = 0;
    for (; start <= end; start++) {
        counter += _func_num_contains(start, c);
    }
    return counter;
}

int _func_num_contains(int number, int c) {
    if (number == 0 && c == 0) {
        return 1;
    }
    int counter = 0;
    for (; number; number /= 10) {
        if (number % 10 == c) {
            counter += 1;
        }
    }
    return counter;
}

int func_is_prime(int x) {
    if (x == 1 || x == 2 || x == 3) {
        return 1;
    }
    // 把x对6取余，余数为0，2，3，4时，可以确定都不是素数
    // 余数为1时，x=6i + 1;余数为5时，x=6i-1
    if (x % 6 != 1 && x % 6 != 5) {
        return 0;
    }
    // 从5开始以6步进（6i-1,6i+1)
    for (int i = 5; i <= sqrt(x); i += 6) {
        // 对6x-1或者6x+1取余
        if (x % i == 0 || x % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
