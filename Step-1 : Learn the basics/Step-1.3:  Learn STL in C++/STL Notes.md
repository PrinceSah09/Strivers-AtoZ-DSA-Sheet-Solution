# C++ STL Notes

## Containers

- **Vector**: A dynamic array that allows fast random access. Example: `std::vector<int> numbers = {1, 2, 3, 4};`

- **List**: A doubly linked list that allows efficient insertion and deletion. Example: `std::list<int> myList = {1, 2, 3, 4};`

- **Deque**: A double-ended queue that supports fast insertion and deletion at both ends. Example: `std::deque<int> myDeque = {1, 2, 3, 4};`

- **Set**: A sorted container that stores unique elements in a specific order. Example: `std::set<int> mySet = {3, 1, 4, 2};`

- **Map**: A sorted key-value container where keys are unique. Example: `std::map<std::string, int> myMap = {{"Alice", 25}, {"Bob", 30}};`

- **Unordered Set**: A container that stores unique elements in an unordered manner. Example: `std::unordered_set<int> myUnorderedSet = {3, 1, 4, 2};`

- **Unordered Map**: A container that stores key-value pairs in an unordered manner. Example: `std::unordered_map<std::string, int> myUnorderedMap = {{"Alice", 25}, {"Bob", 30}};`

## Iterators

- **Iterator Categories**: Different types of iterators with varying capabilities. Examples: `std::vector<int>::iterator`, `std::list<int>::const_iterator`

- **Iterator Functions**: Functions to work with iterators. Example: `std::advance(myIterator, 3);`

## Algorithms

- **Sorting**: Functions for sorting elements. Example: `std::sort(numbers.begin(), numbers.end());`

- **Searching**: Functions for searching elements. Example: `std::find(numbers.begin(), numbers.end(), 3);`

- **Modifying**: Functions for modifying elements. Example: `std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int num){ return num * 2; });`

- **Heap Operations**: Functions for working with heaps. Example: `std::make_heap(numbers.begin(), numbers.end());`

- **Numeric Algorithms**: Functions for numeric computations. Example: `std::accumulate(numbers.begin(), numbers.end(), 0);`

## Function Objects

- **Arithmetic**: Function objects for arithmetic operations. Example: `std::plus<int>()(2, 3);`

- **Comparisons**: Function objects for comparison operations. Example: `std::less<int>()(2, 3);`

- **Logical**: Function objects for logical operations. Example: `std::logical_and<bool>()(true, false);`

- **Custom Function Objects**: Creating custom function objects for specific operations. Example: `struct MyComparator { bool operator()(int a, int b) { return a > b; } };`

## Utilities

- **Pair**: A container for holding two elements together. Example: `std::pair<std::string, int> myPair = {"Alice", 25};`

- **Tuple**: A container for holding multiple elements together. Example: `std::tuple<std::string, int, double> myTuple = {"Alice", 25, 3.14};`

- **Smart Pointers**: Pointers with automatic memory management. Example: `std::unique_ptr<int> myPtr = std::make_unique<int>(5);`

- **Type Traits**: Utilities for querying and manipulating types. Example: `std::is_same<int, float>::value;`
