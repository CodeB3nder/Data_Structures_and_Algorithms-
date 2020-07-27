// Length of smallest sub-array in range 1-N
# include <iostream>
using namespace std;
int count_elements(int N, int S)
{
	int sum = 0;
	int count = 0;
	while(sum <= S)
	{
		sum += N--;
		count ++;
	}
	return count;
}

int main()
{
	cout << count_elements(5,11);
	return 0;
}
