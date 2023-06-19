#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string getGrade(int score) {
	if (score >= 97) return "A+";
	if (90 <= score && score <= 96) return "A";
	if (87 <= score && score <= 89) return "B+";
	if (80 <= score && score <= 86) return "B";
	if (77 <= score && score <= 79) return "C+";
	if (70 <= score && score <= 76) return "C";
	if (67 <= score && score <= 69) return "D+";
	if (60 <= score && score <= 66) return "D";
	return "F";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string name;
	int t, score;

	cin >> t;
	while (t--) {
		cin >> name >> score;
		cout << name << ' ' << getGrade(score) << '\n';
	}
}