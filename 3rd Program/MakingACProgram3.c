// Writing Strings to External File

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main() {
    FILE *f = fopen("text1.txt", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
    }

    /* print some text */
    char text[81]; 
    printf("Enter a message!\n");
    memset(text, '\n', sizeof(text));
    fgets(text, sizeof(text), stdin);
    fprintf(f, "Some text: %s\n", text);

    /* print integers and floats */
    char i[81];
    char fl[81];
    printf("Enter an integer! And then a float.\n");
    memset(i, '\n', sizeof(i));
    fgets(i, sizeof(i), stdin);
    fflush(stdout);
    // memset(fl, '\n', sizeof(fl));
    fgets(fl, sizeof(fl), stdin);
    int j = atoi(i);
    float k = atof(fl);
    fprintf(f, "Integer: %d, float: %f\n", j, k);
    
    fclose(f);
}
