#include <stdio.h>

union HexConverter {
    unsigned int value;

    struct {
        unsigned char byte0;
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
    } bytes;

  
    struct {
        unsigned int b0 : 8;
        unsigned int b1 : 8;
        unsigned int b2 : 8;
        unsigned int b3 : 8;
    } bits;
};

int main() {
    union HexConverter data;

    printf("Enter a 4-byte unsigned integer: ");
    scanf("%u", &data.value);

    printf("\nBytes : 0x%02X %02X %02X %02X\n",data.bytes.byte3,data.bytes.byte2,data.bytes.byte1,data.bytes.byte0);
    printf("Bit-fields : 0x%02X %02X %02X %02X\n",data.bits.b3,data.bits.b2,data.bits.b1,data.bits.b0);
	
    return 0;
}

