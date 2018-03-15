class MinStack {
public:
  /** initialize your data structure here. */
  vector<int> stack;
  MinStack() {}

  void push(int x) { stack.push_back(x); }

  void pop() { stack.pop_back(); }

  int top() {
    if (stack.empty())
      return NULL;
    else
      return stack[stack.size() - 1];
  }

  int getMin() {
    if (stack.empty())
      return NULL;
    int min = ~(1 << 31);
    for (auto i : stack) {
      if (i < min)
        min = i;
    }
    return min;
  }
};
