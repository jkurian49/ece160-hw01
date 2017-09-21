#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	float res, num1, num2;
	char op = argv[1][0];

	sscanf(argv[2], "%f", &num1);
	sscanf(argv[3], "%f", &num2);

	switch (op) {
		case '+':
		res = num1 + num2;
		printf("%f\n", res);
		break;

		case '-':
		res = num1 - num2;
		printf("%f\n", res);
		break;

		case 'x':
		res = num1 * num2;
		printf("%f\n", res);
		break;

		case '/':
		res = num1 / num2;
		printf("%f\n", res);
		break;

		default:
		printf("error");
		break;

	}
	return 0;
}
