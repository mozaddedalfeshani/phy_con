#include <iostream>
using namespace std;

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
    if (s_type == ('y' | 'Y'))
    {
        s = s * 1000;
    }
    cout << "The answer is v= " << s / t << endl;
}

int main()
{
    // variable declaration
    char agree;
    int test_case;
    cin >> test_case;
    short int choich = 0;
again:

    //  what you want
    // list
    cout << "Hey ! What you want enter selection By input number:: \n ";
    cout << "1 for Determine S \n 2 for Determine V \n 3 for Determine T \n 1204 ==> Source code \n";
    // switch
    cin >> choich;
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
        system("open https://github.com/mozaddedalfeshani/phy_con");
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
        system("clear");
        int count;
        cout << "Your favorite programe again start : " << count << endl;
        goto again;
    }
    else if (agree == ('n' | 'N'))
    {
        return 0;
    }
    else
    {
        cout << "Please Input something:: y / n" << endl;
        goto agreement;
    }
}