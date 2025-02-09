#include <string>
#include <vector>

using namespace std;

// 문자열 my_string과 문자 letter이 매개변수로 주어집니다. 
// my_string에서 letter를 제거한 문자열을 return하도록 solution 함수를 완성해주세요.

string solution(string my_string, string letter) 
{
    string answer = "";

    for (char character : my_string)
    {
        if (letter[0] != character) answer += character;
    }
    
    return answer;
}