# cwiczeniaC

Task 3.2. Minimum Element
Write a template function that takes an array as an argument with the type being a template parameter and the size of the array of integer type. The function's task is to find the minimum element in the array and return it.

Task 3.3. Array
Create a class template Array with one parameter T, which will store the following attributes and methods:
• private attributes:
  o field for storing an array of type T*,
  o the maximum size of the array,
  o the index of the first available space in the array. We assume that elements are added to the array sequentially;
• a constructor that takes the size of the array as an argument and allocates memory;
• a parameterless constructor setting the size of the array to 10 and allocating memory;
• a destructor that frees allocated memory;
• a method allowing sorting the elements in the array in ascending order;
• a method returning the maximum element in the array;
• a method displaying the contents of the array;
• a method allowing the addition of one element to the array;
• a method returning the element located at the given index in the argument.
Specialize the Array class for the string type in such a way that:
• the sorting method sorts words based on their length;
• the method returning the maximum element returns the longest string in the array.
In the main function, test the class.
