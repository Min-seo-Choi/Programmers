#include <iostream>

using namespace std;

// 2�ڸ� �̻��� ���� number�� �־����ϴ�. 
// �־��� �ڵ�� �� ���� 2�ڸ��� �ڸ� ��, 
// �ڸ� ���� ��� ���ؼ� �� ���� ����ϴ� �ڵ��Դϴ�. 
// �ڵ尡 �ùٸ��� �۵��ϵ��� �� ���� ������ �ּ���.

int main(void) {
    int number;
    cin >> number;

    int answer = 0;

    while (number > 0) 
    {
        answer += number % 100;
        number /= 100;
    }
    cout << answer << endl;
    return 0;
}