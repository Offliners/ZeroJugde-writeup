#include<iostream>

using namespace std;

int main(void)
{
	int T, N, M;
	int mat[122];
	
	while(cin >> T)
	{
		for(int i = 0; i < T; i++)
		{
			cin >> N >> M;
			
			for(int j = 0; j < N * M; j++)
				cin >> mat[j];
			
			int head = 0;
			int tail = M * N - 1;
			while(mat[head] == mat[tail])
			{
				if(head > tail)
					break;
				
				head++;
				tail--;
			}
			
			cout << (head < tail ? "keep defending" : "go forward") << endl;
		}
	}
	
	return 0;
}
