//
//  main.c
//  tbt_psw
//
//  Created by feng on 2018/8/3.
//  Copyright © 2018 zhanfeng.zhang. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void sh_get_wa205_supper_psw(const char *, char *);

int main(int argc, const char * argv[]) {
    // insert code here...
    char psw[11];
    sh_get_wa205_supper_psw(argv[1], psw);
    printf("sn: %s\npsw: %s\n", argv[1], psw);
    return 0;
}

void sh_get_wa205_supper_psw(const char * sn, char * psw) {
    const int PASSWORD_LENGH = 10;
    const char szWA205Default[] = "TBIT_WA205";
    const char szMask[]= "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ*#";
    
    typedef unsigned char U8;
    U8 i, c;
    size_t snLen = strlen(sn);
    size_t szMaskLen = strlen(szMask);
    for(i = 0; i < PASSWORD_LENGH; i++) {
        if(i < snLen) {
            c = sn[snLen - 1 - i];
        } else {
            c = '0';
        }
        c = szWA205Default[i] ^ c;
        psw[i] = szMask[c % szMaskLen];
    }
    psw[PASSWORD_LENGH] = 0;
}
