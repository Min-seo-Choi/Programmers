#include <string>
#include <vector>

using namespace std;

// 문자열 str1, str2가 매개변수로 주어집니다. str1 안에 str2가 있다면 1을 없다면 2를 return하도록 solution 함수를 완성해주세요.

int solution(string str1, string str2)
{
	return str1.find(str2) != string::npos ? 1 : 2;
}