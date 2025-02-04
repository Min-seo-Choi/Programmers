#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1
// 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2 가 매개변수로 주어진다
// 두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
	vector<int> answer;
	int a = denom1, b = denom2, c;
	int lcm;

	// 분모는 최소 공배수
	while (b != 0) // 유클리드 호제법
	{
		c = a % b;
		a = b;
		b = c;
	}

	lcm = denom1 * denom2 / a;

	// 기약 분수는 최대공약수
	int numer = (numer1 * (lcm / denom1)) + (numer2 * (lcm / denom2));

	a = numer;
	b = lcm;

	while (b != 0) // 유클리드 호제법
	{
		c = a % b;
		a = b;
		b = c;
	}

	answer.emplace_back(numer / a); // numer를 그대로 가져다 쓰면 연산 오류가 날 확률이 높음.
	answer.emplace_back(lcm / a);

	return answer;
}

// gcd()->최대공약수, lcm()->최소공배수 함수는 <numeric> 헤더에 존재