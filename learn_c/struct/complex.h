//
//  complex.h
//  struct
//
//  Created by imac.feng on 2018/8/5.
//  Copyright © 2018 zhanfeng.zhang. All rights reserved.
//

#ifndef complex_h
#define complex_h

#include <stdio.h>

struct complex_struct {
    double real;
    double imaginary;
};

typedef struct complex_struct * Complex;

struct complex_struct make_from_real_img(double, double);

struct complex_struct make_from_mag_ang(double, double);

double real_part(struct complex_struct);

double imag_part(struct complex_struct);

double magnitude(struct complex_struct);

double angle(struct complex_struct);


double c_real_part(Complex);

double c_imag_part(Complex);

double c_magnitude(Complex);

double c_angle(Complex); 


#endif /* complex_h */
