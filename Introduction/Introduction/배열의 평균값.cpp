#include <string>
#include <vector>

using namespace std;

// 정수 배열 numbers가 매개변수로 주어집니다.
// numbers의 원소 평균값을 return 하도록 solution 함수를 완성해주세요.

double solution(vector<int> numbers) 
{
    double sum = 0;
    for (int num : numbers)
    {
        sum += num;
    }

    return sum / numbers.size();
}