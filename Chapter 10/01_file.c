#include <stdio.h>

int main()
{
    /* File Notes */
    /* FILE is the structure for opening and closing files */
    /* A FILE pointer can be created as follows:
       FILE *ptr;
       ptr = fopen("filename.ext"; "mode");*/
    /* "r" -> open for reading
       "rb" -> open for reading in binary
       "w" -> open for writing // If the file exists, the contents will be
       overwritten
       "wb" -> open for writing in binary
       "a" -> open for append // If the file does not exist, it will be created */
    FILE* ptr;
    int num;
    ptr = fopen("01.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("The num is %d\n", num);
    //file pointer moves as we kept reading this..
    fscanf(ptr, "%d", &num);
    printf("The num is %d\n", num);
    return 0;
}