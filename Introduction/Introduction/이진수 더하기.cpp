#include <string>
#include <vector>
#include <bitset>

using namespace std;

// 이진수를 의미하는 두 개의 문자열 bin1과 bin2가 매개변수로 주어질 때, 
// 두 이진수의 합을 return하도록 solution 함수를 완성해주세요.

string solution(string bin1, string bin2)
{
    string answer = "";
    bitset<10> dec1(bin1);
    bitset<10> dec2(bin2);

    unsigned long longDec1 = dec1.to_ulong();
    unsigned long longDec2 = dec2.to_ulong();

    unsigned long sum = longDec1 + longDec2;
    answer = bitset<20>(sum).to_string();

    size_t firstOne = answer.find('1');
    return (firstOne == string::npos) ? "0" : answer.substr(firstOne);
}