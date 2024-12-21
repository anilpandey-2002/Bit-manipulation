
vector<string> AllPossibleStrings(string s)
{
    vector<string> ans;
    int len = s.size();
    for (int i = 1; i < (1 << len); i++)
    {
        int temp = i;
        string temp_string = "";
        for (int i = 0; i < len; i++)
        {
            if (temp & 1 << i)
            {
                temp_string += s[i];
            }
        }
        ans.push_back(temp_string);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

/