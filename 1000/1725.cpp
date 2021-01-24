#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001];

int m_sort(int left, int right) {
	if (left == right)  //막대가 하나
		return arr[left];   //그대로 높이 반환
	int mid = (left + right) / 2;
	int res = max(m_sort(left, mid), m_sort(mid + 1, right));
	int low = mid, high = mid + 1;
	int height = min(arr[low], arr[high]);
	res = max(res, height * 2);
	while (left < low || high < right) {
		if (high < right && ((low == left) || arr[low - 1] < arr[high + 1])) {
			high++;
			height = min(height, arr[high]);
		}
		else {
			low--;
			height = min(height, arr[low]);
		}
		res = max(res, height*(high - low + 1));
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout<<m_sort(0, n-1);
}