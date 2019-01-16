#include <stdio.h>

int main() {

	int test, max, num;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		max = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%d", &num);
			if (max < num)
				max = num;
		}
		printf("#%d %d\n", i + 1, max);
	}

	return 0;
}