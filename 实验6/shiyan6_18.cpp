#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[81],line[81];//str源串line目标串
	int i=0,j=0;//i源串j目标串
	cout<<"请输入一行字符:"<<endl;
	cin.get(str,81,'\n');
	while(str[81]!='\0')
	{if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)||(str[i]>=48&&str[i]<=57)||str[i]==','||str[i]==';'||str[i]=="?"||str[i]=="!")
		{while((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)||(str[i]>=48&&str[i]<=57))//当前字符串为字母和数字时，将整个单词复制到目标串
			{line[j]=str[i];
				i++;
				j++;
			}
			if(str[i]==','||str[i]==';'||str[i]=="?"||str[i]=="!")//当前字符为物种标点符号之一时
			{	if(line[j-1]==' ')//这个if语句的功能是去掉符号前面的空格
				{line[j=1]=str[i];
					i++;
				}
			    else
				{	line[j-1]=str[i];
					i++;
					j++;
				}
				line[j++]=' ';//给标点符号后面添一个空格
			}
			else//当单词中间的分隔符为空格时
			{	line[j]=' ';
				++j;
			}
		}
		else//行首字符为空格时，必须去掉前面的空格，保证目标串的第一个字符不为空
			++i;
	}
	line[j]='\0';
	cout<<line<<endl;
	return 0;
}