#include <string>
#include <vector>
#include <bitset>

using namespace std;

// �������� �ǹ��ϴ� �� ���� ���ڿ� bin1�� bin2�� �Ű������� �־��� ��, 
// �� �������� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

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