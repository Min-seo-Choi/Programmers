#include <string>
#include <vector>

using namespace std;

// 선분 3개가 평행하게 놓여 있습니다. 
// 세 선분의 시작과 끝 좌표가 [[start, end], [start, end], [start, end]] 형태로 들어있는 2차원 배열 lines가 매개변수로 주어질 때, 
// 두 개 이상의 선분이 겹치는 부분의 길이를 return 하도록 solution 함수를 완성해보세요.

int solution(vector<vector<int>> lines) {
	int answer = 0;
	vector<int> line(201, 0);

	for (auto pair : lines)
	{
		int start = pair[0] + 100;
		int end = pair[1] + 100;

		for (int i = start; i < end; i++)
		{
			line[i]++;
		}
	}

	for (int i = 0; i < 201; i++)
	{
		if (line[i] > 1) answer++;
	}

	return answer;
}