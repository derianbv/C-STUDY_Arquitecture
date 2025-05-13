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



// ------------------------------------------------------------------------------------------------------------------------------------------------



Estudiar esto para la clase del miércoles 
// Function to print binary representation of a 32-bit integer
void print_binary(uint32_t value) {
    for (int i = 31; i >= 0; i--) {
        putchar((value & (1U << i)) ? '1' : '0');

        // Optional: add a space after sign, exponent, and mantissa fields
        if (i == 31 || i == 23) {
            putchar(' ');
        }
    }
    putchar('\n');
}

int main() {
    float f = 3.14f;
    uint32_t bits;

    memcpy(&bits, &f, sizeof(f));

    printf("Float: %f\n", f);
    printf("Hex  : 0x%08X\n", bits);
    printf("Binary: ");
    print_binary(bits);

    return 0;
}

