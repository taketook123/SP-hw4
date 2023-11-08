#include <stdio.h>
#include "func.h"

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

double returnFact(double value) {
	for (int i = value - 1; i > 0; i--) {
		value *= i;
	}
	return value;
}

double returnComb(double value, double how) {
	if (how > value) {
		return returnFact(how)/(returnFact(value) * returnFact(how - value));
	} else {
		return returnFact(value)/(returnFact(how) * returnFact(value - how));
	}
}

double returnA(double value, double how) {
	if (how > value) {
                return returnFact(how)/returnFact(how - value);
        } else {
                return returnFact(value)/returnFact(value - how);
        }
}
