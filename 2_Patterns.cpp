#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <list>
#include <map>
#include <string>
#include <functional>
using namespace std;
void p1()
{
    cout << "Pattern 1 " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p2()
{
    cout << "Pattern 2" << endl;
    string star2 = "*";
    for (int i = 0; i < 4; i++)
    {
        cout << star2 << endl;
        star2 += "*";
    }
}
void p3()
{
    cout << "Pattern 3 " << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void p4()
{
    cout << "Pattern 4 " << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void p5()
{
    cout << "Pattern 5 " << endl;
    int N = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "*";
        }
        N--;
        cout << endl;
    }
}
void p6()
{
    cout << "Pattern 6 " << endl;
    int N = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << j;
        }
        N--;
        cout << endl;
    }
}

void p7()
{
    //     cout << "Pattern 7 " << endl;
    //    string star = "       *";
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << star;
    //         star += "**";
    //         star.erase(star.begin());
    //         cout << endl;
    //     }
    cout << "Pattern 7 " << endl;
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p8()
{
    cout << "Pattern 8 " << endl;
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 10 - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p9()
{
    cout << "Pattern 9 " << endl;
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 10 - (2 * i + 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p10()
{
    cout << "Pattern 10 " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p11()
{
    cout << "Pattern 11 " << endl;
    int start = 1;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start; // main shit
        }
        cout << endl;
    }
}
void p12()
{
    cout << "Pattern 12 " << endl;
    int space = 8;
    for (int i = 1; i <= 5; i++)
    {
        // p1
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        // p2
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
        space -= 2;
    }
}
void p13()
{
    cout << "Pattern 13 " << endl;
    int a = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a = a + 1;
        }

        cout << endl;
    }
}
void p14()
{
    cout << "Pattern 14 " << endl;
    char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabets[j];
        }
        cout << endl;
    }
}
void p15()
{
    cout << "Pattern 15 " << endl;
    char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << alphabets[j];
        }
        cout << endl;
    }
}
void p16()
{
    cout << "Pattern 16 " << endl;
    char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabets[i];
        }
        cout << endl;
    }
}
void p17()
{
    cout << "Pattern 17 " << endl;
    char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    for (int i = 0; i < 5; i++)
    {
        // Spaces
        for (int j = 5-i-1; j > 0; j--)
        {
            cout << " ";
        }
        // p1
        for (int k = 0; k <= i; k++)
        {
            cout << alphabets[k];
        }
        //p2
        for (int l = i-1; l >= 0; l--)
        {
            cout << alphabets[l];
        }
        
        cout << endl;   
    }
}
void p18()
{
    cout << "Pattern 18 " << endl;
    char alphabets[] = {'A','B','C','D','E'};
    // (sizeof(alphabets)/sizeof(alphabets[0]))
    // cout << alphabets[4];
    int a = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5-i; j <=4 ; j++)
        {
            cout << alphabets[j];
        }   
        cout << endl;
    }
    
    
}
void p19()
{
    cout << "Pattern 19 " << endl;
    for (int i = 0; i < 5; i++)
    {
        // Upper
        //p
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        //space
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        
        //p
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    //Lower
    for (int m = 1; m <= 5; m++)
    {
        //p'
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        //space
        for (int k = 5; k > m; k--)
        {
            cout << "  ";
        }
      //p'
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void p20()
{
    cout << "Pattern 20 " << endl;
for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int k = 4; k > i; k--)
        {
            cout << "  ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
                cout << endl;
    }


for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << "*";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "  ";
        }
        for (int j = 4; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
}


}
void p21()
{
    int N = 5;
    cout << "Pattern 21 " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "*";
    }
    cout << endl;
for (int k = 0; k < N-1; k++)
{
    cout << "*";
    for (int j = 0; j < N-2; j++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
}
for (int i = 0; i < N; i++)
{
        cout << "*";
}
cout << endl;
}
void p22()
{
    cout << "Pattern 22 " << endl;
    int N = 4;
    // sq length (2N-1)
    for (int i = 0; i < (2*N - 1); i++)
    {
        for (int j = 0; j < (2*N-1); j++)
        {
            int top = i;
            int left = j;
            int right = (2*N -2)-j;
            int bottom = (2*N-2)-i;
            cout << (N - min(min(left,right), min(top,bottom)));
        }
        cout << endl;
    }
    
}
int main()
{
    p1();
    p2();
    p3();
    p4();
    p5();
    p6();
    p7();
    p8();
    p9();
    p10();
    p11();
    p12();
    p13();
    p14();
    p15();
    p16();
    p17();
    p18();
    p19();
    p20();
    p21();
    p22();
    return 0;
}