#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� ���α׷��ӽ��� �α����Ϸ��� �մϴ�. 
// �Ӿ��̰� �Է��� ���̵�� �н����尡 ��� �迭 id_pw�� ȸ������ ������ ��� 2���� �迭 db�� �־��� ��, 
// ������ ���� �α��� ����, ���п� ���� �޽����� return�ϵ��� solution �Լ��� �ϼ����ּ���.

// ���̵�� ��й�ȣ�� ��� ��ġ�ϴ� ȸ�������� ������ "login"�� return�մϴ�.
// �α����� �������� �� ���̵� ��ġ�ϴ� ȸ���� ���ٸ� ��fail����, 
// ���̵�� ��ġ������ ��й�ȣ�� ��ġ�ϴ� ȸ���� ���ٸ� ��wrong pw���� return �մϴ�.

string solution(vector<string> id_pw, vector<vector<string>> db)
{
    string answer = "";

    for (auto pair : db)
    {
        if (pair[0] == id_pw[0] && pair[1] == id_pw[1]) answer = "login";
        else if (pair[0] == id_pw[0] && pair[1] != id_pw[1]) answer = "wrong pw";
        else if (pair[0] != id_pw[0] && pair[1] != id_pw[1]) answer = "fail";
    }

    return answer;
}