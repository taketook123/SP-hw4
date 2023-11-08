#include <stdio.h>
#include <math.h>
#include <string.h>
#include "func.h"

int main(){
    double secondnum, firstnum;
    char operation;


    printf("Type first: ");
    scanf("%lf", &firstnum);
    
    printf("Type second: ");
    scanf("%lf", &secondnum);
    printf("Type operation (+/-/*///^/%/!/C/A) -> ");
    scanf(" %c", &operation);

    printf("ANswer: ");
    switch (operation) {
        case '+':
            printf("%f\n", secondnum+firstnum);
            break;
        case '-':
            printf("%f\n", firstnum - secondnum);
            break;
        case '*':
            printf("%f\n", firstnum*secondnum);
            break;
        case '/':
            printf("%f\n", firstnum/secondnum);
            break;
        case '^':
            printf("%f\n", returndg(firstnum, secondnum));
            break;
	case '%':
	    printf("%f\n", returnMode(firstnum, secondnum));
	    break;
	case '!':
	    printf("%f and %f\n", returnFact(firstnum), returnFact(secondnum));
	    break;
	case 'C':
	    printf("%f\n", returnComb(firstnum, secondnum));
	    break;
	case 'A':
	    printf("%f\n", returnA(firstnum, secondnum));
	    break;
        default :
            printf("operation are not correct\n");

    }
    return 0;
}
