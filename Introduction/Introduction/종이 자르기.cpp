#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� ū ���̸� 1 x 1 ũ���� �ڸ����� �մϴ�. ���� ��� 2 x 2 ũ���� ���̸� 1 x 1 ũ��� �ڸ����� �ּ� ������ �� ���� �ʿ��մϴ�.
// ���� M, N�� �Ű������� �־��� ��, M x N ũ���� ���̸� �ּҷ� ������ �ؾ��ϴ� Ƚ���� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(int M, int N) 
{
    return (M * N) - 1;
}