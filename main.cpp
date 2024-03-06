#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(const string& txt, int K)
{
    int n = txt.size();
    
    if ((n % K) == 0)
    {
        for (int i = 0; i < (n / K - 1); i++)
        {
            for (int j = 0; j < K; j++)
            {
                if (txt[(i + 1) * K + j] != txt[j])
                    return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string txt = "abcabcabcabc";
    int K = 3;

    bool key = IsKPeriodic(txt, K);

    if (key)
        cout << "The multiplicity of the string is confirmed";
    else
        cout << "The multiplicity of the string has not been confirmed";

    return 0;
}