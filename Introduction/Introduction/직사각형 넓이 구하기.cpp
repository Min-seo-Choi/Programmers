#include <string>
#include <vector>

using namespace std;

// 2차원 좌표 평면에 변이 축과 평행한 직사각형이 있습니다. 
// 직사각형 네 꼭짓점의 좌표 [[x1, y1], [x2, y2], [x3, y3], [x4, y4]]가 담겨있는 배열 dots가 매개변수로 주어질 때, 
// 직사각형의 넓이를 return 하도록 solution 함수를 완성해보세요.

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