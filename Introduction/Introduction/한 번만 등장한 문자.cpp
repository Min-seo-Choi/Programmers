#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문자열 s가 매개변수로 주어집니다. 
// s에서 한 번만 등장하는 문자를 사전 순으로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요. 
// 한 번만 등장하는 문자가 없을 경우 빈 문자열을 return 합니다.

string solution(string s)
{
	string answer = "";

	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++)
	{
		if (i + 1 >= s.size()) answer += s[i];

		for (int j = i + 1; j < s.size(); j++)
		{
			if (s[i] == s[j]) i = s.rfind(s[i]);
			else answer += s[i];

			break;
		}
	}

	return answer;
}