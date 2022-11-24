#include<iostream>
#include<queue>
using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(10);
  pq.push(15);
  pq.push(5);
  cout<<pq.size()<<" ";
  cout<<pq.top()<<" ";
  while(pq.empty() == false) {
    cout<<pq.top();
    cout<<pq.pop();
  }
}

//3 5 15 10
