#include <string>
#include <vector>

using namespace std;

// ���α׷��ӽ� ġŲ�� ġŲ�� ���Ѹ����� �� ������ ������ �� �� �߱��մϴ�. 
// ������ �� �� ������ ġŲ�� �� ���� ���񽺷� ���� �� �ְ�, ���� ġŲ���� ������ �߱޵˴ϴ�. 
// ���Ѹ��� ġŲ�� �� chicken�� �Ű������� �־��� �� ���� �� �ִ� �ִ� ���� ġŲ�� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int chicken) 
{
    int answer = 0;

    while (chicken >= 10)
    {
        answer += chicken / 10;
        int coupon = chicken % 10;
        chicken /= 10;
        chicken += coupon;
    }

    return answer;
}