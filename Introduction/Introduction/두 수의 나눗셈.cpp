#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 정수 num1과 num2가 매개변수로 주어질 때, 
// num1으르 num2로 나눈 값에 1,000을 곱한 후 정수 부분을 return 하도록 solution함수를 완성해주세요


int solution(int num1, int num2) 
{
    double dnum1 = num1;
    double dnum2 = num2;

    int answer = dnum1 / dnum2 * 1000;

    return  answer;
}