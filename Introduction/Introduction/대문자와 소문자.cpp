#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� �Ű������� �־��� ��, �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ��ȯ�� ���ڿ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(string my_string) 
{
    string answer = "";

    for (char ch : my_string)
    {
        if (ch >= 'A' && ch <= 'Z')
            answer += tolower(ch);
        else
            answer += toupper(ch);
    }

    return answer;
}