#include <iostream>
using namespace std;

int test_case;

void time()
{
    int s, v, s_type;
    cout << "Enter the S and V" << endl;
    cin >> s >> v;
    cout << "Is S is Km type? y/n" << endl;
    cin >> s_type;
    if (s_type == ('y' | 'Y'))
    {
        s = s * 1000;
    }
    cout << "The result is t= " << s / v << endl;
}
void distance()
{
    int t, v;
    cout << "What is V and t ?" << endl;
    cin >> v >> t;

    cout << "The answer is S= " << t * v << endl;
}
void velocity()
{
    char s_type;

    int s, t;
    cout << "What is t and s ?" << endl;
    cin >> t >> s;
    cout << "Is S is Km type? y/n" << endl;
    cin >> s_type;
    if (s_type == ('y') || ('Y'))
    {
        s = s * 1000;
    }
    cout << "The answer is v= " << s / t << endl;
}
void browser()
{

    if (test_case == 2)
    {
        system("open https://github.com/mozaddedalfeshani/phy_con");
    }
    else if (test_case == 1)
    {
        system("start https://github.com/mozaddedalfeshani/phy_con");
    }
}
void cln(int test)
{
    if (test == 2)
    {
        system("clear");
    }
    else if (test == 1)
    {
        system("clean");
    }
}

int main()
{
    // variable declaration
    char agree;
    cout << "1: Windows ?\n 2: Mac \n ";
    cin >> test_case;
    cln(test_case);

    short int choich = 0;
again:

    //  what you want
    // list
    cout << "Hey ! What you want enter selection By input number:: \n ";
    cout << "1 for Determine Distance(S) \n 2 for Determine Velocity(V) \n 3 for Determine Time(t) \n 1204 ==>Github Source code \n";
    // switch
    cin >> choich;
    cln(test_case);
    switch (choich)
    {
    case 1:
        distance();
        cln(test_case);
        break;
    case 2:
        velocity();
        cln(test_case);
        break;
    case 3:
        time();
        cln(test_case);
        break;
    case 1204:
        browser();
        cln(test_case);
        break;

    default:
        break;
    }
    // last wish
agreement:
    cout << "Do again run this program?\n";
    cout << "What is choich:" << endl;
    cin >> agree;
    //  agreement
    if (agree == ('y' | 'Y'))
    {
        cln(test_case);

        int count;
        cout << "Your favorite programe again start : " << count << endl;
        goto again;
    }
    else if (agree == ('n') || ('N'))
    {
        return 0;
    }
    else
    {
        cout << "Please Input something:: y / n" << endl;
        goto agreement;
    }
}