#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[81],line[81];//strԴ��lineĿ�괮
	int i=0,j=0;//iԴ��jĿ�괮
	cout<<"������һ���ַ�:"<<endl;
	cin.get(str,81,'\n');
	while(str[81]!='\0')
	{if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)||(str[i]>=48&&str[i]<=57)||str[i]==','||str[i]==';'||str[i]=="?"||str[i]=="!")
		{while((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)||(str[i]>=48&&str[i]<=57))//��ǰ�ַ���Ϊ��ĸ������ʱ�����������ʸ��Ƶ�Ŀ�괮
			{line[j]=str[i];
				i++;
				j++;
			}
			if(str[i]==','||str[i]==';'||str[i]=="?"||str[i]=="!")//��ǰ�ַ�Ϊ���ֱ�����֮һʱ
			{	if(line[j-1]==' ')//���if���Ĺ�����ȥ������ǰ��Ŀո�
				{line[j=1]=str[i];
					i++;
				}
			    else
				{	line[j-1]=str[i];
					i++;
					j++;
				}
				line[j++]=' ';//�������ź�����һ���ո�
			}
			else//�������м�ķָ���Ϊ�ո�ʱ
			{	line[j]=' ';
				++j;
			}
		}
		else//�����ַ�Ϊ�ո�ʱ������ȥ��ǰ��Ŀո񣬱�֤Ŀ�괮�ĵ�һ���ַ���Ϊ��
			++i;
	}
	line[j]='\0';
	cout<<line<<endl;
	return 0;
}