// Wap to convert decimal to binary

#include <stdio.h>
int main() {
    int decimal, binary[100], i = 0, j;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    printf("Binary = ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}