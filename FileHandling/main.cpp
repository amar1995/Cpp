#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream newFile;
    newFile.open("getText.txt");
    int t,i,n,m,j;
    newFile >> t;
    newFile >> n >> m;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            newFile >> arr[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout << arr[i][j];
        cout << endl;
    }
    newFile.close();
    newFile.open("sum.txt");
    int sum;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
            sum+=arr[i][j];
        newFile <<  sum  << endl;
    }
    newFile.close();
    return 0;
}
