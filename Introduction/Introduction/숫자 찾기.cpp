#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 정수 num과 k가 매개변수로 주어질 때, 
// num을 이루는 숫자 중에 k가 있으면 num의 그 숫자가 있는 자리 수를 return하고 없으면 -1을 return 하도록 solution 함수를 완성해보세요.

int solution(int num, int k)
{
	int answer = 0;
	vector<int> nums;

	while (num > 0)
	{
		int temp = num % 10;
		nums.emplace_back(temp);

		num /= 10;
	}

	reverse(nums.begin(), nums.end());

	if (find(nums.begin(), nums.end(), k) != nums.end())
		answer = distance(nums.begin(), find(nums.begin(), nums.end(), k)) + 1;
	else
		answer = -1;

	return answer;
}