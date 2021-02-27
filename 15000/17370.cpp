#include <stdio.h>

int ans, n, check[100][100];

void solve(int k, int pos_x, int pos_y, int pre_x, int pre_y) {
	if (!(pos_x > 1 && pos_x < 99 && pos_y > 1 && pos_y < 99))
		return;
	if (k == n) {
		if (check[pos_x][pos_y])
			++ans;
		return;
	}
	if (check[pos_x][pos_y])
		return;
	check[pos_x][pos_y] = 1;
	if (pos_x % 2) {
		if (!(pos_x - 1 == pre_x && pos_y - 1 == pre_y))
			solve(k + 1, pos_x - 1, pos_y - 1, pos_x, pos_y);
		if (!(pos_x - 1 == pre_x && pos_y + 1 == pre_y))
			solve(k + 1, pos_x - 1, pos_y + 1, pos_x, pos_y);
		if (!(pos_x + 1 == pre_x && pos_y == pre_y))
			solve(k + 1, pos_x + 1, pos_y, pos_x, pos_y);
	}
	else {
		if (!(pos_x - 1 == pre_x && pos_y == pre_y))
			solve(k + 1, pos_x - 1, pos_y, pos_x, pos_y);
		if (!(pos_x + 1 == pre_x && pos_y - 1 == pre_y))
			solve(k + 1, pos_x + 1, pos_y - 1, pos_x, pos_y);
		if (!(pos_x + 1 == pre_x && pos_y + 1 == pre_y))
			solve(k + 1, pos_x + 1, pos_y + 1, pos_x, pos_y);
	}
	check[pos_x][pos_y] = 0;
}

int main() {
	scanf("%d", &n);
	check[50][50] = 1;
	solve(0, 49, 50, 50, 50);
	printf("%d", ans);
}