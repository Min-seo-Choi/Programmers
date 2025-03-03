#include <string>
#include <vector>

using namespace std;

// �� �� �̻��� ���� ������ �̷���� ���� ���׽��̶�� �մϴ�. 
// ���׽��� ����� ���� �����׳��� ����� �����մϴ�. 
// �������� �̷���� ���׽� polynomial�� �Ű������� �־��� ��, 
// �����׳��� ���� �ᱣ���� ���ڿ��� return �ϵ��� solution �Լ��� �ϼ��غ�����. 
// ���� ���̶�� ���� ª�� ������ return �մϴ�.

string solution(string polynomial) 
{
    string answer = "";

    int count = 0;
    int sum = 0;

    polynomial += " ";

    while (polynomial.find(" ") != string::npos)
    {
        string temp = polynomial.substr(0, polynomial.find(" "));
        if (temp.find("x") != string::npos)
        {
            if (temp[0] == 'x') count += 1;
            else
            {
                temp = temp.substr(0, temp.find("x"));
                count += stoi(temp);
            }
        }
        else
        {
            if (temp.find("+") == string::npos) sum += stoi(temp);
        }

        polynomial = polynomial.substr(polynomial.find(" ") + 1);
    }

    if (count > 1) answer += to_string(count) + "x";
    else if (count == 1) answer += "x";

    if (sum > 0)
    {
        if (answer == "") answer += to_string(sum);
        else answer += " + " + to_string(sum);
    }

    return answer;
}

int main()
{
    solution("7");
}