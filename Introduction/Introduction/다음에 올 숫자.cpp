#include <string>
#include <vector>

using namespace std;

// 등차수열 혹은 등비수열 common이 매개변수로 주어질 때, 마지막 원소 다음으로 올 숫자를 return 하도록 solution 함수를 완성해보세요.

int solution(vector<int> common)
{
	int as1 = common[1] - common[0];
	int as2 = common[2] - common[1];
	if (as1 == as2) return common[common.size() - 1] + as1;

	int gs1 = common[1] / common[0];
	int gs2 = common[2] / common[1];

	if (gs1 == gs2) return common[common.size() - 1] * gs1;
}