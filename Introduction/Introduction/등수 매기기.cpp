#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 영어 점수와 수학 점수의 평균 점수를 기준으로 학생들의 등수를 매기려고 합니다. 
// 영어 점수와 수학 점수를 담은 2차원 정수 배열 score가 주어질 때, 
// 영어 점수와 수학 점수의 평균을 기준으로 매긴 등수를 담은 배열을 return하도록 solution 함수를 완성해주세요.

vector<int> solution(vector<vector<int>> score)
{
	vector<int> answer;
	vector<double> temp;
	vector<double> sortedTemp;

	for (auto pair : score)
	{
		temp.emplace_back((double)(pair[0] + pair[1]) / 2);
		sortedTemp.emplace_back((double)(pair[0] + pair[1]) / 2);
	}

	sort(sortedTemp.begin(), sortedTemp.end(), greater());

	for (int i = 0; i < sortedTemp.size(); i++)
	{
		answer.emplace_back(distance(sortedTemp.begin(), find(sortedTemp.begin(), sortedTemp.end(), temp[i])) + 1);
	}

	return answer;
}