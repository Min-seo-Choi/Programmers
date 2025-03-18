#include <string>
#include <vector>

using namespace std;

//����һ����� ������ ���� ������ ���� �ǽ��մϴ�.
// 1. ������ �� ��ȣ�� Ȯ��[check]
// 2. ���� �� 119 �Ű� ��û[call]
// 3. �����й� 30ȸ ����[pressure]
// 4. �ΰ�ȣ�� 2ȸ ����[respiration]
// 5. �����й�, �ΰ�ȣ�� �ݺ�[repeat]
// �־��� solution �Լ��� ����һ����� �ϴ� ����� ������ ��� ���ڿ����� 
// ������ ������ ��� ����Ʈ cpr�� �־��� �� ������ ����� �� ��° �ܰ����� ������� ��� return�ϴ� �Լ��Դϴ�.
// solution �Լ��� �ùٸ��� �۵��ϵ��� ��ĭ�� ä�� solution �Լ��� �ϼ��� �ּ���.

vector<int> solution(vector<string> cpr) 
{
    vector<int> answer = { 0, 0, 0, 0, 0 };
    vector<string> basic_order = { "check", "call", "pressure", "respiration", "repeat" };

    for (int i = 0; i < cpr.size(); i++) 
    {
        for (int j = 0; j < basic_order.size(); j++) 
        {
            if (cpr[i] == basic_order[j]) 
            {
                answer[i] = j + 1;
                break;
            }
        }
    }

    return answer;
}