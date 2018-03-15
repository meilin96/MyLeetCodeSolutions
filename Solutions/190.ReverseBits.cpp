#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    uint32_t ref[33];
    for (int i = 1; i < 33; i++) {
        ref[i] = 1 << (i - 1);
    }
    for (int i = 1; i < 33; i++) {
        if (n & ref[i]) {
            res = res ^ ref[33 - i];
        }
    }
    return res;
}
int main(int argc, char* argv[]){
    printf("\n%u\n", reverseBits(atoi(argv[1])));
}
