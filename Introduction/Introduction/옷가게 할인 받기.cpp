#include <string>
#include <vector>

using namespace std;

// 머쓱이네 옷가게는 10만원 이상 사면 5%, 30만원 이상 사면 10%, 50만원 이상 사면 20%를 할인해 줍니다.
// 구매한 옷의 가격 price가 주어질 때, 지불해야 할 금액을 return 하도록 solution 함수를 완성해보세요.

int solution(int price) 
{

    if (price >= 500000) price -= price * 0.2;
    else if (price >= 300000) price -= price * 0.1;
    else if(price >= 100000) price -= price * 0.05;
    
    return price;
}