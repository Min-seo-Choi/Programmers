#include <string>
#include <vector>

using namespace std;

// � ������ 1�ð��� �ι踸ŭ �����Ѵٰ� �մϴ�. 
// ó�� ������ ������ n�� ����� �ð� t�� �Ű������� �־��� �� t�ð� �� ������ ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int n, int t)
{
    for (int i = 1; i <= t; i++)
    {
        n += n;
    }

    return n;
}