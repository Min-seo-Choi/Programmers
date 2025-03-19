#include <string>
#include <vector>

using namespace std;

// �¶��� ���񽺸� �̿��ϱ� ���ؼ� �г����� �ʿ��մϴ�. �̶� �г����� �� �� �ִ� ������ ������ �����ϴ�.

// - �г����� ���̰� 4�� �̻� 8�� ���Ͽ����մϴ�.
// - �г��ӿ��� �ҹ��� l��w, �빮�� O�� W�� ����� �� �����ϴ�.
// - �̿��� ���� ��ҹ��ڿ� ���ڴ� ��� ����� �����մϴ�.

// �־��� solution �Լ��� ����� �� ���� �г��� nickname�� �޾� ����� �� �ִ� �г������� �ٲ��ִ� �Լ��Դϴ�.
// �̶� �г����� �����ϴ� ��Ģ�� ������ ������ ù ��° ��Ģ���� ������� �����մϴ�.

// 1. �ҹ��� l�� �빮�� I�� �����մϴ�.
// 2. �ҹ��� w�� �� ���� �ҹ��� v, �� vv�� �����մϴ�.
// 3. �빮�� W�� �� ���� �빮�� V, �� VV�� �����մϴ�.
// 4. �빮�� O�� ���� 0���� �����մϴ�.
// 5. ������ �г����� ���̰� 4 �̸��� ��� �ڿ� �ҹ��� o�� ���̰� 4�� �ɶ����� �̾���Դϴ�.
// 6. ������ �г����� ���̰� 8���� Ŭ ��� 8��° ���ڱ����� ����մϴ�.

// �־��� solution �Լ����� ���� ��Ģ �� �ùٸ��� ������� �ʴ� ���� �ֽ��ϴ�.
// solution �Լ��� �ùٸ��� �۵��ϵ��� �� ���� �������ּ���.

string solution(string nickname) 
{
    string answer = "";
    for (int i = 0; i < nickname.size(); i++) 
    {
        if (nickname[i] == 'l') { answer += "I"; }
        else if (nickname[i] == 'w') { answer += "vv"; }
        else if (nickname[i] == 'W') { answer += "VV"; }
        else if (nickname[i] == 'O') { answer += "0"; }
        else { answer += nickname[i]; }
    }

    while (answer.size() < 4) { answer += "o"; }
    if (answer.size() > 8) { answer = answer.substr(0, 8); }
    return answer;
}

int main()
{
    solution("GO");
}