#include <string>
#include <vector>

using namespace std;

// ���� n�� �Ű������� �־��� �� n�� �� �ڸ� ������ ���� return�ϵ��� solution �Լ��� �ϼ����ּ���

int solution(int n) 
{
    int answer = 0;

    while (n > 0)
    {
        answer += (n % 10);
        n /= 10;
    }

    return answer;
}