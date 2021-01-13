// Code for Project 1

// Electoral College
#include <iostream>
using namespace std;   // pp. 37-38 in Savitch book explain this line

int main()
{

    int totalVoters;
    int republicanVotes, democraticVotes;

    cout << "How many Electoral College electors are there? "
        // one type of compile error in C++ is missing a semicolon at the end of the line of code
    cin >> totalVoters;
    cout << "How many of these electors voted for the Republican party candidate? ";
    cin >> republicanVotes;
    cout << "How many of these electors voted for the Democratic party candidate? ;
        // another type of compile error in C++ is missing a (end or starting) quotation mark for a cout (output).

    cin >> democraticVotes;

    double pctRepub = (100.0 * republicanVotes) / totalVoters;
    double pctDemoc = (100.0 * democraticVotes) / totalVoters;

    cout.setf(fixed);  // see pp. 30-31 in Savitch book
    // another type of compile error in C++ is missing the namespace (for example, the ios:: in line 25) in front of fixed.

    cout.precision(1);
    cout << endl;

    cout << pctRepub << "% of the " << totalVoters << " electors voted for the Republican party candidate." << endl;
    cout << pctDemoc << "% of the " << totalVoters << " electors voted for the Democratic party candidate." << endl;
    cout << endl;

    if (pctRepub > pctDemoc)
    {
        cout << "Looks like the Republican party candidate won!" << endl;
    }
    if (pctDemoc > pctRepub)
    {
        cout << "Looks like the Democratic party candidate won!" << endl;
    }

    if (republicanVotes + democraticVotes != totalVoters)
    {
        cout << "Looks like some of these data values don't make sense." << endl;
    }

    return(0);
}