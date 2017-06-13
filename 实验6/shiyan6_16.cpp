#include<iostream>
using namespace std;
int main()
{
	char str[81],ch;
	int i=0,num=0;
	bool isWord=false;
	cout<<"ÇëÊäÈëÒ»¶Î»°:"<<endl;
	gets(str);
	ch=str[i];
	while(ch!='\0')
	{
		if(ch==' ')
			isWord=false;
		else if(isWord==false)
			isWord=true,num++;
		i++;
		ch=str[i];
	}
	cout<<"there are "<<num<<" words in the line."<<endl;
	return 0;
}

