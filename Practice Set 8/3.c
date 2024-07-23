#include <stdio.h>

int strlen2(char mod[]);
int strlen2(char mod[])
{
    int i = 0;
    while (mod[i] != '\0') {
        i++;
    }
    return i;
};

int main()
{
    // 3. Write your own version of strlen function from <string.h>
    char dom[] = "I was only an Experiment...";
    printf("The length of String is %d\n", strlen2(dom));
    return 0;
}