#include <string>
#include <vector>

using namespace std;

// ������ 0�� �ʰ� 90�� �̸��� ����, 90���� ����, 90�� �ʰ� 180�� �̸��� �а� 180���� ������ �з��մϴ�. 
// �� angle�� �Ű������� �־��� �� ������ �� 1, ������ �� 2, �а��� �� 3, ���� �� 4�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int angle) 
{
    int answer = 0;

    if (angle > 0 && angle < 90) answer = 1;
    else if (angle == 90) answer = 2;
    else if (angle > 90 && angle < 180) answer = 3;
    else if (angle == 180) answer = 4;

    return answer;
}