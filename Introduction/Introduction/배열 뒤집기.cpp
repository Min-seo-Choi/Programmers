#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ������ ��� �ִ� �迭 num_list�� �Ű������� �־����ϴ�. 
// num_list�� ������ ������ �Ųٷ� ������ �迭�� return �ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(vector<int> num_list) 
{
    reverse(num_list.begin(), num_list.end());
    return num_list;
}