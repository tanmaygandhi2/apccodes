#include<iostream>

#include<bits/stdc++.h>

using namespace std;

char input[1000];
char result[1000];
int ind;

void push(char x)
{
	result[++ind]=x;
}

void pop(){
	result[ind]=0;
	ind--;
}

bool isempty()
{
	if(ind>=1)
	return false;
	else 
	return true;
}

char top()
{
	return result[ind];
}

bool matching(char a, char b)
{
	if(b=='(' && a==')')
	return true;
	else if(b=='{' && a=='}')
	return true;
	else if(b=='[' && a==']')
	return true;
	else 
	return false;
}
bool verify(char input[])
{
	int n=strlen(input);
	for(int i=0;i<n;++i)
	{
		if(input[i]=='('  || input[i]=='{'  || input[i]=='[')
		{
			push(input[i]);
		}
		else if(input[i]==')'  || input[i]=='}'  || input[i]==']')
		{
			if(!matching(input[i],top())){
				return false;
			}
			else 
			pop();
		}
	}
	
	if(isempty())
	return true;
	else 
	return false;
}
int main(){
	cin>>input;
	
	cout<<verify(input);
	return 0;
}
