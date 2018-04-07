#include<iostream>
#include<cstring>
using namespace std;
int top;
char s[25];
class stack
{
	public:
	void push(char x)
	{
		s[++top]=x;
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
	char a[25],x,y;
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
		if(a[0]=='0')
		{
			x='0';
			y='1';
		}
		else if(a[0]=='1')
		{
			x='1';
			y='0';
		}		
		for(i=0;i<n;i++)
		{
			
			if(a[i]==x)
			{
				st.push(x);
				st.print();
			}
			else if(a[i]==y)
			{
				
				st.pop();
				st.print();
			}
			else
			{
				break;
			}
		}
		if(i==n && top==-1)
		cout<<"\n!!!!STRING ACCEPTED!!!!\n\n";
		else
		cout<<"\n!!!!STRING UNACCEPTED!!!!\n\n";
	}
	return 0;
}
