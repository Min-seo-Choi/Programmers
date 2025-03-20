#include <string>
#include <vector>

using namespace std;

// A�� �л����� ������ ���� �� ������ ������ �� �ڱ� �������� ��ä���� ���ҽ��ϴ�. 
// ���Ŀ� �������� ���� ������ �ҷ� �� �� ��ä���� ������ ���� ������ �ٸ� �л����� �־� �����Բ� ���Ǹ� �Ϸ��� �մϴ�.

// ������ �����Ϸ��� �л����� ��ȣ�� ��� ���� ����Ʈ numbers�� 
// ��ä���� ������ ������ �����Ϸ��� �л� ������� ��� ���� ����Ʈ our_score, 
// ���� ������ ��ȣ ������� ��� ���� ����Ʈ score_list�� �־����ϴ�.

// �־��� solution �Լ��� ��ä���� ������ ���� ������ �����ϴٸ� "Same"��, 
// �ٸ��ٸ� "Different"�� ������� ����Ʈ�� ��� return�ϴ� �Լ��Դϴ�.
// solution �Լ��� �ùٸ��� �۵��ϵ��� �� ���� ������ �ּ���.

vector<string> solution(vector<int> numbers, vector<int> our_score, vector<int> score_list) 
{
    int num_student = numbers.size();
    vector<string> answer(num_student);

    for (int i = 0; i < num_student; i++) 
    {
        if (our_score[i] == score_list[numbers[i] - 1]) answer[i] = "Same";
        else answer[i] = "Different";
    }

    return answer;
}