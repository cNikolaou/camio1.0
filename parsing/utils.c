/*
 * utils.c
 *
 *  Created on: Dec 20, 2012
 *      Author: mgrosvenor
 */


#include <stdint.h>
#include <ctype.h>

#include "utils.h"


int isodigit(char c){
    return c >= '0' && c <= '7';
}

int isbdigit(char c){
    return c >= '0' && c <= '1';
}

 uint8_t getxdigit(char c) {
    if(isupper(c)) return 10 + (c - 'A');
    return 10 + (c -'a');
}


int  iswhite(char c){
    return c == '\r' || c == '\n' || c == ' ' || c == '\t';
}


int  isnwhite(char c){
    return iswhite(c)|| c == '\0';
}
