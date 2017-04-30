//Template class to handle stacks

#include<iostream>
using namespace std;

template<class st>
class stack
{
	int top,size;		//number of top of stack and size of array
	st ar[10];		//stack of size 10

	public:

	stack(int s):size(10)	//constructor
	{
		top=-1;
		size=s;
		st ar[size];
	}

	void push(st var)	//put element on stack
	{
		ar[++top]=var;
	}

	st pop()		//take element of stack
	{
		return ar[top--];
	}

	void show()		//print the stack
	{
		for(int i=0;i<top+1;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<endl;
	}

	~stack()		//destructor
	{	}
};

int main(void)
{
	int ch,size;	//choice for datatype of stack and size of stack
	char ab;	//choice for do-while loop
	cout<<" STACK "<<endl;
	do
	{
		cout<<"Enter your choice"<<endl;
		cout<<"1.Int\n2.Float\n3.Double\n4.Char"<<endl;
		cin>>ch;
		if(ch==1)
		{
				cout<<"Enter size of stack"<<endl;
				cin>>size;
				stack<int> s1(size);
				int x,v;		// x is the element to be inserted
				char choice,c;		//choices for deleting the element
				cout<<"Insert elements"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>x;
					s1.push(x);
				}
				do {
				cout<<"Do you want to (1)delete or insert(2) the element"<<endl;
				cin>>c;
				if(c=='1')
				{
					do
					{
						cout<<s1.pop()<<endl;
						cout<<"\nWant to pop number?"<<endl;
						cin>>choice;

					}while(choice!='n');
				}
				else if(c=='2')
                {
                    cout<<"Insert element"<<endl;
                    cin>>v;
                    s1.push(v);
                }
				cout<<"Stack is:"<<endl;
				s1.show();
				}while(c!='3');
		}

		else if	(ch==2)
		{
				cout<<"Enter size of stack"<<endl;
				cin>>size;
				stack<float> s2(size);
				float x,q;
				char choice,c;
				cout<<"Insert elements"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>x;
					s2.push(x);
				}
				do {
				cout<<"Do you want to (1)delete or insert(2) the element"<<endl;
				cin>>c;
				if(c=='1')
				{
					do
					{
						cout<<s2.pop()<<endl;
						cout<<"\nWant to pop number?"<<endl;
						cin>>choice;

					}while(choice!='n');
				}
				else if(c=='2')
                {
                    cout<<"Insert element"<<endl;
                    cin>>q;
                    s2.push(q);
                }
				cout<<"Stack is:"<<endl;
				s2.show();
				}while(c!='3');
		}

		else if (ch==3)
		{
				cout<<"Enter size of stack"<<endl;
				cin>>size;
				stack<double> s3(size);
				double x,z;
				char choice,c;
				cout<<"Insert elements"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>x;
					s3.push(x);
				}
				do {
				cout<<"Do you want to (1)delete or insert(2) the element"<<endl;
				cin>>c;
				if(c=='1')
				{
					do
					{
						cout<<s3.pop()<<endl;
						cout<<"\nWant to pop number?"<<endl;
						cin>>choice;

					}while(choice!='n');
				}
				else if(c=='2')
                {
                    cout<<"Insert element"<<endl;
                    cin>>z;
                    s3.push(z);
                }
				cout<<"Stack is:"<<endl;
				s3.show();
				}while(c!='3');
		}

		else if	(ch==4)
		{
				cout<<"Enter size of stack"<<endl;
				cin>>size;
				stack<char> s4(size);
				char choice,c,x,y;
				cout<<"Insert elements"<<endl;
				for(int i=0;i<size;i++)
				{
					cin>>x;
					s4.push(x);
				}
				do {
				cout<<"Do you want to (1)delete or insert(2) the element"<<endl;
				cin>>c;
				if(c=='1')
				{
					do
					{
						cout<<s4.pop()<<endl;
						cout<<"\nWant to pop number?"<<endl;
						cin>>choice;

					}while(choice!='n');
				}
				else if(c=='2')
                {
                    cout<<"Insert element"<<endl;
                    cin>>y;
                    s4.push(y);
                }
				cout<<"Stack is:"<<endl;
				s4.show();
				}while(c!='3');
		}

		cout<<"Want to run again?"<<endl;
		cin>>ab;

	}while(ab!='n');
	return 0;
}


