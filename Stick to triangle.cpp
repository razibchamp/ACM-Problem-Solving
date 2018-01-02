#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<locale>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int t, n,i,tmp,tmp2,j,c=0,c2;
	scanf("%d", &t);
	while (t--) {
		c = 0; c2 = 0;
		scanf("%d", &n);

        int d = n/3;
		for (i = 1; i <=d; i++) {
			for (j = i; j <= n; j++) {
				tmp = i + j;
				tmp = n - tmp;
				if (tmp > 0) {
					if (i + j == tmp || i + tmp == j || j + tmp == i) c2++;
					if (i + j > tmp && i + tmp > j && j + tmp > i)
						//printf("%d %d %d\n", i, j, tmp);
						c++;
				}
			}
		}
		c += (c2 % 2);
		printf("%d\n", c);
	}
	return 0;
}
