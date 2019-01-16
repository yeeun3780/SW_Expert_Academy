#include <stdio.h>

//평균값 구하기
int main() {
	int testnum, num;

	scanf("%d", &testnum);

	for (int i = 0; i < testnum; i++) {
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			scanf("%d", &num);
			sum += num;
		}
		printf("#%d %d\n", i+1, sum / 10);
	}
	return 0;
}