#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class matrix
{
	private:
		vector<vector<int> > m; 
		int k;
	public:
		matrix(int n){
			k = n;
			m.resize(n);
			for (int i = 0; i < n; i++)
					m[i].resize(n, 0);
		}
	void put(int x, int y , int number){
	if ((x < k) && (y < k))
	       m[x][y] = number;
	}
	int get(int x, int y){
	if ((x < k) && (y < k))
		return m[x][y];
	}
	
};

int main()
{
	cout << " Enter the size of the matrix: ";
	int n; cin >> n;
	matrix m(n);
	
	cout << " Enter put x y N - to put a number in matrix[x][y]\n" 
	<< " Enter get x y - to get a number in the matrix[x][y]\n"
	<< " Enter 0 to exit\n";
	string answer;
	do{
		getline(cin, answer);
		if (answer[0] == 'p'){
			answer.erase(0,4);
			int k = answer.find(' ');
			int x = atoi(answer.substr(0, k).c_str());
			answer.erase(0, k + 1);
			k = answer.find(' ');
			int y = atoi(answer.substr(0, k).c_str());
			answer.erase(0, k + 1);
			int number = atoi(answer.c_str());
			m.put(x, y, number);
			answer = "1";
		}
		else if (answer[0] == 'g')	{
			answer.erase(0,4);
			int k = answer.find(' ');
			int x = atoi(answer.substr(0, k).c_str());
			answer.erase(0, k + 1);
			int y = atoi(answer.c_str());
			cout << " " << m.get(x,y) << endl;
			answer = "1";
		}
		
	} while ( answer != "0" );

}
