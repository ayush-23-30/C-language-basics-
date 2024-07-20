#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{

    // int a,b,c;  a = 10;
    // b = 15; c = 15;

    // printf("avg of 3 numbers %d\n", (a+b+c)/3);

    // if(a>=b){
    //     printf("a is bigger than B \n");
    // }else{
    //     printf("B is bigger than A \n");
    // }

    // // checking the character is a digit or not

    // char ch;
    // printf("enter any character : ");
    // scanf("%c", &ch);

    // if(isdigit(ch)){
    //     printf("this is a digit  %c\n", ch);

    // }else{
    //     printf("this is not a digit %c \n", ch);
    // }

    // int n;
    // printf("enter any number: ");
    // scanf("%d",&n);
    // if (n>0)
    // {
    //    printf("this is a natural number\n");
    // }else{
    //     printf("this is not a natural number \n");
    // }
    // checking number is armstrong or not

    int num, originalNum, remainder;
    int n = 0;
    int result = 0;

    printf("enter a armstrong number : ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
    {
        printf("this is a armstrong number %d\n", num);
    }
    else
    {
        printf("this is not a armstrong number %d\n", num);
    }

    return 0;
}

//  int num, originalNum, remainder, n = 0, result = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     // Count the number of digits
//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     if (result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);
