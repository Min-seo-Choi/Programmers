#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 정수 배열 array가 매개변수로 주어질 때, 
// 가장 큰 수와 그 수의 인덱스를 담은 배열을 return 하도록 solution 함수를 완성해보세요.

vector<int> solution(vector<int> array)
{
	vector<int> answer;

	vector<int>::iterator iter = max_element(array.begin(), array.end());

	answer.emplace_back(*iter);
	int index = distance(array.begin(), iter);
	answer.emplace_back(index);

	return answer;
}