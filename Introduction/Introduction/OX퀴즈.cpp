#include <string>
#include <vector>
#include <sstream>

using namespace std;

// 덧셈, 뺄셈 수식들이 'X [연산자] Y = Z' 형태로 들어있는 문자열 배열 quiz가 매개변수로 주어집니다. 
// 수식이 옳다면 "O"를 틀리다면 "X"를 순서대로 담은 배열을 return하도록 solution 함수를 완성해주세요.

vector<string> solution(vector<string> quiz) 
{
    vector<string> answer;

    for (string str : quiz)
    {
        int result = stoi(str.substr(str.rfind(' ')));

        stringstream s;
        int num = 0;
        string opt, temp;

        s.str(str.substr(0, str.find('=')));
        s >> num;

        while (s >> temp)
        {
            if (temp == "+")
            {
                opt = "+";
                continue;
            }

            if (temp == "-")
            {
                opt = "-";
                continue;
            }

            if (opt == "+") num += stoi(temp);
            else if (opt == "-") num -= stoi(temp);
        }

        if (result == num) answer.emplace_back("O");
        else answer.emplace_back("X");
    }

    return answer;
}