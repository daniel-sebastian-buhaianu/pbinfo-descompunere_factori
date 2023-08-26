#include <stdio.h>

int main()
{
	unsigned n, d = 2;

	scanf("%u", &n);

	while (d*d <= n) {
		while (n % d == 0) {
			printf("%u ", d);
			
			n /= d; 
		}
		
		d++;
	}

	if (n > 1) printf("%u", n);

	return 0;
}

// scor 100
