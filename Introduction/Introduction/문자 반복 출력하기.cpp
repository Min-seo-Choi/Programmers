#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� ���� n�� �Ű������� �־��� ��, 
// my_string�� ����ִ� �� ���ڸ� n��ŭ �ݺ��� ���ڿ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

string solution(string my_string, int n) 
{
    string answer = "";

    for (char character : my_string)
    {
        for (int i = 0; i < n; i++)
        {
            answer += character;
        }
    }

    return answer;
}