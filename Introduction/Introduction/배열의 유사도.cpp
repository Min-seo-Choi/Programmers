#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 두 배열이 얼마나 유사한지 확인해보려고 합니다. 문자열 배열 s1과 s2가 주어질 때 같은 원소의 개수를 return하도록 solution 함수를 완성해주세요.

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