# C - Search Algorithms

In computer science, a search algorithm is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular data structure, or calculated in the search space of a problem domain, with either discrete or continuous values.

Although search engines use search algorithms, they belong to the study of information retrieval, not algorithmics.

The appropriate search algorithm to use often depends on the data structure being searched, and may also include prior knowledge about the data. Search algorithms can be made faster or more efficient by specially constructed database structures, such as search trees, hash maps, and database indexes.

Search algorithms can be classified based on their mechanism of searching into three types of algorithms: linear, binary, and hashing. Linear search algorithms check every record for the one associated with a target key in a linear fashion. Binary, or half-interval, searches repeatedly target the center of the search structure and divide the search space in half. Comparison search algorithms improve on linear searching by successively eliminating records based on comparisons of the keys until the target record is found, and can be applied on data structures with a defined order. Digital search algorithms work based on the properties of digits in data structures by using numerical keys. Finally, hashing directly maps keys to records based on a hash function.

Algorithms are often evaluated by their computational complexity, or maximum theoretical run time. Binary search functions, for example, have a maximum complexity of O(log n), or logarithmic time. In simple terms, the maximum number of operations needed to find the search target is a logarithmic function of the size of the search space.

## A hash function 
Is an algorithm that takes input data and produces a unique string that represents that data. It is widely used to verify data integrity and ensure security in various applications.

The main characteristic of a hash function is that it is deterministic, which means that it will always produce the same hash for the same input. Also, it must be quick to calculate and it must not be possible to recover the original data from the hash.

Common uses for hash functions include file integrity verification, password protection, and efficient data indexing. They are also used in cryptography to digitally sign documents and ensure the confidentiality and authenticity of the data.

## The complexity of an algorithm 
Is a measure of the amount of resources, such as time and space, required to run it based on the size of the input.

* Constant complexity (O(1)): The execution time of the algorithm does not depend on the input size. Examples of this are simple arithmetic operations or accessing an element in an array via its index.

* Linear complexity (O(n)): The execution time of the algorithm increases linearly with the size of the input. Examples of this are traversing an array and performing an operation on each element.

* Log Complexity (O(log n)): The execution time of the algorithm increases logarithmically with the input size. Examples of this are binary search algorithms or divide and conquer.

* Quadratic Complexity (O(n^2)): The execution time of the algorithm increases quadratically with the input size. Examples of this are the selection or bubble sort algorithms.

* Exponential Complexity (O(2^n)): The execution time of the algorithm increases exponentially with the input size. These algorithms are usually inefficient and are tried to be avoided as much as possible.

