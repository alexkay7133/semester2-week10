
#include <stdio.h>
#include <string.h>

int main( void ) {

    char buffer[100] = "the quick brown fox jumped over the lazy dog";   // define a string to process

    // call strtok() repeatedly to tokenise the string on whitespace " "
    // print out each token 
    char* token = strtok(buffer, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    
    return 0;
}