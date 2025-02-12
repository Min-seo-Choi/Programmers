#include <string>
#include <vector>
#include <map>

using namespace std;

// ������ 2 ������ 0 ���� 5�� ǥ���մϴ�. 
// ���� ���� ���� ���� ������� ��Ÿ�� ���ڿ� rsp�� �Ű������� �־��� ��, 
// rsp�� ����� ���� ���� ���� ��� �̱�� ��츦 ������� ��Ÿ�� ���ڿ��� return�ϵ��� solution �Լ��� �ϼ��غ�����.

string solution(string rsp)
{
	map<char, string> rspList;
	rspList.insert({'0', "5"});
	rspList.insert({'2', "0"});
	rspList.insert({'5', "2"});

	string answer = "";

	for (char crsp : rsp)
	{
		answer += rspList[crsp];
	}

	return answer;
}