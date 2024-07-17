#include <math.h>
#include <stdio.h>

int main()
{
    int a, area;
    printf("Enter the Side of Square: ");
    scanf("%d", &a);
    area = pow(a, 2); // pow returns Double data type   
    printf("The Area of The Square: %d\n", area);
    return 0;
}