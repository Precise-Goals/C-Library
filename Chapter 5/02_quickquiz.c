#include <stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

void good_morning()
{
    printf("good morning\n");
}
void good_afternoon()
{
    printf("good afternoon\n");
}
void good_evening()
{
    printf("good night\n");
}

int main()
{
    /*
    Quick Quiz: Write a program with three functions
        1. Good morning function which prints “good morning”.
        2. Good afternoon function which prints “good afternoon”.
        3. Good night function which prints “good night”.
        main() should call all of these in order 1→2→3
    */
    good_morning();
    good_afternoon();
    good_evening();

    return 0;
}