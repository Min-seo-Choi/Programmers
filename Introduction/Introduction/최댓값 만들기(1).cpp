#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���� �迭 numbers�� �Ű������� �־����ϴ�. 
// numbers�� ���� �� �� ���� ���� ���� �� �ִ� �ִ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> numbers) 
{
    int answer = 0;

    vector<int>::iterator iter = max_element(numbers.begin(), numbers.end());
    answer = *iter;
    numbers.erase(iter);

    iter = max_element(numbers.begin(), numbers.end());
    answer *= *iter;

    return answer;
}