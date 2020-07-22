# cpp-programs
Readable, clean and efficient codes for some questions in C++.
I have also added my approach for some tricky questions.

## Decode String
I have used stack to solve this problem because it is based on last in first out rule. I pushed all the numbers from 1 to string.length() + 1 and as soon as I encounter an 'I' or reach to the end of the string, I emptied the stack and added the elements to my answer.<br> 
Let's understand it with an example!<br>
Input: IDDI<br>
Firstly, 1 will be pushed to the stack but now since I got to an 'I', 1 will be popped out and get added to the answer and the stack is empty now.(answer = 1)
Now, 2, 3 and 4 will be pushed but now since we encountered an 'I' again, all the elements will be popped till the stack gets emptied and will be added to my answer. (answer = 1432). Then 5 will be pushed and since i == string.length() it will be popped out and added to the answer.<br>
So our output is 14325.

## Duplicate Braces
I have used stack to solve this problem and pushed the characters of the string until and unless I found a closing parentheses. Then I used a while loop to count that how many numbers are there between my opening and closing parentheses (variable count includes closing paranthesis as well). Now if the count is greater than or equal to 3, them we don't have any problem otherwise we will return 1, that means there are reduntant braces in the given string.<br>
NOTE:<br> 
I used count >= 3 because if an expression has 2 or more charcaters than ')' then it would be a valid expresion.<br>
For example (a+b) is valid but not () or (a).

## Trailing Zeroes
A natural and simple approach for this question would be to calculate the factorial of the given number and simply count the trailing zeroes. Bit this method would fail for large numbers. Therefore, a better approach is to  count total number of 5s in prime factors of n!. A simple way is to calculate floor(n/5). For example, 7! has one 5, 10! has two 5s. It is not done yet, there is one more thing to consider. Numbers like 25, 125, etc have more than one 5. For example if we consider 28!, we get one extra 5 and number of 0s become 6. Handling this is simple, first divide n by 5 and remove all single 5s, then divide by 25 to remove extra 5s and so on. Following is the summarized formula for counting trailing 0s.
## Strong Numbers
This is fairly a simple problem but I learnt a lot about time complexity through this problem. At first, it seemed that the time complexity would be O(n^3) (obviously avoid the unnecessary first for loop, that is just for some experiment). But then I experimented and observed the linear time complexity. It is because on an average, numbers are very small
as compared to n and even the factorial is also calculated only for numbers ranging from 0-9. 
![run-time](https://user-images.githubusercontent.com/55141517/88166135-6e5a5180-cc34-11ea-8fc9-0339a8df57fa.png)
