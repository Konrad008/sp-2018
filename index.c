#include <stdio.h>

void hej(char* who);
void multilingual_hej(char* who);

int main() 
{
    char who[10];
    scanf("%s", who);
    printf("hello %s!\n", who);

    multilingual_hej(who);
}

//------------------------------------------
// Helper functions
//------------------------------------------

// void hej(char* who) {
    // printf("hello world!\n");
// }
void multilingual_hej(char* who) {
    printf("hello %s!\n", who);
    printf("witaj %s!\n", who);
}
