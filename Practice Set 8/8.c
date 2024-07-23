#include <stdio.h>

int Count(char mod[], char c[])
{
    int count = 0, i = 0;
    while (mod[i] != '\0') {
        if (mod[i] == c[0]) {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    /* 8. Write a program to count the occurrence of a given character in a string */
    char entj[] = "In the realm of nature, amphibians embody the essence of adaptability. They navigate the delicate balance between land and water, thriving in diverse habitats. Their lives are a testament to the resilience and beauty of the natural world. Each amphibian carries the story of evolution, adapting to the shifting tides of their environments.With their unique ability to breathe both in water and on land, they symbolize the harmony between different ecosystems. Their presence is a reminder of the intricate web of life and the importance of preserving our planet's diverse species. By bearing witness to their existence, we gain a deeper appreciation for the beauty of the natural world. Amphibians are not just survivors; they are indicators of ecological health. Their sensitivity to environmental changes highlights the impact of human activities on nature. Protecting their habitats ensures the continued balance of our ecosystems, emphasizing our responsibility to safeguard the delicate threads of life that bind us all.";
    char c[2];
    printf("%s\n", entj);
    printf("Enter the character you want to count : ");
    scanf("%s", c);
    printf("The Number of Times %s occur in given String is %d\n", c, Count(entj, c));
    return 0;
}