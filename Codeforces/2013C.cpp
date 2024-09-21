#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    cin >> n; // Read the length of the binary string

    string result = ""; // To store the final guessed password

    // Loop through each position of the password
    for (int i = 0; i < n; ++i)
    {
        string query_with_0 = result + "0"; // Attempt to append '0'

        // Ask if the current guess with '0' is a valid substring
        cout << "? " << query_with_0 << endl;
        fflush(stdout);

        int response_0;
        cin >> response_0; // Read the response for query_with_0

        if (response_0 == 1)
        {
            // If it is a valid substring, we append '0'
            result += "0";
        }
        else
        {
            // Otherwise, we append '1'
            result += "1";
        }
    }

    // Output the final guessed password
    cout << "! " << result << endl;
    fflush(stdout);

    // Wait for the system's confirmation
    int verdict;
    cin >> verdict;

    if (verdict == -1)
    {
        exit(0); // Terminate if the answer was wrong
    }
}

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        solve(); // Solve each test case
    }

    return 0;
}
