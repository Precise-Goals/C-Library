// #include <math.h>
// #include <stdio.h>
// int main()
// {
//     // Write a C program to check whether a given number is an Armstrong number or not.
//     int num, og, r, dig = 0, sum = 0;
//     printf("Enter the Number: ");
//     scanf("%d", &num);
//     og = num;
//     while (num != 0) {
//         num /= 10;
//         dig++;
//     }
//     num = og;
//     while (num != 0) {
//         r = num % 10;
//         sum += pow(r, dig);
//         num /= 10;
//     }
//     if (og == sum) {
//         printf("The Number is Armstrong\n");
//     } else {
//         printf("The Number is not Armstrong\n");
//     }

//     return 0;
// }