#include <string>
#include <vector>

using namespace std;

// 2���� ��ǥ ��鿡 ���� ��� ������ ���簢���� �ֽ��ϴ�. 
// ���簢�� �� �������� ��ǥ [[x1, y1], [x2, y2], [x3, y3], [x4, y4]]�� ����ִ� �迭 dots�� �Ű������� �־��� ��, 
// ���簢���� ���̸� return �ϵ��� solution �Լ��� �ϼ��غ�����.

int solution(vector<vector<int>> dots)
{
	int width = 0, height = 0;

	int minX = 257, maxX = -257;
	int minY = 257, maxY = -257;

	for (auto vec : dots)
	{
		if (minX > vec.at(0)) minX = vec.at(0);
		if (maxX < vec.at(0)) maxX = vec.at(0);

		if (minY > vec.at(1)) minY = vec.at(1);
		if (maxY < vec.at(1)) maxY = vec.at(1);
	}

	if (minX < 0) width = (minX * -1) + maxX;
	else width = maxX - minX;

	if (minY < 0) height = (minY * -1) + maxY;
	else height = maxY - minY;

	return width * height;
}