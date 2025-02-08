#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 문자열 my_string이 매개변수로 주어집니다. 
// my_string을 거꾸로 뒤집은 문자열을 return 하도록 solution 함수를 완성해주세요.

string solution(string my_string) 
{
    reverse(my_string.begin(), my_string.end());
    return my_string;
}