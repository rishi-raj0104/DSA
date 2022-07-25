#include <iostream>
using namespace std;

int countRec(int choc, int wrap)
{
	if (choc < wrap)
		return 0;

	int newChoc = choc/wrap;
	return newChoc + countRec(newChoc + choc%wrap,
							wrap);
}
int countMaxChoco(int money, int price, int wrap)
{
	int choc = money/price;
	return choc + countRec(choc, wrap);
}

int main()
{
	int money = 15 ;
	int price = 1;
	int wrap = 3 ;

	cout << countMaxChoco(money, price, wrap);
	return 0;
}
