#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� ģ����� 369������ �ϰ� �ֽ��ϴ�. 
// 369������ 1���� ���ڸ� �ϳ��� ��� 3, 6, 9�� ���� ���ڴ� ���� ��� 3, 6, 9�� ������ŭ �ڼ��� ġ�� �����Դϴ�. 
// �Ӿ��̰� ���ؾ��ϴ� ���� order�� �Ű������� �־��� ��, �Ӿ��̰� �ľ��� �ڼ� Ƚ���� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(int order) 
{
    int answer = 0;
    string nums = to_string(order);
    for (char num : nums)
    {
        if (num == '3' || num == '6' || num == '9')
        {
            answer++;
        }
    }

    return answer;
}