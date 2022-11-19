#include < iostream >
using namespace std;
int main()
{
	int num0 , num1 , num2 , num3;
	cout << " please enter the four numbers \n";
	cin >> num0 >> num1 >> num2 >> num3;
	int arr[4] = {num0,num1,num2,num3};
	if (arr[0] % 2 == 0)
		cout << arr[0] << " is" << " even\n";
	else
		cout << arr[0] << " is" << " odd\n";

	if (arr[1] % 2 == 0)
		cout << arr[1] << " is" << " even\n";
	else
		cout << arr[1] << " is" << " odd\n";

	if (arr[2] % 2 == 0)
		cout << arr[2] << " is" << " even\n";
	else
		cout << arr[2] << " is" << " odd\n";

	if (arr[3] % 2 == 0)
		cout << arr[3] << " is" << " even\n";
	else
		cout << arr[3] << " is" << " odd\n";

	system ("pause");
	return 0;
}