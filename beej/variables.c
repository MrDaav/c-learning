#include <stdio.h>
#include <stdbool.h>


int main() {
    
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";
    bool x = true;
    /* Las variables que sólo son inicializadas no tienen un valor determinado, no asumir
    que ese valor es 0 */

    printf("%s i = %d y f = %.2f!\n", s, i, f);

    if (x){
        printf("x is true\n");
    }

    // Ternario

    printf("el num %d es %s\n", i, i % 2 == 0 ? "par": "impar");

    

}