#include <string>
#include <vector>

using namespace std;

// ���� �迭 num_list�� ���� n�� �Ű������� �־����ϴ�.
// num_list�� ���� ����� ���� 2���� �迭�� �ٲ� return�ϵ��� solution �Լ��� �ϼ����ּ���.
// num_list��[1, 2, 3, 4, 5, 6, 7, 8] �� ���̰� 8�̰� n�� 2�̹Ƿ� num_list�� 2 * 4 �迭�� ������ ���� �����մϴ�. 
// 2�������� �ٲ� ������ num_list�� ���ҵ��� �տ������� n���� ���� 2���� �迭�� �����մϴ�.

vector<vector<int>> solution(vector<int> num_list, int n) 
{
    vector<vector<int>> answer;
    
    vector<int> temp;

    for (int i = 0; i < num_list.size(); i++)
    {
        temp.emplace_back(num_list.at(i));

        if (temp.size() == n)
        {
            answer.emplace_back(temp);
            temp.clear();
        }
    }

    return answer;
}