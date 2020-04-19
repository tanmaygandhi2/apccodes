#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int backind=-1;
int frontind=0;

int qu[1000];

void push(int x)
{
	++backind;
	qu[backind]=x;
}

void pop()
{
	qu[frontind]=0;
	++frontind;
}
bool isempty()
{
	if(backind<frontind)
	return true;
	else 
	return false;
}
int top()
{
	return qu[frontind];
}

int main(){
	push(5);
	cout<<top();
	push(1);
	cout<<top();
	push(18);
	pop();
	cout<<top();
	return 0;
	
}
