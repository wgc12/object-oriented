#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<cctype>
#include"Scan.h"
#include"Print.h"
using namespace std;

bool check(string s);             

int main()
{
    string input;
    cin>>input;

    if(check(input))
    {
        cout<<"出错啦!"<<endl;
        return 0;                   
    }

    else                            //数字位数不大于10时处理字符串
    {
        Scan scan;                      
        Print print;                    //创建Print对象和scan对象 

        queue<string> q = scan.ToStringQueue(input);        //调用ToStringQueue()函数获取目标队列
        print.PrintQueue(q);                                //调用PrintQueue()函数输出队列各元素

        return 0;
    }
}


bool check(string s)
{
    int n = 0;
	int i;                      
    for(i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
            n++;
        }
    }
    if(n>10)
    {
        return true;                 
    }
    else
    {
        return false;                
    }
}

