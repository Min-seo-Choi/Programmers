#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� �б����� Ű ������ ���� �� �� �� ��°�� ���� �ϴ��� �ñ��������ϴ�. 
// �Ӿ��̳� �� ģ������ Ű�� ��� ���� �迭 array�� �Ӿ����� Ű height�� �Ű������� �־��� ��, 
// �Ӿ��̺��� Ű ū ��� ���� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<int> array, int height) 
{
    int answer = 0;

    for (int arr : array)
    {
        if (height < arr) answer++;
    }

    return answer;
}