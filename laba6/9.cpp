#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class queue
{
	private:
		vector<int> qu; 
		int head;
		int tail; 
	public:
		queue(){
			//qu.resize(0);
			head = 0;
			tail = 0;
		}
	void put(int al){
		qu.push_back(al);
		tail = qu.size()-1;
		head = 0;
	}
	void get(){
		if (tail == -1)
				cout << "\n Queue is empty\n ";
		else {
		cout << " "<< qu[head] << endl;
		qu.erase(qu.begin());
		tail = qu.size()-1;
			}
	}
	
};

int main()
{
	cout << " put N - to put a number in the queue\n" 
	<< " get - to get a number in the queue\n"
	<< " Enter 0 to exit\n";
	string answer; queue k;
	do{
		cout << " ";
		getline(cin, answer);
		if (answer[0] == 'p'){
			answer.erase(0,4);
			int n = atoi(answer.c_str());
			k.put(n);
		}
		else if (answer[0] == 'g')	{
			k.get();
		}
		
	} while ( answer != "0" );
	
	return 0;
}
