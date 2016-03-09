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
        cout<<"������!"<<endl;
        return 0;                   
    }

    else                            //����λ��������10ʱ�����ַ���
    {
        Scan scan;                      
        Print print;                    //����Print�����scan���� 

        queue<string> q = scan.ToStringQueue(input);        //����ToStringQueue()������ȡĿ�����
        print.PrintQueue(q);                                //����PrintQueue()����������и�Ԫ��

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

