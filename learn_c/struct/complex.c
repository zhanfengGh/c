//
//  complex.c
//  struct
//
//  Created by imac.feng on 2018/8/5.
//  Copyright © 2018 zhanfeng.zhang. All rights reserved.
//

#include "complex.h"

#define _USE_MATH_DEFINES
#include <math.h>

struct complex_struct make_from_real_img(double real, double imag) {
    struct complex_struct ret;
    ret.real = real;
    ret.imag = imag;
    return ret;
}

struct complex_struct make_from_mag_ang(double r, double A) {
    struct complex_struct ret;
    ret.real = r * cos(A);
    ret.imaginary = r * sin(A);
    return ret;
}


double real_part(struct complex_struct cs) {
    return cs.real;
}

double imag_part(struct complex_struct cs) {
    return cs.imaginary;
}

double magnitude(struct complex_struct cs) {
    return sqrt(cs.real * cs.real + cs.imaginary * cs.imaginary);
}

double angle(struct complex_struct cs) {
    if (cs.real < 0) {
        return atan(cs.imaginary / cs.real) - M_PI;
    } else {
        return atan(cs.imaginary / cs.real);
    }
}


double c_real_part(Complex cs) {
    return cs->real;
}

double c_imag_part(Complex cs) {
    return cs->imaginary;
}

double c_magnitude(Complex cs) {
    return sqrt(cs->real * cs->real + cs->imaginary * cs->imaginary);
}

double c_angle(Complex cs) {
    if (cs->real < 0) {
        return atan(cs->imaginary / cs->real) - M_PI;
    } else {
        return atan(cs->imaginary / cs->real);
    }
}
