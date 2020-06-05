 #include <iostream>
using namespace std;
class time
    {
    private:
    int hrs,mins,secs;
    public:
    time():hrs(0),mins(0),secs(0) 
      {}
    time(int h,int m,int s):hrs(h),mins(m),secs(s)
      {}
      
    void display()const           
      { cout << hrs <<":" << mins <<":" << secs; }
    void add_time(time t1,time t2)
      {
      int time1 = t1.secs + t1.mins*60 + t1.hrs*3600;
      int time2 = t2.secs + t2.mins*60 + t2.hrs*3600;
      int ts = time1 + time2;
      hrs = ts/3600;
      mins = ts%3600 /60;
      secs = ts%3600 %60;
      }
    };
int main()
    {
    const time time1(5,59,59);  
    const time time2(4,30,30);   
    time time3;
    time3.add_time(time1,time2); 
    cout <<"time3 = ";
	time3.display();
    cout <<endl;
}
