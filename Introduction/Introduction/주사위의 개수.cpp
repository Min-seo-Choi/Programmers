#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� ������ü ����� ���ڸ� �ϳ� ������ �ִµ� �� ���ڿ� ������ü ����� �ֻ����� �ִ��� ���� ä��� �ͽ��ϴ�. 
// ������ ����, ����, ���̰� ����Ǿ��ִ� �迭 box�� �ֻ��� �𼭸��� ���� ���� n�� �Ű������� �־����� ��, 
// ���ڿ� �� �� �ִ� �ֻ����� �ִ� ������ return �ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> box, int n) 
{
    int answer = 1;

    answer *= box.at(0) / n;
    answer *= box.at(1) / n;
    answer *= box.at(2) / n;

    return answer;
}