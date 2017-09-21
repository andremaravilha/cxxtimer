/*

MIT License

Copyright (c) 2017 André L. Maravilha

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/


#include <cxxtimer.hpp>
#include <iostream>
#include <string>

int main(int argc, char** argv) {

    // Instantiate cxxtimer::Timer object
    cxxtimer::Timer timer;
    
    // Start the timer
    timer.start();
    
    // Wait for the users
    std::string input_1;
    std::cout << "Please, type something and press ENTER to continue: ";
    std::getline(std::cin, input_1);
    
    // Stop/pause the timer
    timer.stop();
    
    // Get the elapsed time
    std::cout << "You took " << timer.count<std::chrono::seconds>() << " seconds." << std::endl;
    std::cout << "You took " << timer.count<std::chrono::milliseconds>() << " milliseconds." << std::endl;
    std::cout << "You took " << timer.count<std::chrono::nanoseconds>() << " nanoseconds." << std::endl;
    
    return 0;
}
