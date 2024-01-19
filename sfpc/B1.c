#include <stdio.h>

int main() {
	int i, j, m, n, t, k, count = 0;
	scanf("%d %d %d %d", &n, &m, &k, &t);
	int a[n], b, c;
	for (i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	for (i=0;i<k;i++) {
		c = 0;
		for (j=0;j<m;j++) {
			scanf("%d", &b);
			c += a[b-1];		}
		c += 5*(m+1);
		if (c <= t) count++;
	}
	printf("%d", count);
}
