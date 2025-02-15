#include <string>
#include <vector>

using namespace std;

// 영어에선 a, e, i, o, u 다섯 가지 알파벳을 모음으로 분류합니다. 
// 문자열 my_string이 매개변수로 주어질 때 모음을 제거한 문자열을 return하도록 solution 함수를 완성해주세요.

string solution(string my_string)
{
	string answer = "";
	string findStr = "aeiou";

	for (char ms : my_string)
	{
		bool isSame = false;
		for (char find : findStr)
		{
			if (find == ms)
			{
				isSame = true;
				break;
			}
		}
		if (!isSame) answer += ms;
	}

	return answer;
}