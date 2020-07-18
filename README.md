# cpp-programs
Readable, clean and efficient codes for some questions in C++.
I have also added my approach for some tricky questions.

## Duplicate Braces
I have used stack to solve this problem and pushed the characters of the string until and unless I found a closing parentheses. Then I used a while loop to count that how many numbers are there between my opening and closing parentheses (variable count includes closing paranthesis as well). Now if the count is greater than or equal to 3, them we don't have any problem otherwise we will return 1, that means there are reduntant braces in the given string.
NOTE: 
I used count >= 3 because if an expression has 2 or more charcaters than ')' then it would be a valid expresion.
For example (a+b) is valid but not () or (a).
