#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� �Ű������� �־����ϴ�. 
// my_string���� ��� �ڿ������� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(string my_string) 
{
    int answer = 0;

    for (char ms : my_string)
    {
        if (ms >= 48 && ms <= 57)
            answer += (ms - 48);
    }

    return answer;
}