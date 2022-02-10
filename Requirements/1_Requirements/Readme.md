
# Requirements
## Introduction
* This is a *two-player* game where there are a certain number of stacks of candies. 
* Each stack contains certain number of candies. 
* The stacks are arranged in non-decreasing order from left to right based on the number of candies in each stack. 
* Let the two players be named as Tom and Jerry. For every continuous subsequence of candies stacks, Tom and Jerry will play game on this subsequence of candies stacks, Tom plays first, and they play in turn. 
* In one move, the player can choose one of the stacks and remove at least one candy from it keeping in mind the non-decreasing order of the candies stacks which needs to be maintained. The last person to make a valid move wins.
* We need to find the continuous subsequences of candies stacks that will make Tom win if both of them play optimally. The number of candies of each stack will be recovered after the game ends for each subsequences.

## Research
* Combinatorial games are generally two-person games with perfect information and no chance moves (no randomization like coin toss is involved that can effect the game). 
* These games have a win-or-lose or tie outcome and determined by a set of positions, including an initial position, and the player whose turn it is to move. 
* Play moves from one position to another, with the players usually alternating moves, until a terminal position is reached. 
* A terminal position is one from which no moves are possible. Then one of the players is declared the winner and the other the loser. 
* Or there is a tie depending on the rules of the combinatorial game, the game could end up in a tie. 
* The only thing that can be stated about the combinatorial game is that the game should end at some point and should not be stuck in a loop. 

<p> The diagram shows the classification of Combinatorial Game
   
   
   
![Capture](https://user-images.githubusercontent.com/80656121/114136449-55abdc00-9928-11eb-9494-0f9cf4538649.PNG)




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


## Cost and Features

|SL.No.|FEATURE |COST in Rupees|
| :- | :- | :- |
|1|Remove stack of candies|0|
|2|Get Position|0|
|3|Get Median|0|

## Defining Our System
<p>This is a two-player game where there are a certain number of stacks of candies. Each stack contains certain number of candies. The stacks are arranged in non-decreasing order from left to right based on the number of candies in each stack.

<p>Let the two players be named as Tom and Jerry. For every continuous subsequence of candies stacks, Tom and Jerry will play game on this subsequence of candies stacks, Tom plays first, and they play in turn. In one move, the player can choose one of the stacks and remove at least one candy from it keeping in mind the non-decreasing order of the candies stacks which needs to be maintained. The last person to make a valid move wins.

<p>We need to find the continuous subsequences of candies stacks that will make Tom win if both of them play optimally. The number of candies of each stack will be recovered after the game ends for each subsequences.
   
# SWOT ANALYSIS
![swot](https://user-images.githubusercontent.com/80656121/114064517-5c4e3b00-98b7-11eb-95cd-4feb7a541d2b.PNG)

# 4W's and 1'H
## Who:
<p>This is a structured form of entertainment and will cater to all the young minds as an educational tool to nurture the brain. Thus, this game will as a tool of fun for the young generation to develop keen observation to dertermine the output of the game to win it.

## What:
<p>Most of the parents do not like that their wards would be adddicted to a game. But, This Candy Game is not addictive at all instead it nurtures the intelligence within an individual to solve it effectively. So, the game being cost-effective can be used by all persons of all ages.

## When:
<p>Humans irrespective of their age are always curious when it comes to a game which requires developing keen observation. So, such a game is welcomed at all times.

## Where:
<p>This game will meet the interests of all people of all nations.

## How:
<p>Many games are very expensive. This game being cost-effective can be purchased by all sections of the society.

# Detail requirements
## High Level Requirements:
|**ID**|**DESCRIPTION**|**CATEGORY**|**STATUS**|
| :- | :- | :- | :- |
|**HLR01**|**The player who starts first needs to be noted**|**Technical**|**Implemented**|
|**HLR02**|**The configuration of the stacks of candies need to be noted**|**Technical**|**Implemented**|
|**HLR03**|**The hardware implementation**|**Technical**|**Future**|
|**HLR04**|**Decision Making and keen observation**|**Scenario**|**Implemented**|


## Low level Requirements:

|**ID**|**DESCRIPTION**|**CATEGORY**|**HLR ID**|**STATUS**|
| :- | :- | :- | :- | :- |
|**LLR01**|**The candies piles are in non-decreasing order**  |**Technical**|**HLR 01,02**|**Implemented**|
|**LLR02**|**This is a 2-playered game** |**Technical**|**HLR 01,02**|**Implemented**|
|**LLR03**|**The game should not be stuck in a loop**|**Technical**|**HLR 01,02,04**|**Implemented**|
|**LLR04**|**Able to remove stack of candies for next move**|**Technical**|**HLR 01,02,04**|**Implemented**|


