#include <string>
#include <vector>

using namespace std;

// ���� n�� �־��� ��, n������ ¦���� ��� ���� ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.

int solution(int n) 
{
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) answer += i;
    }

    return answer;
}

int main()
{
    solution(10);

    return 0;
}