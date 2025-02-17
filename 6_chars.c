#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    /* char pointer to store the name */
    char *name = (char *)malloc(7 * sizeof(char));

    /* to store the string atleast 7 bytes are needed, the string has a length of 6, but null terminator \0 is also needed */
    strcpy(name, "Jochen"); 

    /* prints probably 8 because the size of a pointer on 64 bit systems is usually 8 */
    printf("%d\n", sizeof(name));

    /* prints the first character of the string */
    printf("%c\n", *name);

    /* prints the whole string, until null terminator */
    printf("%s\n", name);

    return 0;
}