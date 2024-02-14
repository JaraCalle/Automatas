# README

## Group Members

- Juan José Jara Calle

## System Information

- **Operating System:** Windows 11, 10, 8
- **Programming Language:** C++
- **Tools:** TDM GCC (for compiling C++ code)

## Implementation Details

### Instructions for Running the Implementation

1. **Install a C++ Compiler:**
   - You need to have a C++ compiler installed on your system. TDM GCC is recommended.

2. **Compile the Program:**
   - Open a terminal or command prompt in the directory where the source code is located.
   - Use the following command to compile the program:

     ```bash
     g++ main.cpp -o main.exe
     ```

     Ensure that you replace `main.cpp` with the actual filename if it's different.

3. **Run the Program:**
   - After successful compilation, you can run the program using the following command:

     ```bash
     main.exe
     ```

   - Alternatively, you can double-click on the `main.exe` file if you are in the same directory.

   - Other way to run the program is copy and paste the code in a online compiler like replit.com or onlinegdb.com

### Convention for Representing the Empty String

The convention used for representing the empty string is denoted by double quotation marks with nothing in between. For example:

```cpp
std::string emptyString = "e";
```

### DISCLAIMERS

**DISCLAIMER 1:** "e" is taken as the empty string (epsilon). If you input a string like "101 1," the program assumes "101" and "1" as different strings. The program will compile "101," and for C++ functionalities, it will finish the program.

**DISCLAIMER 2:** "e" is the empty string, and you can place it anywhere in the string, and the program will ignore it during compilation. For example, "11" is the same as "e11," "1e1," "e1e1e". Also, you don't need to put "e" at the end; it is implicit in the program.
