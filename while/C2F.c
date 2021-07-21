#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = -20, 0, ..., 120; using floating-point */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20;
	upper = 100;
	step = 20;

	celsius = lower;
	printf("%s %s\n", "celsius", "fahrenheit");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%8.0f %8.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
