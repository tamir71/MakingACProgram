// Learning Variable Pointers

#include <stdio.h>

int main() {
    int int1;
    int int2;
    int sum;
    int product;    

    printf("Enter the first number\n");
    scanf("%d", &int1);

    printf("Enter the second number\n");
    scanf("%d", &int2);

    sum = int1 + int2;

    printf("Sum is %d\n", sum);
        
    printf("Enter the first number\n");
    scanf("%d", &int1);

    printf("Enter the second number\n");
    scanf("%d", &int2);
    
    product = int1 * int2;

    printf("Product is %d\n", product);

    return 0;
}
