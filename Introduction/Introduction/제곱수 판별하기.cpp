#include <string>
#include <vector>
#include <cmath>

using namespace std;

// � �ڿ����� �������� �� ������ ������ ��������� �մϴ�. 
// ���� n�� �Ű������� �־��� ��, n�� ��������� 1�� �ƴ϶�� 2�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int n) 
{
   int temp = sqrt(n);

    return n == (temp * temp) ? 1 : 2;
}