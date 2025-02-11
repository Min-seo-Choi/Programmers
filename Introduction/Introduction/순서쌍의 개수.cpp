#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 순서쌍이란 두 개의 숫자를 순서를 정하여 짝지어 나타낸 쌍으로 (a, b)로 표기합니다. 
// 자연수 n이 매개변수로 주어질 때 두 숫자의 곱이 n인 자연수 순서쌍의 개수를 return하도록 solution 함수를 완성해주세요.

int solution(int n)
{
	vector<int> nums;
	// 약수 구하기
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			nums.emplace_back(i);
			if (i != n / i) nums.emplace_back(n / i);
		}
	}

	return nums.size() % 2 == 0 ? nums.size() / 2 : (nums.size() / 2) + 2;
}

int main()
{
	cout << solution(1000000);
}