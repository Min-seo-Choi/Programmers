#include <string>
#include <vector>

using namespace std;

// ���� �迭 numbers�� �Ű������� �־����ϴ�.
// numbers�� ���� ��հ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.

double solution(vector<int> numbers) 
{
    double sum = 0;
    for (int num : numbers)
    {
        sum += num;
    }

    return sum / numbers.size();
}