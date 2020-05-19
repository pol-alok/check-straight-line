# Program to Check weather given 2-D coordinate points represents straight line or not

Program takes list of the 2-D coordinates and check weather it is straight line or not.

### Prerequisites

Your machine must have C++14 or later installed on it.

To check weather it is installed or not or check version refer to

- [this](https://stackoverflow.com/questions/20410587/how-to-find-gcc-version-on-mac) post for mac.

- On Windows.

```
> g++ –version
```

- On Ubuntu.

```
> gcc --version
```

## Running the tests

Explain how to run the program step by step.

### Break down into end to end tests

To build the program run command

- On Mac.

```
 > make sourcefile_name
```

- On Windows.

```
 > gcc sourcefile_name.cpp
```

- On Ubuntu.

```
 > g++ sourcefile_name.cpp
```

To run the program run command

- On Mac.

```
 > ./sourcefile_name
```

- On Windows.

```
  > gcc -o sourcefile_name.exe
```

- On Ubuntu.

```
 > ./sourcefile_name
```

### And some example with test cases

Example 1 :

```
Please enter the no of points : 2
Please Enter the X coordinate followed by Y coordinate separated by space
Enter first coordinate : 3 5
Enter second coordinate : 6 9
The equation of straight line is  : 4x + 3y + 3 = 0.
And slop of straight line is  : -4/3.
Yes, It is straight line with above equation and slop.
```

Example 2 :

```
Please enter the no of points : 5
Please Enter the X coordinate followed by Y coordinate separated by space
Enter first coordinate : 2 4
Enter second coordinate : 6 8
Enter 3rd coordinate : 9 1
Enter 4th coordinate :  6 0
Enter 5th coordinate : 5 2
No, These coordinates not represent straight line.
```

Example 3 :

```
Please enter the no of points : 6
Please Enter the X coordinate followed by Y coordinate separated by space
Enter first coordinate : 1 2
Enter second coordinate : 2 3
Enter 3rd coordinate : 3 4
Enter 4th coordinate : 4 5
Enter 5th coordinate : 5 6
Enter 6th coordinate : 6 7
The equation of straight line is  : 1x + 1y + 1 = 0.
And slop of straight line is  : -1/1.
Yes, It is straight line with above equation and slop.
```

## Author

- **Ravikant Pal** - _Other work_ - [portfolio](https://pol-alok.github.io/portfolio/)
