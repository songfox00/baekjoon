#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	int logs;

	while (1) {
		cin >> logs;
		if (logs == -1) 
			break;
		int speedPerHour[logs], totalDriveTime[logs], ans = 0;

		for (int i = 0; i < logs; i++)
			cin >> speedPerHour[i] >> totalDriveTime[i];

		for (int i = 0; i < logs; i++) {
			if (!i) 
				ans += totalDriveTime[i] * speedPerHour[i];
			else 
				ans += speedPerHour[i] * (totalDriveTime[i] - totalDriveTime[i - 1]);
		}

		cout << ans << " miles\n";
	}


	return 0;
}