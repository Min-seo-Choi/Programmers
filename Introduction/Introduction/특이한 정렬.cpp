#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// 정수 n을 기준으로 n과 가까운 수부터 정렬하려고 합니다. 
// 이때 n으로부터의 거리가 같다면 더 큰 수를 앞에 오도록 배치합니다. 
// 정수가 담긴 배열 numlist와 정수 n이 주어질 때 numlist의 원소를 n으로부터 가까운 순서대로 정렬한 배열을 return하도록 solution 함수를 완성해주세요.

vector<int> solution(vector<int> numlist, int n)
{
	vector<int> answer;

	while (numlist.size() > 0)
	{
		vector<int>::iterator iter = find(numlist.begin(), numlist.end(), n);
		if (iter != numlist.end())
		{
			answer.emplace_back(*iter);
			numlist.erase(iter);
		}

		vector<int> temp;

		for (int i = 0; i < numlist.size(); i++)
		{
			if (temp.empty()) temp.emplace_back(numlist[i]);
			else
			{
				if (abs(temp[0] - n) > abs(numlist[i] - n))
				{
					temp.clear();
					temp.emplace_back(numlist[i]);
				}
				else if (abs(temp[0] - n) == abs(numlist[i] - n))
				{
					temp.emplace_back(numlist[i]);
				}
			}
		}
		sort(temp.begin(), temp.end(), greater());

		for (int num : temp)
		{
			answer.emplace_back(num);
			iter = find(numlist.begin(), numlist.end(), num);
			numlist.erase(iter);
		}
	}

	return answer;
}