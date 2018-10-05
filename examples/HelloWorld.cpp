#include <iostream>

using namespace std;

int main()
{
    // Lines starting with // are comments. Comments are free text that you can use to better explain what the code is doing
    // This for example prints Hello, world! on the screen, followed by a new line
    // Pay attention to the ; at the end
    cout << "Hello, world!\n";

    // This is used so that the console window doesn't immediately close and you are actually able to see the result
    // Don't forget the ; at the end!
    int variableToPreventWindowFromClosing;
    cin >> variableToPreventWindowFromClosing;

    // Treat the rest of this file, like #include <iostream> / int main() or return 0 for magic words.
    // You'll get to understand what do they do and why are they there in a couple of weeks
    return 0;
}