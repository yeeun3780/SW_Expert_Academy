#include <stdio.h>

int main() {

	int test, n;

	scanf("%d", &test);
	for (int t = 0; t < test; t++) {
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &n);
			if (n % 2 != 0)
				sum += n;
		}
		printf("#%d %d\n", t+1, sum);
	}
	return 0;
}