#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ���ڿ� my_string�� �Ű������� �־����ϴ�. 
// my_string�� �Ųٷ� ������ ���ڿ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(string my_string) 
{
    reverse(my_string.begin(), my_string.end());
    return my_string;
}