#include <string>
#include <vector>
#include <map>

using namespace std;

// �Ӿ��̴� ģ������ �𽺺�ȣ�� �̿��� ������ �޾ҽ��ϴ�. �׳��� ���� �� ���� �̸� �ص��ϴ� ���α׷��� ������� �մϴ�. 
// ���ڿ� letter�� �Ű������� �־��� ��, letter�� ���� �ҹ��ڷ� �ٲ� ���ڿ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.


string solution(string letter)
{
	letter += " ";

	map<string, string> morses;
	morses.insert({ ".-" , "a" });
	morses.insert({ "-..." , "b" });
	morses.insert({ "-.-." , "c" });
	morses.insert({ "-.." , "d" });
	morses.insert({ "." , "e" });
	morses.insert({ "..-." , "f" });
	morses.insert({ "--." , "g" });
	morses.insert({ "...." , "h" });
	morses.insert({ ".." , "i" });
	morses.insert({ ".---" , "j" });
	morses.insert({ "-.-" , "k" });
	morses.insert({ ".-.." , "l" });
	morses.insert({ "--" , "m" });
	morses.insert({ "-." , "n" });
	morses.insert({ "---" , "o" });
	morses.insert({ ".--." , "p" });
	morses.insert({ "--.-" , "q" });
	morses.insert({ ".-." , "r" });
	morses.insert({ "..." , "s" });
	morses.insert({ "-" , "t" });
	morses.insert({ "..-" , "u" });
	morses.insert({ "...-" , "v" });
	morses.insert({ ".--" , "w" });
	morses.insert({ "-..-" , "x" });
	morses.insert({ "-.--" , "y" });
	morses.insert({ "--.." , "z" });

	string answer = "";

	while (letter.find(' ') != string::npos)
	{
		string morse = letter.substr(0, letter.find(' '));
		answer += morses[morse];
		letter = letter.substr(letter.find(' ') + 1);
	}

	return answer;
}