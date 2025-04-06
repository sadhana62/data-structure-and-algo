/* *****
 *****
 *****
 ******/
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    /*
     *
     **
     ***
     ****
     */

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    /* 1
       1 2
       1 2 3
       1 2 3 4

    */
    cout << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    /*
      1
      2 2
      3 3 3
      4 4 4 4
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    /*
     ****
     ***
     **
     *
     */
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    /*
     1 2 3 4
     1 2 3
     1 2
     1
    */
    cout << endl;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    /*
           *
          ***
         *****


    */
    cout << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int s = i - 1; s > 0; s--)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * (5 - i) + 1; k++)
        {
            cout << '*';
        }
        cout << "\n";
    }

    for (int i = 5; i > 0; i--)
    {
        for (int s = i - 1; s > 0; s--)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * (5 - i) + 1; k++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int s = i - 1; s > 0; s--)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * (5 - i) + 1; k++)
        {
            // cout<<"k"<<k;
            cout << '*';
        }
        cout << "\n";
    }

    cout << endl;

    for (int i = 5; i > 0; i--)
    {

        for (int k = 1; k <= 2 * (5 - i) + 1; k++)
        {
            cout << '*';
        }
        cout << "\n";
    }
    for (int i = 1; i <= 5; i++)
    {

        for (int k = 1; k <= 2 * (5 - i) + 1; k++)
        {
            // cout<<"k"<<k;
            cout << '*';
        }
        cout << "\n";
    }
    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 == 0)
            {

                cout << !(j % 2 == 0) << " ";
            }
            else
            {
                cout << (j % 2 == 0) << " ";
            }
        }
        cout << "\n";
    }

    cout << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << j;
        }
        for (int s = i - 1; s > 0; s--)
        {
            cout << "  ";
        }

        for (int k = 5 - i + 1; k >= 1; k--)
        {
            cout << k;
        }
        cout << "\n";
    }

    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << '*';
        }
        for (int s = i - 1; s > 0; s--)
        {
            cout << "  ";
        }

        for (int k = 5 - i + 1; k >= 1; k--)
        {
            cout << '*';
        }
        cout << "\n";
    }

    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << '*';
        }
        for (int s = i - 1; s > 0; s--)
        {
            cout << "  ";
        }

        for (int k = 5 - i + 1; k >= 1; k--)
        {
            cout << '*';
        }
        cout << "\n";
    }

    cout << endl;

    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << '*';
        }
        for (int s = i - 1; s > 0; s--)
        {
            cout << "  ";
        }

        for (int k = 5 - i + 1; k >= 1; k--)
        {
            cout << '*';
        }
        cout << "\n";
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << '*';
        }
        for (int s = i - 1; s > 0; s--)
        {
            cout << "  ";
        }

        for (int k = 5 - i + 1; k >= 1; k--)
        {
            cout << '*';
        }
        cout << "\n";
    }

    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (i == 0 || i == 4)
            {
                cout << "*" << " ";
            }
            else
            {
                if (j != 0 && j!= 4)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "*" << " ";
                }
                
            }
        }
        cout << "\n";
    }

    /*
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 2 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
    */
    int n;
    cin>>n;

    for(int i=0;i<2*(n)-1;i++){
        for (int j=0;j<2*(n)-1;j++) {
            int top = i;
            int left = j;
            int bottom = (2*(n)-2 )-i;
            int right = (2*(n)-2) -j;
            cout<< n- min(min(top,bottom) , min(left,right));
        }
        cout<<endl;
    }
}
