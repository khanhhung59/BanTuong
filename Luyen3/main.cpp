#include <iostream>
#include <unordered_map>
using namespace std;
typedef struct NODE node;
int main()
{
    long long N,Dem = 0;
    cin >> N;
    string str[N];
    for(long long i = 0; i < N; i++)
    {
        cin >> str[i];
    }
    for(long long i = 0; i < N ; i++)
    {
        string ketqua = str[i];
        for(long long j = i + 1; j < N; j++)
        {
            unordered_map<char, long long >se;
            ketqua += str[j];
            cout<<ketqua<<endl;
            for(long long k = 0; k < ketqua.size(); k++)
            {
                se[ketqua[k]]++;
            }
            if(se.size() == 26)
            {
                Dem++;
                i++;
                //break;
            }
        }
    }
    cout << Dem;
    return 0;
}
