#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ���� num1�� num2�� �Ű������� �־��� ��, 
// num1���� num2�� ���� ���� 1,000�� ���� �� ���� �κ��� return �ϵ��� solution�Լ��� �ϼ����ּ���


int solution(int num1, int num2) 
{
    double dnum1 = num1;
    double dnum2 = num2;

    int answer = dnum1 / dnum2 * 1000;

    return  answer;
}