#include <string>
#include <vector>

using namespace std;

//심폐소생술은 다음과 같은 순서를 통해 실시합니다.
// 1. 심정지 및 무호흡 확인[check]
// 2. 도움 및 119 신고 요청[call]
// 3. 가슴압박 30회 시행[pressure]
// 4. 인공호흡 2회 시행[respiration]
// 5. 가슴압박, 인공호흡 반복[repeat]
// 주어진 solution 함수는 심폐소생술을 하는 방법의 순서가 담긴 문자열들이 
// 무작위 순서로 담긴 리스트 cpr이 주어질 때 각각의 방법이 몇 번째 단계인지 순서대로 담아 return하는 함수입니다.
// solution 함수가 올바르게 작동하도록 빈칸을 채워 solution 함수를 완성해 주세요.

vector<int> solution(vector<string> cpr) 
{
    vector<int> answer = { 0, 0, 0, 0, 0 };
    vector<string> basic_order = { "check", "call", "pressure", "respiration", "repeat" };

    for (int i = 0; i < cpr.size(); i++) 
    {
        for (int j = 0; j < basic_order.size(); j++) 
        {
            if (cpr[i] == basic_order[j]) 
            {
                answer[i] = j + 1;
                break;
            }
        }
    }

    return answer;
}