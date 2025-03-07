#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1부터 13까지의 수에서, 1은 1, 10, 11, 12, 13 이렇게 총 6번 등장합니다. 
// 정수 i, j, k가 매개변수로 주어질 때, i부터 j까지 k가 몇 번 등장하는지 return 하도록 solution 함수를 완성해주세요.

int solution(int i, int j, int k)
{
	int answer = 0;

	for (int num = i; num <= j; num++)
	{
		string numString = to_string(num);
		answer += count(numString.begin(), numString.end(), k + 48);
	}

	return answer;
}