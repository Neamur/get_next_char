#include <stdio.h>
#include <getnextchar.h>

// only reads chars, skipping white spaces, tabs, newlines.

char get_next_char(){
    char c = getchar();
    while (c == ' ' || c == '\t' || c == '\n'){
        c = getchar();
    }
    return c;
}


