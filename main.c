#include <stdio.h>
#include <stdlib.h>

/* %d is reading keyboard imput
 &k is storing it in int k
 &d\n is reading whats stored and printng it
main()
{
    int k;
    scanf("%d", &k);
    printf("You entered: %d\n", k);
    return 0;
}
*/


int main() {
    float k;
    printf("Enter an interger: ");
    scanf("%f", &k);
    k = (k+2)/(k-1);
    printf("That interger is: %f\n", k);
    return 0;
    }
