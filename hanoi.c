/*
 * $Id: hanoi.c,v 1.1 2016/01/22 06:57:43 urs Exp $
 */

#include <stdlib.h>
#include <stdio.h>

static void usage(const char *name)
{
	fprintf(stderr, "Usage: %s n src dst\n", name);
}

static void hanoi(int n, int src, int dst);

int main(int argc, char **argv)
{
	int n, src, dst;

	if (argc != 4) {
		usage(argv[0]);
		exit(1);
	}

	n   = atoi(argv[1]);
	src = atoi(argv[2]);
	dst = atoi(argv[3]);

	hanoi(n, src, dst);

	return 0;
}

static void hanoi(int n, int src, int dst)
{
	if (n == 1)
		printf("%d -> %d\n", src, dst);
	else {
		int tmp = 3 - src - dst;
		hanoi(n - 1, src, tmp);
		printf("%d -> %d\n", src, dst);
		hanoi(n - 1, tmp, dst);
	}
}
