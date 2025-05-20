#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> period(N+1);  //털 빗는 주기
    for (int i = 1; i <= N; ++i) 
        cin >> period[i];

    vector<int> grooming(M+1);    //빗는 강아지 번호
    for (int i = 1; i <= M; ++i) {
        cin >> grooming[i];
    }

    vector<int> last_day(N+1, 0);     // 마지막 빗은 날짜
    vector<bool> tangled(N+1, false);  // 털 엉킴 여부

    for (int i = 1; i <= M; i++) {
        int dog = grooming[i];

        // 털이 엉켜있고, 이틀 연속 빗질 -> 풀림
        if (tangled[dog] && last_day[dog] == i - 1) {
            tangled[dog] = false;
        }

        // 털이 안 엉켜 있었는데, 주기 초과 -> 엉킴
        if (!tangled[dog] && i - last_day[dog] > period[dog]) {
            tangled[dog] = true;
        }

        last_day[dog] = i;
    }
    
    //마지막으로 주기 초과 강아지 확인
    for(int i=1;i<=N ;i++){
        if (!tangled[i] && M + 1 - last_day[i] > period[i]) {
            tangled[i] = true;
        }
    }

    int result = 0;
    for (int i = 1; i <= N; ++i)
        if (tangled[i]) 
            result++;

    cout << result << '\n';
    return 0;
}
