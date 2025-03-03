#include <string>
#include <vector>

using namespace std;

// 한 개 이상의 항의 합으로 이루어진 식을 다항식이라고 합니다. 
// 다항식을 계산할 때는 동류항끼리 계산해 정리합니다. 
// 덧셈으로 이루어진 다항식 polynomial이 매개변수로 주어질 때, 
// 동류항끼리 더한 결괏값을 문자열로 return 하도록 solution 함수를 완성해보세요. 
// 같은 식이라면 가장 짧은 수식을 return 합니다.

string solution(string polynomial) 
{
    string answer = "";

    int count = 0;
    int sum = 0;

    polynomial += " ";

    while (polynomial.find(" ") != string::npos)
    {
        string temp = polynomial.substr(0, polynomial.find(" "));
        if (temp.find("x") != string::npos)
        {
            if (temp[0] == 'x') count += 1;
            else
            {
                temp = temp.substr(0, temp.find("x"));
                count += stoi(temp);
            }
        }
        else
        {
            if (temp.find("+") == string::npos) sum += stoi(temp);
        }

        polynomial = polynomial.substr(polynomial.find(" ") + 1);
    }

    if (count > 1) answer += to_string(count) + "x";
    else if (count == 1) answer += "x";

    if (sum > 0)
    {
        if (answer == "") answer += to_string(sum);
        else answer += " + " + to_string(sum);
    }

    return answer;
}

int main()
{
    solution("7");
}