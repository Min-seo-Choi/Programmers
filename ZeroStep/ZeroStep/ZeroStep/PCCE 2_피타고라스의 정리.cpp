#include <iostream>

using namespace std;

// �����ﰢ���� �־����� �� ������ ������ �ٸ� �� ���� ���� ������ ���� �հ� �����ϴ�.

// �����ﰢ���� �� ���� ���̸� ��Ÿ���� ���� a�� ������ ���̸� ��Ÿ���� ���� c�� �־��� ��, 
// �ٸ� �� ���� ������ ����, 
// b_square �� ����ϵ��� �� ���� ������ �ڵ带 �ϼ��� �ּ���.

int main(void) 
{
    int a;
    int c;
    cin >> a >> c;

    int b_square = (c * c) - (a * a);
 
    cout << b_square << endl;
    return 0;
}