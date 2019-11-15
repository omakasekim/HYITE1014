#include<iostream>
#include<conio.h>
#include<math.h>

int main(void)
{
	int num, ans;
	std::cout << "Please input the number: ";
	std::cin >> num;
	ans = pow(num, 0.5);
	std::cout << "\n Square root of " << num << " is: " << ans;
	return 0;

}