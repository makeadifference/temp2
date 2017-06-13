 #include<fstream>
#include<iostream>
using namespace std;
int main()
{
	double a[500],t;
	int i,j;
	ifstream infile;
	infile.open("salary.txt",ios::in);
	if(!infile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	for(i=0;i<500;i++)
		infile>>a[i];
	infile.close();
	for(i=0;i<500;i++)
	{
		a[i]=a[i]+100;
	}
	for(i=0;i<498;i++)
		for(j=i+1;j<499;j++)
		{	if(a[i]>a[j])
		{t=a[i];a[i]=a[j];a[j]=t;}}
		ofstream outfile("ordered_salary.txt",ios::out);
		if(!outfile)
		{
			cerr<<"open error!"<<endl;
			exit(1);
		}
		for(i=0;i<500;i++)
		{	outfile<<a[i]<<"  ";
			if(i%5==0&&i!=0)
			{	cout<<endl;}
			cout<<a[i]<<'\t';
		}
		outfile.close();
		return 0;
}
