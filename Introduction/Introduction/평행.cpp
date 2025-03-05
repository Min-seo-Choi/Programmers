#include <string>
#include <vector>

using namespace std;

// 점 네 개의 좌표를 담은 이차원 배열  dots가 다음과 같이 매개변수로 주어집니다.
// {[x1, y1], [x2, y2], [x3, y3], [x4, y4]]
// 주어진 네 개의 점을 두 개씩 이었을 때, 두 직선이 평행이 되는 경우가 있으면 1을 없으면 0을 return 하도록 solution 함수를 완성해보세요.

int solution(vector<vector<int>> dots)
{
	int answer = 0;

    vector<vector<int>> dot_pairs = {
           {0, 1, 2, 3},
           {0, 2, 1, 3},
           {0, 3, 1, 2}
    };

    for (auto& pair : dot_pairs)
    {
        int x1 = dots[pair[0]][0], y1 = dots[pair[0]][1];
        int x2 = dots[pair[1]][0], y2 = dots[pair[1]][1];
        int x3 = dots[pair[2]][0], y3 = dots[pair[2]][1];
        int x4 = dots[pair[3]][0], y4 = dots[pair[3]][1];

        // 기울기가 같은지 확인 (교차 곱 방식)
        if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1))
        {
            answer = 1;
            break;
        }
    }

	return answer;
}