#include <string>
#include <vector>

using namespace std;

// ���ڿ� �迭 strlist�� �Ű������� �־����ϴ�. strlist �� ������ ���̸� ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;

    for (string str : strlist)
    {
        answer.emplace_back(str.size());
    }

    return answer;
}