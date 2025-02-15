#include <string>
#include <vector>

using namespace std;

// ���μ����ض� � ���� �Ҽ����� ������ ǥ���ϴ� ���Դϴ�. 
// ���� ��� 12�� ���μ� �����ϸ� 2 * 2 * 3 ���� ��Ÿ�� �� �ֽ��ϴ�. 
// ���� 12�� ���μ��� 2�� 3�Դϴ�. 
// �ڿ��� n�� �Ű������� �־��� �� n�� ���μ��� ������������ ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(int n) 
{
    vector<int> answer;
    int divisor = 2;

    while (divisor * divisor <= n) 
    { 
        if (n % divisor == 0) 
        {
            answer.push_back(divisor);
            while (n % divisor == 0) 
            {  
                n /= divisor;
            }
        }
        divisor++;
    }

    if (n > 1) 
    { 
        answer.push_back(n);
    }

    return answer;
}