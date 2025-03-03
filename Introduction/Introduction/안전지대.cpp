#include <string>
#include <vector>

using namespace std;

// 지뢰는 2차원 배열 board에 1로 표시되어 있고 board에는 지뢰가 매설 된 지역 1과, 지뢰가 없는 지역 0만 존재합니다.
// 지뢰가 매설된 지역의 지도 board가 매개변수로 주어질 때, 안전한 지역의 칸 수를 return하도록 solution 함수를 완성해주세요.

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