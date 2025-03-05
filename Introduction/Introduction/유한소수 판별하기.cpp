#include <string>
#include <vector>

using namespace std;

// ���� �Ʒ� ���ڰ� ��ӵ��� �ʰ� ���Ѱ��� �Ҽ��� ���ѼҼ���� �մϴ�. 
// �м��� �Ҽ��� ��ĥ �� ���ѼҼ��� ��Ÿ�� �� �ִ� �м����� �Ǻ��Ϸ��� �մϴ�. 
// ���ѼҼ��� �Ǳ� ���� �м��� ������ ������ �����ϴ�.
// ���м��� ��Ÿ������ ��, �и��� ���μ��� 2�� 5�� �����ؾ� �մϴ�.
// �� ���� a�� b�� �Ű������� �־��� ��, a / b�� ���ѼҼ��̸� 1��, ���ѼҼ���� 2�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int a, int b) {
	int n = a, m = b, k = 0;

	while (m != 0)
	{
		k = n % m;
		n = m;
		m = k;
	}

	if (n > 1) b /= n;

    int divider = 2;
    while (b > 1)
    {
        while (b % divider == 0)
        {
            if (divider != 2 && divider != 5) return 2;
            b /= divider;
        }
        divider++;
    }

	return 1;
}