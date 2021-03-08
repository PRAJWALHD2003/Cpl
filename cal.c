#include <stdio.h>

int main() {
	int a, b;
	char op;

	printf("\n enter the operation:");
	scanf("%c", &op);
	printf("\nenter value of a and b: ");
	scanf("%d%d", &a, &b);

	if (op == '+')
		printf("\n sum = %d", a + b);

	else if (op == '-')
		printf("\n Difference = %d", a - b);

	else if (op == '*')
		printf("\n product = %d", a * b);

	else if (op == '/') {
		if (b == 0) {
			printf("\n Denominator is zero!");
			return 0;
		} else
			printf("\n Quotient = %.2f", (float)a / b);
	}

	else if (op == '%') {
		if (b == 0) {
			printf("\n Denominator is zero! ");
			return 0;
		} else
			printf("\n Remainder= %d", a % b);
	}
}