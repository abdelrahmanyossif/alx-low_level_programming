#include <stdio.h>

char *_strcat(char *dest, char *src);

int main() {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);

    printf("%s\n", dest);  // Output: Hello, world!

    return 0;
}
