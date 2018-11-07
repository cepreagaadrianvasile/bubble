#include<iostream>
using namespace std;
class stack {
public :
        stack(){ top=0; }
        int push(int value){
          if (top<maxsize)  {
                              top++;
                              S[top]=value;
                              return 1;}
           return 0;}
        int pop(int *old){
            if  (isempty()) { return 0;}
            *old=S[top];top--;
            return 1;}

        int whathight() { return top;}
        int isempty() { return (top<1);}
private :
         int top;
         int S[100];
         int maxsize=100;
         };
int n;
stack somestack;
int main()
{
cout<<"n = ";cin>>n;
somestack.push(n);
int direction=1;
int oldval1,oldval2;
while (somestack.whathight()>=1)
{
if (direction==1)
{
somestack.pop(&oldval1);
somestack.push(oldval1);
somestack.push(oldval1-1);
if (oldval1==2) direction=0;
}
else{
 somestack.pop(&oldval1);
if (somestack.pop(&oldval2))
{
somestack.push(oldval1*oldval2);
}
}
}
cout<<n<<"! = "<<oldval1;
return 0;}
