#include <string>
#include <vector>

using namespace std;

// ���ڿ� "Z"�� �������� ���еǾ� ��� ���ڿ��� �־����ϴ�. ���ڿ��� �ִ� ���ڸ� ���ʴ�� ���Ϸ��� �մϴ�. 
// �� �� "Z"�� ������ �ٷ� ���� ���ߴ� ���ڸ� ���ٴ� ���Դϴ�. 
// ���ڿ� "Z"�� �̷���� ���ڿ� s�� �־��� ��, �Ӿ��̰� ���� ���� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(string s) 
{
    int answer = 0;
    int prev = 0;

    while (s.find(' ') != string::npos)
    {
        string split = s.substr(0, s.find(' '));

        try 
        {
            prev = stoi(split);
            answer += prev;
        }
        catch(exception e)
        {
            answer -= prev;
        }

        s = s.substr(s.find(' ') + 1);
    }

    if (s != "Z") answer += stoi(s);
    else answer -= prev;

    return answer;
}