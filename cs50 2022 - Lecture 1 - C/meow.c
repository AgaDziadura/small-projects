#include <stdio.h>
#include <cs50.h>

int main(void){
// setting variable
    string x = "meow";
// Long loop - too long 
    int i = 3;
    while (i > 0)
    {
        printf("%s\n", x);
        i--;
    }

// Same thing diffrent loop
    for (int i = 0; i < 3; i++){
        printf("%s\n", x);
    }
}

