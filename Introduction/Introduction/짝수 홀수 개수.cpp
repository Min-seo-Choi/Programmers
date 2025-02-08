#include <string>
#include <vector>

using namespace std;

// ������ ��� ����Ʈ num_list�� �־��� ��, 
// num_list�� ���� �� ¦���� Ȧ���� ������ ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    int even = 0, odd = 0;

    for (int num : num_list)
    {
        if (num % 2 == 0) even++;
        else odd++;
    }

    answer.emplace_back(even);
    answer.emplace_back(odd);

    return answer;
}