#ifndef SCAN_H_
#define SCAN_H_

#include<queue>
#include<string>
using namespace std;

class Scan
{
public:
    queue<string> ToStringQueue(string input);
private:
    string Input;
    string t = "";        //����һ���洢Ԫ�ص��ַ��� 
    queue<string> StrQueue;  //����洢�ַ��Ķ���
};

#endif

