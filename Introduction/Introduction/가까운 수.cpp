#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

// ���� �迭 array�� ���� n�� �Ű������� �־��� ��, array�� ����ִ� ���� �� n�� ���� ����� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> array, int n) 
{
    int answer = 0;
    int temp = -1;
    for (int arr : array)
    {
        if (temp == -1 || temp >= abs(n - arr))
        {
            if (temp == abs(n - arr))
            {
                if (answer > arr) answer = arr;
            }
            else
            {
                answer = arr;
            }
            temp = abs(n - arr);
        }
    }

    return answer;
}