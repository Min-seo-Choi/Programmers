#include <string>
#include <vector>

using namespace std;

// ����� ������ �� �� �̻��� ���� �ռ������ �մϴ�. 
// �ڿ��� n�� �Ű������� �־��� �� n������ �ռ����� ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int n) 
{
    int answer = 0;
    int count = 0;

    for (int i = n; i > 0; i--)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (count > 2)
            {
                answer++;
                break;
            }

            if (i % j == 0)
            {
                count++;
                if (j != i / j) count++;
            }
        }
    }

    return answer;
}