#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� ģ����� ���׶��� ���� �� ������ ������ �ϰ� �ֽ��ϴ�. 
// ���� 1������ ������ ���������� �� ���� �ǳʶٰ� �״��� ������Ը� ���� �� �ֽ��ϴ�. 
// ģ������ ��ȣ�� ����ִ� ���� �迭 numbers�� ���� K�� �־��� ��, k��°�� ���� ������ ����� ��ȣ�� �������� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<int> numbers, int k) 
{
    int index = 0;

    for (int i = 1; i < k; i++)
    {
        index += 2;
        if (index >= numbers.size()) index -= numbers.size();
    }

    return numbers.at(index);
}