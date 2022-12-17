class Solution {
public:
    int evalRPN(vector<string> &tokens)
{
    stack<long long> s1;
    for (auto a : tokens)
    {
        if (a != "-" && a != "+" && a != "/" && a != "*")
        {
            s1.push(stoi(a));
        }
        else
        {
            long long x = s1.top();
            s1.pop();
            long long y = s1.top();
            s1.pop();
            if (a == "-")
            {
                s1.push(y - x);
            }
            else if (a == "+")
            {
                s1.push(x + y);
            }
            else if (a == "/")
            {
                s1.push(y / x);
            }
            else               
            {
                s1.push(y * x);
            }
        }
    }
    return s1.top();
}
};