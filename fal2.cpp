#include<iostream>
#include<cstring>
using namespace std;
int top;
char s[25];
class stack
{
	public:
	void push()
	{
		s[++top]='0';
	}
	void pop()
	{
		top--;
	}
	void print()
	{
		cout<<"The current stack is :\n";
		for(int i=0;i<=top;i++)
		{
			cout<<s[i]<<" <- ";
		}
		cout<<"NULL\n";
	}
};
int main()
{
	int i,t,n;
	char a[25];
	cout<<"\nProgram to check for n number of 0's and 1's in the input string\n";
	cout<<"Enter the number of test cases\n";
	cin>>t;
	while(t--)
	{
		cout<<"Enter the string to be checked :\n";
		cin>>a;
		n=strlen(a);
		stack st;
		top=-1;	
		i=0;
			while(a[i]=='0')
			{
				st.push();
				st.print();
				i++;
			}
			while(a[i]=='1')
			{
				
				st.pop();
				st.print();
				i++;
			}
		if(i==n && top==-1)
		cout<<"\n!!!!STRING ACCEPTED!!!!\n\n";
		else
		cout<<"\n!!!!STRING UNACCEPTED!!!!\n\n";
	}
	return 0;
}
