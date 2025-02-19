#include <string>
#include <vector>
#include <map>

using namespace std;

// ��� ���� �Ӿ��̴� ����� ǥ��Ǿ��ִ� ���ڸ� ���� �ٲٷ��� �մϴ�. 
// ���ڿ� numbers�� �Ű������� �־��� ��, numbers�� ������ �ٲ� return �ϵ��� solution �Լ��� �ϼ��� �ּ���.

long long solution(string numbers)
{
	long long answer = 0;
	map<string, int> numberStr = { {"zero", 0},  {"one", 1}, {"two",2}, {"three",3}, {"four",4}, {"five",5}, {"six",6}, {"seven",7}, {"eight",8}, {"nine",9} };

	for (auto numStr : numberStr)
	{
		while (numbers.find(numStr.first) != string::npos)
		{
			numbers.replace(numbers.find(numStr.first), numStr.first.length(), to_string(numStr.second));
		}
	}

	answer = stoll(numbers);

	return answer;
}