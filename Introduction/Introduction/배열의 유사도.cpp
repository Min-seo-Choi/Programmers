#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// �� �迭�� �󸶳� �������� Ȯ���غ����� �մϴ�. ���ڿ� �迭 s1�� s2�� �־��� �� ���� ������ ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<string> s1, vector<string> s2) 
{
    int answer = 0;

    if (s1.size() <= s2.size())
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (find(s2.begin(), s2.end(), s1.at(i)) != s2.end()) answer++;
        }
    }
    else
    {
        for (int i = 0; i < s2.size(); i++)
        {
            if (find(s1.begin(), s1.end(), s2.at(i)) != s1.end()) answer++;
        }
    }

    return answer;
}