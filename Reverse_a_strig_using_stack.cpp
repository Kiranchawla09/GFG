void reverse(char *str, int len)
{
    stack<char>stk;
    for (int i=0;i<len;i++)
    {
        stk.push(str[i]);
    }
    int j=0;
    while(!stk.empty())
    {
        char temp= stk.top();
        str[j]=temp;
        stk.pop();
        j++;
    }
// Your code goes here
}