// Demonstration of a copy constructor 
// Created by Robert J Baldwin 23/05/2023

/*
The code provided demonstrates the use of a copy constructor in the `String` class. Here's a breakdown of what the code does:

1. The `String` class represents a dynamically allocated string with a C-style character array (`m_Buffer`) and its size (`m_Size`).

2. The constructor `String(const char* string)` initializes the `String` object with a given character array. It calculates the 
length of the string, allocates memory for `m_Buffer`, copies the characters from the input string using `memcpy`, and adds a null character at the end to make it null-terminated.

3. The copy constructor `String(const String& other)` is used to create a new `String` object by making a deep copy of an 
existing `String` object (`other`). It allocates memory for `m_Buffer`, copies the characters from `other.m_Buffer` using `memcpy`, and 
sets the size (`m_Size`) accordingly. It also outputs a message to demonstrate when a copy is made.

4. The destructor `~String()` frees the dynamically allocated memory for `m_Buffer` using `delete[]`.

5. The `operator<<` overloads the output stream operator (`<<`) to allow printing `String` objects directly.

6. The `operator[]` overloads the subscript operator (`[]`) to provide access to individual characters of the string.

7. The `PrintString` function takes a `String` object as a constant reference and prints it using the overloaded `operator<<`.

In the `main` function:

1. Two `String` objects, `string` and `string2`, are created. `string` is initialized with the value "Robert J Baldwin".

2. `string2` is initialized by using the copy constructor, which creates a deep copy of `string`. This means a new memory 
block is allocated for `m_Buffer`, and the contents of `string.m_Buffer` are copied into it.

3. The first character of `string2` is modified to 'B' using the overloaded `operator[]`.

4. Both `string` and `string2` are printed using the `PrintString` function.

Note that the original code contains a bug: deleting the same memory block (`m_Buffer`) twice. This can lead to undefined behavior 
and a crash. To fix this issue, you should define and use a proper copy constructor or implement the Rule of Three/Five/Zero 
(or Rule of Six in C++11) to manage the copy semantics and avoid memory leaks or double deletions.
*/

#include <iostream>
#include <string>

class String
{
private:
    char* m_Buffer;
    int m_Size;

public:
    String(const char* string)
    {
        m_Size = strlen(string); // sets the size to that of the number of characters entered.  Calculates how long the string is. 

        m_Buffer = new char[m_Size + 1];        /* a C - style char array on the heap that gets its size from the amount of characters entered(from m_Size). + 1 allows for the null termination character.
                                                   The line `m_Buffer = new char[m_Size + 1];` is responsible for dynamically allocating memory on the heap for the `m_Buffer` member variable in the `String` class.

                                                    In this line, `new char[m_Size + 1]` allocates an array of characters with a size of `m_Size + 1`. 
                                                    The `m_Size` variable represents the length of the string, and adding 1 accounts for the null termination character ('\0').

                                                    The `new` operator dynamically allocates memory on the heap and returns a pointer to the allocated memory. 
                                                    In this case, it returns a pointer to the first element of the character array.

                                                    The assignment `m_Buffer = new char[m_Size + 1];` assigns the returned pointer to the `m_Buffer` 
                                                    member variable, allowing the `String` object to access the allocated memory.

                                                    This dynamic memory allocation is necessary to store the characters of the string in a way that persists 
                                                    beyond the lifetime of the `String` object, ensuring that the string data remains valid and accessible even after the object is destroyed or modified.
                                                */
        memcpy(m_Buffer, string, m_Size);        /* copies value from pointer into our actual buffer.Copies the values of num bytes from the location pointed to by source directly to the memory block pointed to by destination.
                                                    The line `memcpy(m_Buffer, string, m_Size);` is responsible for copying the characters from the input string (`string`) 
                                                    to the dynamically allocated buffer (`m_Buffer`).

                                                    The `memcpy` function is a memory function defined in the `<cstring>` header. It allows you to efficiently copy a block of memory from one location to another.

                                                    In this case, `m_Buffer` is the destination memory block where the characters will be copied. `string` is the source pointer, which points to the beginning of the input string. 
                                                    `m_Size` is the number of bytes to be copied, which represents the length of the string.

                                                    By calling `memcpy(m_Buffer, string, m_Size)`, the function copies `m_Size` bytes from the source (`string`) to the destination (`m_Buffer`), 
                                                    effectively copying the characters of the input string to the dynamically allocated buffer.

                                                    After this operation, the `m_Buffer` array will hold a copy of the characters from the input string, 
                                                    allowing the `String` object to store and manipulate the string data independently.
                                                 */
        m_Buffer[m_Size] = 0;  /*   The line m_Buffer[m_Size] = 0; is responsible 
                                    for ensuring that the character array m_Buffer is null-terminated.
                                    A null-terminated string is a sequence of characters where the last 
                                    character is a null character ('\0'). This null character marks the 
                                    end of the string. It is essential because it allows string-related 
                                    functions to determine the length of the string by iterating over the 
                                    characters until they encounter the null character. In the given code, 
                                    m_Buffer is a dynamically allocated character array that holds the string data. 
                                    The m_Size variable stores the size of the string (excluding the null termination character). 
                                    By accessing m_Buffer[m_Size] and assigning it a value of 0, the null character 
                                    is placed at the end of the string. For example, let's say we have a string "Hello" 
                                    being passed to the constructor. The m_Size would be set to 5 (the length of the string). 
                                    The line m_Buffer[m_Size] = 0; would then set m_Buffer[5] to 0, effectively 
                                    appending the null character at the end:
        */
    }

    /* Copy constructor */

    // String(const String& other) = delete;  This will not allow anyone to copy the class object. 

    String(const String& other)  // this will perform a deep copy
        :m_Size(other.m_Size)
    {
        std::cout << "Copied String! \n";       // to demonstrate when a copy is made.  If & is not used in the PrintString function, pointless copies are made.
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }



    ~String()
    {
        delete[] m_Buffer;
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);


    char& operator[] (int index)
    {
        return m_Buffer[index];
    }

};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}


void PrintString(const String& string)  // pass-by reference &.  If not, it will copy needlessly.  Take the & out to see the result.  Const stops the funciton editing the class object.  
{
    std::cout << string << '\n';
}



int main()
{

    String string = "Robert J Baldwin";
    String string2 = string;  // m_Buffer is being destroyed twice which causes a crash (memory is being deleted twice). 
    string2[0] = 'B';

   
    PrintString(string);
    PrintString(string2);
    
}


