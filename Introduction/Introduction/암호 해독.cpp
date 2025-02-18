#include <string>
#include <vector>

using namespace std;

// �� ������ �Ӿ��̴� ���� �� ������ ������ ���� ��ȣ ü�踦 ����Ѵٴ� ���� �˾Ƴ½��ϴ�.
// ��ȣȭ�� ���ڿ� cipher�� �ְ�޽��ϴ�.
// �� ���ڿ����� code�� ��� ��° ���ڸ� ��¥ ��ȣ�Դϴ�.
// ���ڿ� cipher�� ���� code�� �Ű������� �־��� �� �ص��� ��ȣ ���ڿ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

string solution(string cipher, int code) 
{
    string answer = "";
    int index = code - 1;

    while (index < cipher.size())
    {
        answer += cipher[index];
        index += code;
    }

    return answer;
}