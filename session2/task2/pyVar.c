
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data definitions (part a.)
// Define an enumeration and typedef to `Type`
typedef enum _type = {
    INTEGER, 
    REAL, 
    STRING
} Type;
// Define a union and typedef to `Value`
typedef union _value {
    int ival;
    float fval;
    char sval[10];
} Value;
// Define a struct, including `Type` and `Value` and typedef to `Variable`
typedef struct _variable {
    enum Type;
    union Value;
} Variable;

// Function prototypes (part b.)
// void print( Variable var ); 
// Variable assign( Type t, Value v );
// Variable add( Variable var1, Variable var2 );

int main( void ) {


    // define and initialise Variable, eg. 
    Variable var1 = { .type=INTEGER, .value.ivalue=2 };

    return 0;
}