#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num; // store the memory address of the num varibale

    printf("Value of num %d\n",num);
    printf("Address of num : %p\n",&num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value at ptr (dereferencing): %d\n", *ptr); // Accessing the value of num

}