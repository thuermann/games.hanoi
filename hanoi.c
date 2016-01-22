/*
 * $Id: hanoi.c,v 1.3 2016/01/22 22:53:40 urs Exp $
 */

#include <stdlib.h>
#include <stdio.h>

static void usage(const char *name)
{
	fprintf(stderr, "Usage: %s n [src dst]\n", name);
}

static void hanoi(int n, int src, int dst);

int main(int argc, char **argv)
{
	int n, src = 0, dst = 1;

	if (argc == 2)
		n   = atoi(argv[1]);
	else if (argc == 4) {
		n   = atoi(argv[1]);
		src = atoi(argv[2]);
		dst = atoi(argv[3]);
	} else {
		usage(argv[0]);
		exit(1);
	}

	hanoi(n, src, dst);

	return 0;
}

static void hanoi(int n, int src, int dst)
{
	if (n == 0)
		return;
	else {
		int tmp = 3 - src - dst;
		hanoi(n - 1, src, tmp);
		printf("%d -> %d\n", src, dst);
		hanoi(n - 1, tmp, dst);
	}
}
