# Queues_HW

S1123540

Erik Paperniuk


Question: 1
Write a C++ program to reverse a stack using recursion, without using any loop.
Example:
Input: elements present in stack from top to bottom 28 29 30 31
Output: 31 30 29 28 
Question: 2
Given an array, print the Next Greater Element (NGE) for every element.
Example:
Input: arr[] = [ 4, 5 , 2 , 25 ]
Output:  4      –>   5
               5      –>   25
               2      –>   25
              25     –>   -1
Explanation: 
•	Except 25 every element has an element greater than them present on the right side.
•	4 is the 1st element and the next element 5 is greater than 4.
•	Now, 5 is the next element, then it compares with the nearby element 2. 2 is lower than 5. 
•	So, it jumps to 25. 25 is greater than 5.
•	Accordingly, 2 < 25. Then, 25 is the last and greater than all elements. So, we give -1.

Queue:
Question: 1
Given an array and a positive integer k, find the first negative integer for each window (contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.
Example: 
	Input: arr[] = {-8, 2, 3, -6, 10}, k = 2
Output: -8 0 -6 -6
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

Question: 2
	Given a queue of integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.
Example:
	Input:  1 2 3 4
Output: 1 3 2 4


