#include <stdio.h>

int printExponent(int, int);

int main(int argc, char *argv[]) {
	int Base, Exponent;
	
	printf("Enter an int Base : ");
	scanf("%d", &Base);
	printf("Enter Exponent : ");
	scanf("%d", &Exponent);
	
	printf("%d to the power of %d = %d\n", Base, Exponent, printExponent(Base, Exponent));
}

int printExponent(int Base, int Exponent) {
	int numReturn = 1;
	
	if(Exponent == 1) {
		return Base;
	}
	else { 
		numReturn = Base * printExponent(Base, Exponent - 1);
	}
	return numReturn;
}