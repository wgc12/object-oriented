#include<iostream>
#include<string>
#include<cctype>
#include<queue>
#include "Scan.h"
using namespace std;


queue<string> Scan::ToStringQueue(string input)
{
    Input = input;

    for(int i=0;i<Input.size();i++)                           
            {
                if(isdigit(Input[i])||Input[i]=='.')
                {
                	t += Input[i];
                }
                else
                {
                  if(!t.empty())
				  {
				  	StrQueue.push(t);
                    t.clear();
				  }	
				  t=Input[i];
				   StrQueue.push(t);
				   t.clear();
                }
			}
            if(!t.empty())
				  {
				  	StrQueue.push(t);
                    t.clear();
				  }    
    return StrQueue;                                                //返回此队列
}



 
