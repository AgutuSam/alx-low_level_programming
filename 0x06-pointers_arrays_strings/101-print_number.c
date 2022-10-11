#include<stdio.h>

/**
 *
 *
 */
void main()
{
	int n = 5078;
	int i;
	int j;
	int nw = n;
	int count = 0;
	int p = 1;
	int b = 10;
	int len;

	while (nw > 9)
	{
		nw = nw / 10;
		count = count + 1;
	}

	for (i = 1; i <= count; i++)
	 {
		while (i != 0) {
		p *= b;
		--i;
		}

		printf("%d", p);
		printf("\n");
	} 

}
