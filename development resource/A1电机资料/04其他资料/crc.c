#include <stdint.h>
#include <stdio.h>


//CRC校验函数为：
uint32_t crc32_core(uint32_t* ptr, uint32_t len){
    uint32_t xbit = 0;
    uint32_t data = 0;
    uint32_t CRC32 = 0xFFFFFFFF;
    const uint32_t dwPolynomial = 0x04c11db7;
    for (uint32_t i = 0; i < len; i++){
        xbit = 1 << 31;
        data = ptr[i];
        for (uint32_t bits = 0; bits < 32; bits++){
            if (CRC32 & 0x80000000){
                CRC32 <<= 1;
                CRC32 ^= dwPolynomial;
            }
            else
                CRC32 <<= 1;
            if (data & xbit)
                CRC32 ^= dwPolynomial;
            xbit >>= 1;
        }
    }
    return CRC32;
}


int main(){

    uint32_t sdata[7];

    sdata[0] = 0x0000EEFE;
    sdata[1] = 0x0000FF0A;
    sdata[2] = 0x00000000;
    sdata[3] = 0x19000000;
    sdata[4] = 0x00000000;
    sdata[5] = 0x0C000000;
    sdata[6] = 0x00000000;

    printf("1: %x \n", *((uint8_t*)sdata));
    printf("2: %x \n", *((uint8_t*)sdata+1));
    printf("3: %x \n", *((uint8_t*)sdata+2));
    printf("4: %x \n", *((uint8_t*)sdata+3));
    
    printf("0x%x\n",crc32_core(sdata, 7));
    //getchar();

    return 0;
}
