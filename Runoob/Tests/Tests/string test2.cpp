#include <iostream>
#include <string>
using namespace std;

int main()
{
    //����һ��string�����
    string http = "www.runoob.com";

   //��ӡ�ַ�������
   cout<<http.length()<<endl;

    //ƴ��
    http.append("/C++");
    cout<<http<<endl; //��ӡ���Ϊ��www.runoob.com/C++

    //ɾ��
    int pos = http.find("/C++"); //����"C++"���ַ����е�λ��
    cout<<pos<<endl;
    http.replace(pos, 2, "");   //��λ��pos��ʼ��֮���4���ַ��滻Ϊ�գ���ɾ��
    cout<<http<<endl;

    //���Ӵ�runoob
    int first = http.find_first_of("."); //��ͷ��ʼѰ���ַ�'.'��λ��
    int last = http.find_last_of(".");   //��β��ʼѰ���ַ�'.'��λ��
    cout<<http.substr(first+1, last-first-1)<<endl; //��ȡ"runoob"�Ӵ�����ӡ

    return 0;
}
