This is a two-player game where there are a certain number of stacks of candies. Each stack contains certain number of candies. The stacks are arranged in non-decreasing order from left to right based on the number of candies in each stack. <p>Let the two players be named as Tom and Jerry. For every continuous subsequence of candies stacks, Tom and Jerry will play game on this subsequence of candies stacks, Tom plays first, and they play in turn. In one move, the player can choose one of the stacks and remove at least one candy from it keeping in mind the non-decreasing order of the candies stacks which needs to be maintained. The last person to make a valid move wins.
<p>We need to find the continuous subsequences of candies stacks that will make Tom win if both of them play optimally. The number of candies of each stack will be recovered after the game ends for each subsequences.

<p>The Candy Game is a variation of _Staircase Nim problem_. The Staircase Nim problem is a not very well-known variation of classic Nim problem. If you are unaware of what 

is, I suggest you to first learn about it.

<p>The Nim Game is outlined as follows:-

_****“A certain number of piles is given in which each pile holds some numbers of stones. In each turn, a player can select only one pile and remove any number of stones (at least one) from that pile. The player who cannot move is considered to lose the game that is, one who take the last stone is the winner. ”****_

Let's consider that there are two players- A and B, and originally there are three stacks of coins initially having 3, 4, 5 coins in each of them as shown below. Assume that first move is made by A. The below figure illustrates the whole game play.


![one](https://user-images.githubusercontent.com/80656121/114065160-fada9c00-98b7-11eb-89a1-457d011f8fe3.PNG)
<p>Given,  A made the first move; A Won the match.

<p>Was A having a strong hold in this game ? or  was the player having some edge over B by starting first ?

<p>Let us see what happens with B starting first instead of  A but with the same configuration of the piles as above.

![two](https://user-images.githubusercontent.com/80656121/114065261-16de3d80-98b8-11eb-8498-bb29a9018db7.PNG)
<p>Given,  B made the first move; B Won the match.

<p>By the above diagram, it must be vivid that the game depends on one important factor – Who is the first player?

<p>So does the player who starts the game first  win all the times?
<p>Let us play the game again, starting from A , and this time with a different initial configuration of piles. The piles have 1, 4, 5 coins initially.

<p>Let us examine will A win again as he/she has started first.

![three](https://user-images.githubusercontent.com/80656121/114065299-22c9ff80-98b8-11eb-8f30-42b7035bf674.PNG)
<p>Although A made the first move,still he/she lost the Game.

<p>So, the result is crystal clear. that is, A has lost. But how is this possible? We know that this game depends strongly on the first player. Therefore, there must be another factor which dominates the result of this simple yet interesting game. That factor is the initial configuration of the piles. This time the initial configuration was different from the last one.


<p>Thereby, we can sum up that this game depends on two factors-
* The initial configuration of the piles/heaps.
* The player who starts first.
   

<p>In fact, we can forecast the winner of the game before even playing the game !!!

<p>**Nim Total**: _The cumulative XOR value of the number of stones in each piles/heaps at any point of the game is called Nim-Total at that point_.

_“If both A and B play optimally, then the player starting first is guaranteed to win if the Nim-Total at the beginning of the game is non-zero. Otherwise, if the Nim-Total evaluates to zero, then player A will lose definitely.”_
