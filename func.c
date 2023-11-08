#include <stdio.h>


double returndg(double value, int how) {
    double result = value;
    for (int i = 0; i < how-1 ; i++) {
        result *= value;
    }
    return result;
}


double returnMode(double value, double valuesec) {
	for (int i = 0; value >= valuesec; value -= valuesec) {}
	return value;
}
