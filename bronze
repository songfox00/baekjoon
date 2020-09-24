#include<iostream>
#include<cmath>

using namespace std;

int main() {
   int t;   //테스트 케이스 개수
   cin >> t;
   
   long long score;   //출력할 점수

   for (int i = 0; i < t; i++) {   //테스트 케이스 개수만큼 반복
      score = 0;
      for (int j = 0; j < 7; j++) {
         int p;
         cin >> p;
         switch (j) {   //종목에 따른 점수 계산
         case 0:
            score += 9.23076*pow(26.7 - p, 1.835);   //100미터 허들
            break;
         case 1:
            score += 1.84523*pow(p - 75, 1.348);   //높이뛰기
            break;
         case 2:
            score += 56.0211*pow(p - 1.5, 1.05);   //포환던지기
            break;
         case 3:
            score += 4.99087*pow(42.5 - p, 1.81);   //200미터 달리기
            break;
         case 4:
            score += 0.188807*pow(p - 210, 1.41);   //멀리뛰기
            break;
         case 5:
            score += 15.9803*pow(p - 3.8, 1.04);   //창던지기
            break;
         case 6:
            score += 0.11193*pow(254 - p, 1.88);   //800미터 달리기
            break;
         }
      }
      cout << score<<'\n';
   }
}
