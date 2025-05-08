#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {
    float f = -3.14f;        // The float value
    uint32_t hexValue; /* 
Esta parte del codigo es posible gracias 



*/

    // Copy the raw bytes of the float into an integer
    memcpy(&hexValue, &f, sizeof(f));

    // Print the float and its hex representation, lo que se ve en la clase, de que 4 bytes pueden ser varios numeros depende de su representación. 
    printf("Float: %f\n", f); // formato IEEE decimal 
    printf("Hex: 0x%08X\n", hexValue); //entero con signo     
    printf("Dec:" %ud\n", hexValue); //entero sin signo
    printf(Dec SIGN: %d\n", hexValue); 

    return 0;
}


