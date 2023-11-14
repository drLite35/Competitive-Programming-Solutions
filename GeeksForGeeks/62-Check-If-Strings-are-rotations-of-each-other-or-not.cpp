class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.size()!=s2.size())return false;
        string s = s1;
        for(int i=0 ; i<s1.size() ; i++){
            char c = s[0];
            s.erase(0,1);
            s+=c;
            if(s==s2)return true;
        }
        return false;
    }
};