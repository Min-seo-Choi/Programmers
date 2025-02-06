#include <string>
#include <vector>

using namespace std;

// 머쓱이네 피자가게는 피자를 여섯 조각으로 잘라줍니다.
// 피자를 나눠먹을 사람 수 n이 매개변수로 주어질 때,
// n명이 주문한 피자를 남기지 않고 모두 같은 수의 피자 조각을 먹어야 한다면
// 최소 몇 판을 시켜야 하는지 return 하도록 solution 함수를 완성해 보세요.

int solution(int n) 
{
	int a = 6, b = n, c;

	while (b != 0) // 유클리드 호제법
	{
		c = a % b;
		a = b;
		b = c;
	}

	int pieces = (6 * n) / a;

	return pieces / 6;
}