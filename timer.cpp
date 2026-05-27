#include <iostream>   
#include <thread>     // for sleep function (pausing the program)
#include <chrono>     // for time units like seconds

using namespace std;

int main() {

    int seconds; // variable to store user input (time in seconds)

    // Ask the user for input
    cout << "Enter time in seconds: ";
    cin >> seconds;

    // Countdown loop (runs until seconds reaches 0)
    while (seconds > 0) {

        // Display current time left
        cout << "Time left: " << seconds << " seconds" << "\n";

        // Pause the program for 1 second (so it feels like a real timer)
        this_thread::sleep_for(chrono::seconds(1));

        // Reduce the time by 1 second
        seconds--;
    }

    // When the loop ends, time is up
    cout << "Time is up!" << endl;

    return 0; 
}
