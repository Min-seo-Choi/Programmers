#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

// ���� ��ҹ��ڷ� �̷���� ���ڿ� my_string�� �Ű������� �־��� ��, 
// my_string�� ��� �ҹ��ڷ� �ٲٰ� ���ĺ� ������� ������ ���ڿ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

string solution(string my_string) 
{
    string answer = "";

    for (char ch : my_string)
    {
        answer += tolower(ch);
    }

    sort(answer.begin(), answer.end());
    return answer;
}