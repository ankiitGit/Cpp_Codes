
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q1;
    int x;
  
    q1.push(19);
    q1.push(9);
    q1.push(198);
    q1.push(129);
  while (!q1.empty())
  {
      cout<<q1.front()<<" ";
      q1.pop();
  }

    return 0;
}