#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� ���� letter�� �Ű������� �־����ϴ�. 
// my_string���� letter�� ������ ���ڿ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(string my_string, string letter) 
{
    string answer = "";

    for (char character : my_string)
    {
        if (letter[0] != character) answer += character;
    }
    
    return answer;
}