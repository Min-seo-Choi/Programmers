#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ù ��° �м��� ���ڿ� �и� ���ϴ� numer1, denom1
// �� ��° �м��� ���ڿ� �и� ���ϴ� numer2, denom2 �� �Ű������� �־�����
// �� �м��� ���� ���� ��� �м��� ��Ÿ���� �� ���ڿ� �и� ������� ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
	vector<int> answer;
	int a = denom1, b = denom2, c;
	int lcm;

	// �и�� �ּ� �����
	while (b != 0) // ��Ŭ���� ȣ����
	{
		c = a % b;
		a = b;
		b = c;
	}

	lcm = denom1 * denom2 / a;

	// ��� �м��� �ִ�����
	int numer = (numer1 * (lcm / denom1)) + (numer2 * (lcm / denom2));

	a = numer;
	b = lcm;

	while (b != 0) // ��Ŭ���� ȣ����
	{
		c = a % b;
		a = b;
		b = c;
	}

	answer.emplace_back(numer / a); // numer�� �״�� ������ ���� ���� ������ �� Ȯ���� ����.
	answer.emplace_back(lcm / a);

	return answer;
}

// gcd()->�ִ�����, lcm()->�ּҰ���� �Լ��� <numeric> ����� ����