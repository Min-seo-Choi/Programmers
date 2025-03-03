#include <string>
#include <vector>

using namespace std;

// �Ӿ��̴� RPG������ �ϰ� �ֽ��ϴ�. ���ӿ��� up, down, left, right ����Ű�� ������ 
// �� Ű�� ������ ��, �Ʒ�, ����, ���������� �� ĭ�� �̵��մϴ�. 
// ���� ��� [0,0]���� 
// up�� �����ٸ� ĳ������ ��ǥ�� [0, 1], 
// down�� �����ٸ� [0, -1], 
// left�� �����ٸ� [-1, 0], 
// right�� �����ٸ� [1, 0]�Դϴ�. 
// �Ӿ��̰� �Է��� ����Ű�� �迭 keyinput�� ���� ũ�� board�� �Ű������� �־����ϴ�. 
// ĳ���ʹ� �׻� [0,0]���� ������ �� Ű �Է��� ��� ���� �ڿ� ĳ������ ��ǥ [x, y]�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

vector<int> solution(vector<string> keyinput, vector<int> board)
{
	vector<int> answer;
	answer.emplace_back(0);
	answer.emplace_back(0);

	for (string str : keyinput)
	{
		if (answer.at(0) < (board.at(0) / 2) && str == "right") answer.at(0) += 1;

		if (str == "left")
		{
			if ((answer.at(0) < 0 && answer.at(0) > (board.at(0) / 2) * -1) 
				|| answer.at(0) >= 0 && answer.at(0) <= (board.at(0) / 2))
			{
				answer.at(0) -= 1; 
			}
		}


		if (answer.at(1) < (board.at(1) / 2) && str == "up") answer.at(1) += 1; 
		if (answer.at(1) > (board.at(1) / 2) * -1 && str == "down") answer.at(1) -= 1; 
	}

	return answer;
}