#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문자열 before와 after가 매개변수로 주어질 때, 
// before의 순서를 바꾸어 after를 만들 수 있으면 1을, 만들 수 없으면 0을 return 하도록 solution 함수를 완성해보세요.

int solution(string before, string after)
{
	for (char ch : after)
	{
		if (before.find(ch) != string::npos) before.erase(before.find(ch), 1);
		else break;
	}

	return before.size() > 0 ? 0 : 1;
}