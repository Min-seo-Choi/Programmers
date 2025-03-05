#include <string>
#include <vector>

using namespace std;

// 3x ���� ������� 3�� ������ ���ڶ�� �����ϱ� ������ 3�� ����� ���� 3�� ������� �ʽ��ϴ�.
// x ���� ������� ���ڴ� ������ �����ϴ�.
// 10����	3x �������� ���� ����	    10����	3x �������� ���� ����
//   1	            1	               6	        8
//   2	            2	               7	        10
//   3	            4	               8	        11
//   4	            5	               9	        14
//   5	            7	               10	        16
// ���� n�� �Ű������� �־��� ��, n�� 3x �������� ����ϴ� ���ڷ� �ٲ� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(int n) 
{
    int answer = 1;
    
    for (int i = 1; i < n + 1; i++)
    {
        while (answer % 3 == 0 || answer % 10 == 3 || (answer / 10) % 10 == 3)
        {
            answer++;
        }
        answer++;
    }
    answer--;

    return answer;
}