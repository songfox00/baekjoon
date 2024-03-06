#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

struct YEARS {
	int lsatCorrectPosYear,
		backToCorrectPosYear;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	YEARS years[2];

	cin >> years[0].lsatCorrectPosYear >> years[0].backToCorrectPosYear;
	cin >> years[1].lsatCorrectPosYear >> years[1].backToCorrectPosYear;

	int nextSunEclipse = -years[0].lsatCorrectPosYear + years[0].backToCorrectPosYear,
		nextMoonEclipse = -years[1].lsatCorrectPosYear + years[1].backToCorrectPosYear;

	vector<int> sunEclipses, moonEclipses;
	sunEclipses.push_back(nextSunEclipse);
	moonEclipses.push_back(nextMoonEclipse);

	const int MAX_YEAR = 5000;
	while (true) {
		if (nextSunEclipse > MAX_YEAR && nextMoonEclipse > MAX_YEAR) break;

		if (nextSunEclipse <= MAX_YEAR) {
			nextSunEclipse += years[0].backToCorrectPosYear;
			sunEclipses.push_back(nextSunEclipse);
		}

		if (nextMoonEclipse <= MAX_YEAR) {
			nextMoonEclipse += years[1].backToCorrectPosYear;
			moonEclipses.push_back(nextMoonEclipse);
		}
	}

	unordered_set<int> sunSet(sunEclipses.begin(), sunEclipses.end());

	for (auto& element : moonEclipses) {
		if (sunSet.find(element) != sunSet.end()) {
			cout << element << "\n";
			break;
		}
	}

	return 0;
}