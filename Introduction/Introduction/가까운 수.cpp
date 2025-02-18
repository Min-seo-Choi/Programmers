#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

// 정수 배열 array와 정수 n이 매개변수로 주어질 때, array에 들어있는 정수 중 n과 가장 가까운 수를 return 하도록 solution 함수를 완성해주세요.

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