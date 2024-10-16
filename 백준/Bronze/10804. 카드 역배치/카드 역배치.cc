#include <iostream>
using namespace std;

int main(void)
{
    int cards[20];
    int start;
    int end;

    int temp;

    for(int i=0;i<20;i++)
    {
        cards[i] = i+1;
    }

    for (int i=0; i<10; i++)
    {
        cin >> start >> end;
        for(int j=start; j<end; j++, end--)
        {
            temp = cards[j-1];
            cards[j-1] = cards[end-1];
            cards[end-1] = temp;
        }        
    }

    for(int i=0;i<20;i++)
    {
        cout << cards[i] << " "; 
    }
}