#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Word
{public:
	void set(string e,string c, string wc);
	int compare(string);
	void display();
private:
	string english;
	string chinese;
	string word_class;
};
void Word::set(string e,string c,string wc)
{	english=e;
	chinese=c;
	word_class=wc;
}
void Word::display()
{
	cout<<english<<'\t'<<word_class<<'\t'<<chinese<<endl<<endl;
}
int Word::compare(string k)
{	return english.compare(k);}
int BinSeareh(int low,int high,Word*w,string k);
int main()
{	Word words[8000];
	string e,c,wc;
	string key;
	int wordsNum=0;
	ifstream infile("dictionary.txt",ios::in);
	if(!infile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	while(!infile.eof())
	{
		infile>>e>>c>>wc;
		words[wordsNum].set(e,c,wc);
		++wordsNum;
	}
	do
	{
		cout<<"请输入待查询的关键词(英文),0000结束:"<<endl;
		cin>>key;
		if(key!="0000")
		{
			int low=0,high=wordsNum-1;
			int index=BinSeareh(low,high,words,key);
			if(index==-1)	cout<<"查无此词!"<<endl<<endl;
			else			words[index].display();
		}
	}
	while(key!="0000");
	cout<<"欢迎再次使用!"<<endl<<endl;
	return 0;
}
int BinSeareh(int low,int high,Word*w,string k)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(w[mid].compare(k)==0)
		{	return mid;}
		if(w[mid].compare(k)>0)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}