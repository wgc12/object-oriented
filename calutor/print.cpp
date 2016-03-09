
#include<queue>
#include "Print.h"
using namespace std;

void Print::PrintQueue(queue<string> Queue)
{

    int l = Queue.size();             
    for(int i = 0;i < l;i++)             
    {
        cout << Queue.front() <<endl;
        Queue.pop();     //将元素依次弹出 
    }
}
