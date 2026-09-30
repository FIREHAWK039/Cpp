#include <iostream>
using namespace std;

// int main() {
// char a;
// cout << "enter a character";
// cin >> a;

// if (a >= 'a' && a <= 'z') {
//         cout << "Lowercase letter";}
// else if (a >= 'A' && a <= 'Z'){
//         cout << "Upper Case";}
// else if (a >= '0' && a <= '9'){
//     cout<<"Numbber value";
// }
// else {
//     cout<<"special char";
// }
// }

// int main(){

// int n;
// cin >> n;

// int i = 1;
// int sum = 0;

// while(i <= n) {
// sum = sum + i;
// i=i+1;
// }
// cout << "value of sum is " << sum << endl;}

// int main()
// {

//     int n;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//             cout << endl;

//             i = i + 1;

//     }
// }

// int main() {
//     int n;

//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

int main()
{
    int n;
    cin >> n;
    int i=1;
    int count =1;
    while (i<=n)
    {   
        int j =1;
        
        while (j<=n)
        {
            cout << count<<" ";
            count = count+1;
            j =j+1;
        }
        cout<<endl;

        i = i+1;
        
    }
    
}