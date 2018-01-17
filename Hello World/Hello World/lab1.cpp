#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int smallest, largest;
	if (a > b) {
		smallest = b;
		largest = a;
	}
	else {
		smallest = a;
		largest = b;
	}

	for (int i = smallest; i > 0; i--) {
		if (largest % i == 0) {
			return i;
		}
	}

}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	int a = 1, b = 1;
	for (int i = 3; i <= n; i++) {
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}
