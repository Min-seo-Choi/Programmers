#include <string>
#include <vector>

using namespace std;

// 문자열 my_str과 n이 매개변수로 주어질 때, 
// my_str을 길이 n씩 잘라서 저장한 배열을 return하도록 solution 함수를 완성해주세요.

vector<string> solution(string my_str, int n)
{
	vector<string> answer;

	while (my_str.size() > n)
	{
		answer.emplace_back(my_str.substr(0, n));
		my_str = my_str.substr(n);
	}
	answer.emplace_back(my_str);

	return answer;
}