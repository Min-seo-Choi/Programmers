#include <string>
#include <vector>

using namespace std;

// ���ڿ� my_string�� ���� num1, num2�� �Ű������� �־��� ��, 
// my_string���� �ε��� num1�� �ε��� num2�� �ش��ϴ� ���ڸ� �ٲ� ���ڿ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

string solution(string my_string, int num1, int num2) 
{
    char temp = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = temp;

    return my_string;
}