#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// �߾Ӱ��� � �־��� ������ ũ���� ������� �������� �� ���� �߾ӿ� ��ġ�ϴ� ���� �ǹ��մϴ�.
// ���� ��� 1, 2, 7, 10, 11�� �߾Ӱ��� 7�Դϴ�.
// ���� �迭 array�� �Ű������� �־��� ��, �߾Ӱ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<int> array) 
{
    sort(array.begin(), array.end());
    return array.at(array.size() / 2);
}