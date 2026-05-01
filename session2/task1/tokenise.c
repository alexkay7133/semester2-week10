#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    char buffer[100] = "the quick brown fox jumped over the lazy dog";

    char *argv[10];  // argv is an array of 10 char* pointers
    int argc = 0;    // argc max is 10
    
    // iterate through each character of the string
    // every time you find a space ' ' assign a new token to argv[]
    for (int x = 0; x<(sizeof(buffer)/sizeof(buffer[0])); x++) {
        if (buffer[x] == 32) {
            argv[argc] = &buffer[x+1];
            argc += 1;
        }
        if (buffer[x] == NULL) {
            break;
        }
    }

    // check output for argc,argv
    printf("argc = %d\n",argc);
    for( int k=0; k<argc; k++ ) {
        printf("argv[%d] = %s\n",k,argv[k]);
    }

    return 0;
}