#include <iostream>
#include <string>
using namespace std;

string get_chain()
{
    string chain;
    cout << "binary3 ";
    cin >> chain;
    return chain;
}

int delta(int state, string chain, int i)
{
    if (chain[i] == ' ') { return state; }
        switch (state) {
    case 0:
        if (chain[i] == '1') { state = 1; }
        else if (chain[i] == '0') { state = 0; }
        else if (chain[i] == 'e') { state = 0; }
        else { return -1; }
        break;
    case 1:
        if (chain[i] == '1') { state = 0; }
        else if (chain[i] == '0') { state = 2; }
        else if (chain[i] == 'e') { state = 1; }
        else { return -1; }
        break;
    case 2:
        if (chain[i] == '1') { state = 2; }
        else if (chain[i] == '0') { state = 1; }
        else if (chain[i] == 'e') { state = 2; }
        else { return -1; }
        break;     
    }
    return delta(state, chain, i+1);
}

void automata(string chain)
{
    if (chain == "e") { 
        cout << "The DFA can't process only the empty string"; 
        return;
    }

    int process = delta(0, chain + " ", 0);
    if (process == 0) 
    {
        cout << "The DFA accepts the string '" << chain << "'";
    } else if (process == -1)
    {
        cout << "The DFA don't accept that language";
    } else 
    {
        cout << "The DFA rejects the string '" << chain << "'";
    }
}

int main() 
{   
    string chain;
    chain = get_chain();
    automata(chain);

    cout << "\n\n-> Press any key and enter to exit...";
    cin >> chain;
    return 0;
}
