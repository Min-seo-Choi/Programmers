#include <iostream>

using namespace std;

// "*"�� ���̿� �ʺ� 1�̶�� ���� ��, "*"�� �̿��� ���� �̵ �ﰢ���� �׸������մϴ�. 
// ���� n �� �־����� ���̿� �ʺ� n �� ���� �̵ �ﰢ���� ����ϵ��� �ڵ带 �ۼ��غ�����.

int main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}