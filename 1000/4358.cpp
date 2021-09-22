#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	map<string, int>m;
	string str;
	float cnt = 0;

	while (getline(cin, str)) {
		cnt++;
		if (m.find(str)!=m.end()) 
			m[str]++;
		else 
			m[str] = 1;
	}
	
	cout << fixed;	//소수 아래 출력 범위만 설정
	cout.precision(4);	//소수 4번째 자리까지만 출력
	//cout.unsetf(ios::fixed);	// 해제

	for (auto it = m.begin(); it != m.end(); it++) {
		float res = (it->second / cnt) * 100;
		cout << it->first << ' ' << res << '\n';
	}

	return 0;
}
