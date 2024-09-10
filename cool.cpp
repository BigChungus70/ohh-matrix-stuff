#include <iostream>
#include <thread>
#include <chrono>
#define BigChungus return 0;
using namespace std;

int main()
{
    char cap[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
        smol[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int SPEED, itr = 0;
    string userString = "", out = "";
    bool spin = false;
    cout << "Enter String: ";
    getline(cin, userString);
    cout << "Choose Speed in milliseconds: ";
    cin >> SPEED;
    if (SPEED < 0)
        SPEED = 0;
    while (1)
    {
        int start_time = out.length();
        if (islower(userString[itr]))
            for (size_t i = 0; i < 26; i++)
            {
                if (itr == userString.length())
                {

                    cout << out << endl;
                    BigChungus
                }
                this_thread::sleep_for(chrono::milliseconds(SPEED));
                string b = out;

                if (userString[itr] == '\r')
                {
                    out += '\r';
                    itr++;
                    continue;
                }
                if (userString[itr] == ' ')
                {
                    out += ' ';
                    itr++;
                    continue;
                }
                if (spin == true)
                {
                    out += userString[itr];
                    itr++;
                    spin = false;
                    continue;
                }
                else
                {

                    cout << out << smol[i] << endl;
                    if (cap[i] == userString[itr])
                    {
                        out += userString[itr];

                        itr++;
                    }
                    else
                        out = b;
                }
            }
        else
        {
            for (size_t i = 0; i < 26; i++)
            {
                if (itr == userString.length())
                {

                    cout << out << endl;
                    BigChungus
                }
                this_thread::sleep_for(chrono::milliseconds(SPEED));
                string b = out;

                if (userString[itr] == ' ')
                {
                    out += ' ';
                    itr++;
                    continue;
                }
                if (spin == true)
                {
                    out += userString[itr];
                    itr++;
                    spin = false;
                    continue;
                }
                else
                {

                    cout << out << cap[i] << endl;
                    if (smol[i] == userString[itr])
                    {
                        out += userString[itr];

                        itr++;
                    }
                    else
                        out = b;
                }
            }
        }
        int end_time = out.length();
        if (end_time == start_time)
            spin = true;
    }
}