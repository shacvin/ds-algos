#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void transfer(queue <int> &q,stack <int> &s,int n)
{
    for(int i=0;i<n;i++)
    {
        s.push(q.front());
        q.pop();
    }
}

  int main(){
  queue<int>q;
  stack<int>s;
  int n;
  cout<<"Enter the size of queue"<<endl;
  cin>>n;
  int data;
  cout<<"Enter the elements of the queue"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>data;
      q.push(data);
  }
  transfer(q,s,n);
  while(!s.empty())
  {
      cout<<s.top()<<" ";
      s.pop();

  }
  cout<<"END";


  }
