#include<iostream>
using namespace std;
class stack
{
  public:
      stack() {top = 0;}
      int push(int value)
      {
           if (top+1<=maxsize)  {
                top++;
                S[top]=value;
                return 1;}
        return 0;}
        int pop(int *old);
        int whathight() {return top;}
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
cout<<"n=";cin>>n;
somestack.push(n-1);
int direction=1;
int oldval1;
while (somestack.whathight()>=1) {
    cout<<endl<<somestack.whathight();
    if (direction==1)
            {
            somestack.pop(&oldval1);
            somestack.push(oldval1);
            somestack.push(oldval1-1);
                                        if (oldval1==0) direction=0;}
                                        else
                                        {
                                            if(n >= 12)
                                            {
                                               somestack.pop(&oldval1);
                                               somestack.push(oldval1);
                                               somestack.pop(&oldval1);
                                            }
                                            else{
                                            somestack.pop(&oldval1);
                                            somestack.push(oldval1+2);
                                            somestack.pop(&oldval1-1);
                                            }

                                        }

                                                     }
cout<<" Compute = "<<oldval1;
return 0;}

int stack::pop(int *old)
{if  (isempty()) { return 0;}
 *old=S[top];
 top--;
 return 1;}
