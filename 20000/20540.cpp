#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	string mbti, ans;

	cin >> mbti;
	for (int i = 0; i < mbti.size(); i++) {
		if (mbti[i] == 'E') ans += 'I';
		else if (mbti[i] == 'I') ans += 'E';
		else if (mbti[i] == 'S') ans += 'N';
		else if (mbti[i] == 'N') ans += 'S';
		else if (mbti[i] == 'T') ans += 'F';
		else if (mbti[i] == 'F') ans += 'T';
		else if (mbti[i] == 'P') ans += 'J';
		else ans += 'P';
	}
	cout << ans;

	return 0;
}