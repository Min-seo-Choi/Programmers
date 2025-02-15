#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문자열 my_string이 매개변수로 주어질 때, 
// my_string 안에 있는 숫자만 골라 오름차순 정렬한 리스트를 return 하도록 solution 함수를 작성해보세요.

vector<int> solution(string my_string)
{
	vector<int> answer;
	for (char ms : my_string)
	{
		if (ms >= 48 && ms <= 57)
			answer.emplace_back(ms - 48);
	}

	sort(answer.begin(), answer.end());

	return answer;
}

