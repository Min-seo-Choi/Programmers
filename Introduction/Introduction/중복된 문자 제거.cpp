#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� �Ű������� �־����ϴ�. 
// my_string���� �ߺ��� ���ڸ� �����ϰ� �ϳ��� ���ڸ� ���� ���ڿ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(string my_string) 
{
    string answer = "";

    for (char ch : my_string)
    {
        if (answer.empty() || answer.find(ch) == string::npos)
        {
            answer += ch;
        }
    }

    return answer;
}