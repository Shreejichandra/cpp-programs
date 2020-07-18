# cpp-programs
Readable, clean and efficient codes for some questions in C++.
I have also added my approach for some tricky questions.

## Decode String
I have used stack to solve this problem because it is based on last in first out rule. I pushed all the numbers from 1 to string.length() + 1 and as soon as I encounter an 'I' or reach to the end of the string, I emptied the stack and added the elements to my answer. 
Let's understand it with an example!<br>
Input: IDDI\
Firstly, 1 will be pushed to the stack but now since I got to an 'I', 1 will be popped out and get added to the answer and the stack is empty now.(answer = 1)
Now, 2, 3 and 4 will be pushed but now since we encountered an 'I' again, all the elements will be popped till the stack gets emptied and will be added to my answer. (answer = 1432). Then 5 will be pushed and since i == string.length() it will be popped out and added to the answer.
So our output is 14325.

## Duplicate Braces
I have used stack to solve this problem and pushed the characters of the string until and unless I found a closing parentheses. Then I used a while loop to count that how many numbers are there between my opening and closing parentheses (variable count includes closing paranthesis as well). Now if the count is greater than or equal to 3, them we don't have any problem otherwise we will return 1, that means there are reduntant braces in the given string.
NOTE: 
I used count >= 3 because if an expression has 2 or more charcaters than ')' then it would be a valid expresion.
For example (a+b) is valid but not () or (a).
