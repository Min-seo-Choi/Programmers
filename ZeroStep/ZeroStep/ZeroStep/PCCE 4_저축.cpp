#include <iostream>

using namespace std;

// ����� ���� ������ ���� ������ �Ϸ��� �մϴ�. 
// ��ǥ�� �ϴ� �ݾ��� 100�� ���̸�, ù �޿� ���� �ݾ��� ���� �� 70�� �������� �ſ� ���ݾ� �����ϴٰ� 
// 70�� �� ���ĺ��ʹ� �� ���෮�� �÷� ������ ��ǥ �ݾ��� �޼��ϰ��� �մϴ�.

// ù �޿� �����ϴ� �ݾ��� ��Ÿ���� ���� start, 
// �� ��° �� ���� 70�� �� �̻� ���� ������ �ſ� �����ϴ� �ݾ��� ��Ÿ���� ���� before, 
// 100�� �� �̻� ���� �� ���� �ſ� �����ϴ� �ݾ��� ��Ÿ���� ���� after�� �־��� ��, 
// 100�� �� �̻��� ���� ������ �ɸ��� ���� ���� ����ϵ��� ��ĭ�� ä�� �ڵ带 �ϼ��� �ּ���.

int main(void) 
{
    int start;
    int before;
    int after;

    cin >> start >> before >> after;

    int money = start;
    int month = 1;

    while (money < 70) 
    {
        money += before;
        month++;
    }
    while (money < 100) 
    {
        money += after;
        month++;
    }
    cout << month << endl;
    return 0;
}