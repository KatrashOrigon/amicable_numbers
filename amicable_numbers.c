#include <stdio.h>

int divisors_sum(int n) {
	int sum = 0;
	for(int i = n - 1; i >= 1; i--) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	int number, num_1, num_2, sum_1;
	number = 50000;
	for (int num_1 = 2; num_1 <= number; num_1++) {
		sum_1 = divisors_sum(num_1);
		num_2 = divisors_sum(sum_1);
		if (num_1 == num_2 && num_1 < sum_1) {
			printf("O numero %d e' amigo de %d\n", num_1, sum_1);
		}
	}
	return 0;
}