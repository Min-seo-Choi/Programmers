#include <string>
#include <vector>

using namespace std;

// �Ӿ��̳� �粿ġ ���Դ� 10�κ��� ������ ����� �ϳ��� ���񽺷� �ݴϴ�. 
// �粿ġ�� 1�κп� 12,000��, ������� 2,000���Դϴ�. 
/// ���� n�� k�� �Ű������� �־����� ��, �粿ġ n�κа� ����� k���� �Ծ��ٸ� �Ѿ󸶸� �����ؾ� �ϴ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(int n, int k) 
{
    const int food = 12000;
    const int drink = 2000;

    if (n >= 10) k -= (n / 10);

    int answer = (n * food) + (k * drink);

    return answer;
}