#include<iostream>
#include<conio.h>
#include<math.h>

int main(void)
{
	int A, B, C, ans;
	std::cout << "A + B - C = ? \n ";
	std::cout << "Input A:";
	std::cin >> A;
	std::cout << "Input B:";
	std::cin >> B;
	std::cout << "Input C:";
	std::cin >> C;


	ans = A + B - C;
	std::cout << "\n" << A << "+" << B << "-" << C << "=" << ans << "\n";
	return 0;

}