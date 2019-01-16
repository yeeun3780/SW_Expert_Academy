#include <stdio.h>

int main() {

	int test, num1, num2;

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d", &num1);
		scanf("%d", &num2);

		printf("#%d", i + 1);
		if (num1 > num2)
			printf(">\n");
		else if (num1 == num2)
			printf("=\n");
		else
			printf("<\n");
	}

	return 0;
}