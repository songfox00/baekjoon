#include<iostream>

using namespace std;

int arr[1000001];
int temp[1000001];
long long res=0;

void merge(int start, int mid, int end) {
	int a, b, idx = 0;
	a = start;
	b = mid;

	while (a < mid && b < end) {
		if (arr[a] < arr[b])
			temp[idx++] = arr[a++];
		else if (arr[a] > arr[b]) {
			res += mid - a;
			temp[idx++] = arr[b++];
		}
		else
			temp[idx++] = arr[b++];
	}
	while (a < mid)
		temp[idx++] = arr[a++];
	while (b < end)
		temp[idx++] = arr[b++];
	for (int i = 0; i < end - start; ++i)
		arr[start + i] = temp[i];
}

void merge_sort(int s, int e) {
	int mid = (s + e) / 2;
	if (s < mid) {
		merge_sort(s, mid);
		merge_sort(mid, e);
		merge(s, mid, e);
	}
}

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	merge_sort(0, n);
	cout << res;
}