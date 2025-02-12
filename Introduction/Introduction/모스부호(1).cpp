#include <string>
#include <vector>
#include <map>

using namespace std;

// 머쓱이는 친구에게 모스부호를 이용한 편지를 받았습니다. 그냥은 읽을 수 없어 이를 해독하는 프로그램을 만들려고 합니다. 
// 문자열 letter가 매개변수로 주어질 때, letter를 영어 소문자로 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.


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