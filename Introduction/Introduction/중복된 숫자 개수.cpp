#include <string>
#include <vector>

using namespace std;

// ������ ��� �迭 array�� ���� n�� �Ű������� �־��� ��, 
// array�� n�� �� �� �ִ� ���� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<int> array, int n) 
{
    int answer = 0;

    for (int arr : array)
    {
        if (arr == n) answer++;
    }

    return answer;
}