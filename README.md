# C++ Graphics

This is a small project for learning how to draw shapes and make graphics animations in C++ using the [SFML](https://www.sfml-dev.org/) framework.

The [bin](https://github.com/jmcnally17/graphics/tree/main/bin) folder contains the executable file [graphics](https://github.com/jmcnally17/graphics/blob/main/bin/graphics) which can simply be run in the your terminal using `./bin/graphics` while in the [main](https://github.com/jmcnally17/graphics) directory. If you want to compile the code yourself, then see the instructions below for macOS.

## Getting Started

A couple of frameworks need to be set up first before compiling the code. So, if you haven't already, install [Homebrew](https://brew.sh/) by entering

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

into your terminal. Then, enter `brew install sfml` to install the graphics library. The Xcode command line tools contain the g++ compile command needed to create the executable file. These can be installed by simply entering

```
xcode-select --install
```

into your terminal. All that's left is to clone this repository using

```
git clone https://github.com/jmcnally17/graphics
```

and you should be all good to go.

## How To Use

In order to run this code, it needs to be compiled into a useable file for your computer to run. This can be done with the following command in your terminal while in the [main](https://github.com/jmcnally17/graphics) directory:

```
g++ src/*.cpp -I /opt/homebrew/Cellar/sfml/2.5.1_2/inlcude -o bin/graphics -L /opt/homebrew/Cellar/sfml/2.5.1_2/lib -lsfml-graphics -lsfml-window -lsfml-system -std=c++20
```

As of writing, the current SFML version from Homebrew is 2.5.1. You can check which version you have by using `brew info sfml`. This will also show you the correct path for the `-I` and `-L` options used in the compile command.

Enter `./bin/graphics` into your terminal as mentioned earlier and a window should pop up with the necessary shapes drawn.

## Testing

Tests have been written with the [GoogleTest](http://google.github.io/googletest/) framework, which you can install via Homebrew using

```
brew install googletest
```

To run the tests, enter

```
bin/tests
```

into your terminal while in the [main](https://github.com/jmcnally17/graphics) directory.

If you want to compile the tests yourself, run

```
g++ tests/*.cpp src/functions.cpp -I /opt/homebrew/Cellar/googletest/1.13.0/include -I /opt/homebrew/Cellar/sfml/2.5.1_2/inlcude -o bin/tests -L /opt/homebrew/Cellar/googletest/1.13.0/lib -lgtest -lgtest_main -lgmock -lgmock_main -pthread -L /opt/homebrew/Cellar/sfml/2.5.1_2/lib -lsfml-graphics -lsfml-window -lsfml-system -std=c++20
```

You must have GoogleTest installed via Homebrew first.
