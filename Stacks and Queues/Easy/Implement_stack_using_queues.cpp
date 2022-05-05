class MyStack
{
public:
  queue<int> q1;
  MyStack()
  {
  }

  void push(int x)
  {
    q1.push(x);
  }

  int pop()
  {
    int n = q1.size() - 1;
    queue<int> q2;
    while (n--)
    {
      q2.push(q1.front());
      q1.pop();
    }
    int ans = q1.front();
    q1 = q2;
    return ans;
  }

  int top()
  {
    int n = q1.size() - 1;
    queue<int> q2;
    while (n--)
    {
      q2.push(q1.front());
      q1.pop();
    }
    int ans = q1.front();
    q2.push(q1.front());
    q1 = q2;
    return ans;
  }

  bool empty()
  {
    return q1.empty();
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */