#include <string>
#include <vector>

using namespace std;

// ���ڴ� 2���� �迭 board�� 1�� ǥ�õǾ� �ְ� board���� ���ڰ� �ż� �� ���� 1��, ���ڰ� ���� ���� 0�� �����մϴ�.
// ���ڰ� �ż��� ������ ���� board�� �Ű������� �־��� ��, ������ ������ ĭ ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<vector<int>> board)
{
	int n = board.size();
	int answer = 0;

	vector<int> dx = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };
	vector<int> dy = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 1)
			{
				board[i][j] = 2;
				answer++;

				for (int k = 0; k < 9; k++)
				{
					int x = i + dx[k];
					int y = j + dy[k];

					if ((-1 < x && x < n) && (-1 < y && y < n) &&
						(board[x][y] != 1 && board[x][y] < 2))
					{
						board[x][y] = 2;
						answer++;
					}
				}
			}
		}
	}

	return (n * n) - answer;
}