# Array
find more resource from here ➡️ https://iq.opengenus.org/array-in-cpp-stl/

array are types: 
- static sized array
- dynamic sized array

Arrays in STL provides the static implementation of arrays that is the size of array does not increase once created. Arrays in STL provides the static implementation of arrays that is the size of array does not increase once created.

 In order to use array, the array library must be included.
 ```
 #include<array>
 ```
 
 #### Syntax of array:
 ```
 array<object_type, array_size> array_name;
 ```
 #### exapmle of initialization of array using stl
 ```
 #include <array>
int main()
{
    //It will create an empty integer array of size 3 
    array<int, 3> numbers;
    //It will create an integer array of size 3 having elements 1,2 & 3
    array<int, 3> num = {1, 2, 3};
    return 0;
}
```

## different functions of array-
Following are the major functions supported by array container:

### Accessing Array
a) at() function

b) front() function

c) back() function

d) data() function

e) operator []

### Modifying Array
a) swap() function

b) beign() and end() function

c) cbeign() and cend() function

d) crbeign() and crend() function

e) rbeign() and rend() function

### Miscellaneous
a) size() function

b) max_size() function

c) fill() function

d) empty() function


 
