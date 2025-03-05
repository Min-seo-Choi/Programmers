#include <string>
#include <vector>

using namespace std;

// �� �� ���� ��ǥ�� ���� ������ �迭  dots�� ������ ���� �Ű������� �־����ϴ�.
// {[x1, y1], [x2, y2], [x3, y3], [x4, y4]]
// �־��� �� ���� ���� �� ���� �̾��� ��, �� ������ ������ �Ǵ� ��찡 ������ 1�� ������ 0�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<vector<int>> dots)
{
	int answer = 0;

    vector<vector<int>> dot_pairs = {
           {0, 1, 2, 3},
           {0, 2, 1, 3},
           {0, 3, 1, 2}
    };

    for (auto& pair : dot_pairs)
    {
        int x1 = dots[pair[0]][0], y1 = dots[pair[0]][1];
        int x2 = dots[pair[1]][0], y2 = dots[pair[1]][1];
        int x3 = dots[pair[2]][0], y3 = dots[pair[2]][1];
        int x4 = dots[pair[3]][0], y4 = dots[pair[3]][1];

        // ���Ⱑ ������ Ȯ�� (���� �� ���)
        if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1))
        {
            answer = 1;
            break;
        }
    }

	return answer;
}