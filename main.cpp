#include <iostream>
using namespace std;

// global variable

int test_case;

void time()
{
    int s, v;
    cout << "Enter S(m) and v(ms)" << endl;
    cin >> s >> v;
    int ans = s / v;
    cout << "Anser: " << ans << endl;
}
void distance()
{
    int t, v;
    cout << "What is V(ms) and t(sec) ?" << endl;
    cin >> v >> t;
    int ans = v * t;
    cout << "Anser: " << ans << endl;
}
void velocity()
{
    char s_type;

    int s, t;
    cout << "What is T (sec) and S (m) ?" << endl;
    cin >> t >> s;

    int ans = s / t;
    cout << "Anser: " << ans << endl;
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
        system("cls");
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

        break;
    case 2:
        velocity();

        break;
    case 3:
        time();
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

    cout << "\n";
    cout << "Do again run this program?\n";
    cout << " y for Yes\n n for No\n";
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
// it's all compleate 

