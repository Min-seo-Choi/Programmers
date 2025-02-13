#include <string>
#include <vector>

using namespace std;

// ��и��� �� ����� x��� y���� �������� ���� �� �κ��Դϴ�. ��и��� �Ʒ��� ���� 1���� 4���� ��ȣ���ű�ϴ�.
// x ��ǥ�� y ��ǥ�� ��� ����̸� ��1��и鿡 ���մϴ�.
// x ��ǥ�� ����, y ��ǥ�� ����̸� ��2��и鿡 ���մϴ�.
// x ��ǥ�� y ��ǥ�� ��� �����̸� ��3��и鿡 ���մϴ�.
// x ��ǥ�� ���, y ��ǥ�� �����̸� ��4��и鿡 ���մϴ�.
// x ��ǥ(x, y)�� ���ʴ�� ���� ���� �迭 dot�� �Ű������� �־����ϴ�.��ǥ dot�� ��и� �� ��� ���ϴ��� 1, 2, 3, 4 �� �ϳ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> dot) 
{
    int answer = 0;

    if (dot.at(0) > -1 && dot.at(1) > -1) answer = 1;
    if (dot.at(0) < 1 && dot.at(1) > -1) answer = 2;
    if (dot.at(0) < 1 && dot.at(1) < 1) answer = 3;
    if (dot.at(0) > -1 && dot.at(1) < 1) answer = 4;


    return answer;
}