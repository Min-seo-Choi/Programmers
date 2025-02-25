#include <string>
#include <vector>
#include <sstream>

using namespace std;

// ����, ���� ���ĵ��� 'X [������] Y = Z' ���·� ����ִ� ���ڿ� �迭 quiz�� �Ű������� �־����ϴ�. 
// ������ �Ǵٸ� "O"�� Ʋ���ٸ� "X"�� ������� ���� �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<string> solution(vector<string> quiz) 
{
    vector<string> answer;

    for (string str : quiz)
    {
        int result = stoi(str.substr(str.rfind(' ')));

        stringstream s;
        int num = 0;
        string opt, temp;

        s.str(str.substr(0, str.find('=')));
        s >> num;

        while (s >> temp)
        {
            if (temp == "+")
            {
                opt = "+";
                continue;
            }

            if (temp == "-")
            {
                opt = "-";
                continue;
            }

            if (opt == "+") num += stoi(temp);
            else if (opt == "-") num -= stoi(temp);
        }

        if (result == num) answer.emplace_back("O");
        else answer.emplace_back("X");
    }

    return answer;
}