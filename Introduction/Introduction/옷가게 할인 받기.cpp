#include <string>
#include <vector>

using namespace std;

// �Ӿ��̳� �ʰ��Դ� 10���� �̻� ��� 5%, 30���� �̻� ��� 10%, 50���� �̻� ��� 20%�� ������ �ݴϴ�.
// ������ ���� ���� price�� �־��� ��, �����ؾ� �� �ݾ��� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(int price) 
{

    if (price >= 500000) price -= price * 0.2;
    else if (price >= 300000) price -= price * 0.1;
    else if(price >= 100000) price -= price * 0.05;
    
    return price;
}