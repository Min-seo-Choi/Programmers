#include <string>
#include <vector>

using namespace std;

// ���� n�� ���� �迭 numlist�� �Ű������� �־��� ��, 
// numlist���� n�� ����� �ƴ� ������ ������ �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(int n, vector<int> numlist) 
{
    vector<int> answer;

    for (int num : numlist)
    {
        if (num % n == 0)
        {
            answer.emplace_back(num);
        }
    }

    return answer;
}