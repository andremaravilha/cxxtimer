# cxxtimer: A timer for modern C++

[![Build Status](https://travis-ci.org/andremaravilha/cxxtimer.svg?branch=master)](https://travis-ci.org/andremaravilha/cxxtimer)

This is a header only C++ library that offers an easy-to-use Timer class.

You just need to include the header file `cxxtimer.hpp` and that's it. You can aready instantiate `cxxtimer::Timer` objects to time your C++ programs.

## Quick Start

The code below shows how to use **cxxtimer** library.

```cpp
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
```

The `cxxtimer::Timer` class can be resumed after stop/pause. You just need to call `timer.start()` again. Furthermore, you can reset the timer as well. For this, you can call the method `timer.reset()`. After calling `timer.reset()`, the timer will be paused, so you have to call `timer.start()` to start to time again.


## Constructors and Methods

### Constructors

```cpp
cxxtimer::Timer(bool start = false)
```

If the parameter `start` is set to `true`, the timer will be started just after its construction. If set to `false` or ignored, the timer won't be automatically started after construction.

Besides the constructor above, the copy constructor

```cpp
cxxtimer::Timer(const Timer& other)
```
and the move constructor
```cpp
Timer(Timer&& other)
```
are defined.

### start

Start/resume the timer.

```cpp
void cxxtimer::start()
```

### stop

```cpp
void cxxtimer::stop()
```

Stop/pause the timer. After calling the method `stop()`, every call to `count()` will return the same value. To start timing again, you have to call `start()`.

### reset

```cpp
void cxxtimer::reset()
```

Stop the timer and reset it. After calling the method `stop()`, every call to `count()` will return zero. To start timing again, you have to call `start()`.

### count

```cpp
template <class duration_t = std::chrono::milliseconds>
typename duration_t::rep count() const
```

It returns the time elapsed so far. By default, it return the time in milliseconds. However, you can specify the precision you want. For example, to get the time in seconds, you can call `count<std::chrono::seconds>()`. The following options are available:
- `std::chrono::nanoseconds` for nanoseconds.
- `std::chrono::microseconds` for microseconds.
- `std::chrono::milliseconds` for milliseconds (default).
- `std::chrono::seconds` for seconds.
- `std::chrono::minutes` for minutes.
- `std::chrono::hours` for hours.


## Linking

This is a header only library.


## Requirements

The only build requirement is a C++ compiler that supports C++11, since `cxxtimer.hpp` library depends on C++ library `chrono`. For example GCC >= 5.0 or clang >= 3.4.
