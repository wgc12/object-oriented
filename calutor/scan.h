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
    string t = "";        //定义一个存储元素的字符串 
    queue<string> StrQueue;  //定义存储字符的队列
};

#endif

