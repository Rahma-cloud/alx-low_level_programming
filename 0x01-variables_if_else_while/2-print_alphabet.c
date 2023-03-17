#include <stdio.h>

int main(void) {
    char letter = 'a';
    int i = 0;

    while (i < 26) {
        putchar(letter);
        letter++;
	i++;
    }
    
    putchar('\n');
    
    return 0;
}
