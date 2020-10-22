#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	int t = 5;
	while(t--)
	{
		
		int a = rand()%1000+1;
		int b = rand()%1000+1;
		cout << a + b << endl;
	}
	return 0;
}
