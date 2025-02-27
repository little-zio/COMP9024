#include <stdio.h>
#include <stdlib.h>
#include "BoyerMoore.h"


int main(void) {
    // create a sub-directory 'images' (if it is not present) in the current directory
    system("mkdir -p images");
    // remove the *.dot and *.png files in the directory 'images'
    system("rm -f images/*.dot images/*.png");


    char *text = "acaadaaaababaaba";
    char *pattern = "aaba";
    BoyerMooreBadChar(pattern, text);

    text = "aaaabaaaa";
    pattern = "aaa";
    BoyerMooreBadChar(pattern, text);


    BoyerMooreBadChar("aabaabaab", "aaaabaaaabaabaabaa");

    BoyerMooreBadChar("caba", "ddcabacc");       

    return 0;
}



