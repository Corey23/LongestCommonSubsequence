# Longest Common Subsequence
C++ Trivial and Non-trivial implementation of Longest Common Subsequence Algorithm with two arrays.

The Longest Common Subsequence problem is fairly common when comparing files and determining the commonality between these files. This information permits the user to determine if two files are the same or are mostly the same. This issue is commonly present when redisplaying information on screen to prevent the terminal from recreating correct information that is already presented.  
The most famous issue that the Longest Common Subsequence algorithm solves is obstacle presented in molecular biological research. Since each DNA sequence can be represented as triplet sequences composed of the four letters ACGT corresponding to the four submolecules that form DNA. According to my research, biologists tend to want to compare newly discovered DNA strands to known DNA strands. The Least Common Subsequence algorithim allows these biologist to quickly analyze the homogeneity between the new strand and the strand hypothesized to be its closest relative.

* **Custom Longest Common Subsequence Class**
    * This is a custom class created in "LongestCommonSubsequence.h".
    * The default constructor takes parameters to set the two character arrays and their respective sizes.
    * There are two other functions in this class. Both of the two functions use the data members set in the constructor.

* **Trivial Implementation**
    * The length of the longest common subsequence is obtained by using recursion.
    * The recursive call is initially called with the parameters (0,0) to indicate that the characters compared at the start of the process is the first character of each array.
    * Returns one of three values:
        * 0 to demonstrate that the end of an array has been reached.
        * 1 + lcs_length(iter1+1, iter+2) in the case of two characters being a match.
        * maximum of two lcs_length calls where the first only moves the first iterator and the second only moving the second iterator when neither of the above criteria are met.
    * The more recursive calls made the more time expensive the process is..
    
* **Iterative Implementation**
    * To begin, a two dimensional array is allocated of size (size1+1) by (size2 +1) where size1 = the size of the first character array and size2 = the size of the second character array.
    * I decided to use a bottom-up approach to iterate through the two arrays. This is done to make the iteration simpler. Since the if statements require us get the LCS of the remainder of the string, we can use utilize traversing the array backwards so that each of these values is already computed.
    * I created two loops (one to represent each string) and started them both at the length of their corresponding string.
    * This implementations if statements are the same as in the trivial implementation, but the code within these branches only sets the value at the current indices:
        * sets L[size1][size2] = 0.
        * if there is a match set the current space in the array equal 1 + the value stored directly southeast of the current value.
        * sets current space equal to the maximum of the value to the immediate right and immediately south of the current space if neither of the above criteria are met.
    * Once the loops are completely iterated through the solution should lie in the L[0,0].
    * Time is only determined by the length of the arrays given and not affected by the contents of said arrays.
    
* **Testing**    
    * I have provided 9 tests in my test input file that read in the number of tests indicated on the top line of the file. 
    * Each test contains two lines with each line beginning with the length of the following string to be accessed and the string itself separated by a space.
    * The tests begin with small and fairly similar lines and grows to larger strings and more hidden subsequences.

* **Results**
    * As a result of my testing, It is apparent that the iterative implementation is much faster since the algorithm never lasts any longer than a tenth of a millisecond while there is large inconsistency in the times given for the trivial implementation.
    * Another interesting note is quickness of the trivial implementation when the desired subsequence has characters adjacent to each other in both strings as seen in tests 7, 8, and 9. With 9 being slightly slower due to the inclusion of an X that was not in the first string. Due to this observation, it is safe to say that the more common the two strings are the quicker the recursive implementation will be. This makes since from a coding perspective as well because the adjacency of the common characters ensures that number of times the final else call for the max of two recursive calls is executed is minimized. This results in only one recursive call per iteration rather than two. In turn, this explains the drastic growth in time duration of execution for the trivial solution when the two arrays share very little in common (tests 5 and 6).
    * Despite the diversity of tests, in almost every one the iterative implementation exceeds the performance of the trivial implementation due to its reliance on dynamic programming and bottom-up design.
    
* **Visualization of Array L in Iterative Implementation**   
   * int L[7][7]; // example using Test #3 where first = "farrat" and second = "carrot"
   * // run iterative
   <table style="width:100%">
     <tr>
       <th>char</th>
       <th>c: col(0)</th>
       <th>a: col(1)</th>
       <th>r: col(2)</th>
       <th>r: col(3)</th>
       <th>o: col(4)</th>
       <th>t: col(5)</th>
       <th>col(6)</th>
     </tr>
     <tr>
       <td>f: row(0)</td>
       <td>4</td>
       <td>4</td>
       <td>2</td>
       <td>2</td>
       <td>1</td>
       <td>1</td>
       <td>0</td>
     </tr>
     <tr>
       <td>a: row(1)</td>
       <td>4</td>
       <td>4</td>
       <td>3</td>
       <td>2</td>
       <td>1</td>
       <td>1</td>
       <td>0</td>       
     </tr>
     <tr>
       <td>r: row(2)</td>
       <td>3</td>
       <td>3</td>
       <td>3</td>
       <td>2</td>
       <td>1</td>
       <td>1</td>
       <td>0</td>
       </tr>
     <tr>
       <td>r: row(3)</td>
       <td>2</td>
       <td>2</td>
       <td>2</td>
       <td>2</td>
       <td>1</td>
       <td>1</td>
       <td>0</td>
       </tr>
     <tr>
       <td>a: row(4)</td>
       <td>2</td>
       <td>2</td>
       <td>1</td>
       <td>1</td>
       <td>1</td>
       <td>1</td>
       <td>0</td>
       </tr>
     <tr>
       <td>t: row(5)</td>
       <td>1</td>
       <td>1</td>
       <td>1</td>
       <td>1</td>
       <td>1</td>
       <td>1</td>
       <td>0</td>
      </tr>
     <tr>
     <td>row(6)</td>
       <td>0</td>
       <td>0</td>
       <td>0</td>
       <td>0</td>
       <td>0</td>
       <td>0</td>
       <td>0</td>
      </tr>
   </table>
   
   * Above is the two dimensional array created during the iterative implementation. Starts construction from bottom right corner and filling in each index in reverse order. (Last Row going up and Last Column going left; filling columns first)