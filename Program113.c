/*
    Row = 4
    Col = 4

    &   &   &   &   
    *   &   &   &
    *   *   &   &
    *   *   *   &

*/

using namespace std;  

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        cout<<("Row number and column numbers are diffrent\n");
        return;
    }
    
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
            if(i <= j)
            {
                cout<<("&\t");
            }
            else
            {
               cout<<("*\t");
            }
        }
        cout<<("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<("Enter number of rows\n");
    cin>>("%d",&iValue1);

    cout<<("Enter number of columns\n");
    cin>>("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}