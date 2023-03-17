#include <stdio.h>

int main(void) {
    char letter = 'a';
    
    for (int i = 0; i < 26; i++) {
        putchar(letter);
        letter++;
    }
    
    putchar('\n');
    
    return 0;
}
