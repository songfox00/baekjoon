#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n, cnt = 0;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str== "anj")
		{
			cnt = 1;
		}
	}
	if (cnt == 1)
	{
		printf("뭐야;");
	}
	else if (cnt == 0)
	{
		printf("뭐야?");
	}
}