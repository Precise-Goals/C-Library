#include <stdio.h>

int main()
{
    int Eng, Maths, Science;
    printf("Enter the Marks in English: ");
    scanf("%d", &Eng);
    printf("Enter the Marks in Maths: ");
    scanf("%d", &Maths);
    printf("Enter the Marks in Science: ");
    scanf("%d", &Science);

    if (Eng <= 33 || Maths <= 33 || Science <= 33) {
        printf("Student Failed Because of Less Marks in Individual Subjects\n"); 
    } else if ((Eng + Maths + Science) / 3 <= 40) {
        printf("Student Failed Because of Overall Marks\n");
    } else {
        printf("Pappu Pass hogya\n");
    }

    return 0;
}