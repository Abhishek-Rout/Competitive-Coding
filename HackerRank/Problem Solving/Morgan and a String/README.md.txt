# Climbing the Leaderboard

Alice is playing an arcade game and wants to climb to the top of the leaderboard and wants to track her ranking. The game uses Dense Ranking, so its leaderboard works like this:

The player with the highest score is ranked number 1 on the leaderboard.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
For example, the four players on the leaderboard have high scores of 100, 90, 90, and 80. Those players will have ranks 1, 2, 2, and 3, respectively. If Alice's scores are 70, 80 and 105, her rankings after each game are 4th, 3rd and 1st.


Function Description

Complete the climbingLeaderboard function in the editor below. It should return an integer array where each element res[j] represents Alice's rank after the jth game.

climbingLeaderboard has the following parameter(s):

- scores: an array of integers that represent leaderboard scores
- alice: an array of integers that represent Alice's scores


Input Format

The first line contains an integer n, the number of players on the leaderboard.
The next line contains n space-separated integers scores[i], the leaderboard scores in decreasing order.
The next line contains an integer, m, denoting the number games Alice plays.
The last line contains  space-separated integers alice[j], the game scores.


Constraints

- 1 <= n <= 2 x 10^5
- 1 <= m <= 2 x 10^5
- 0 <= scores[i] <=10^9 for 0 <= i < n
- 0 <= alice[j] <= 10^9 for 0 <= j < m
The existing leaderboard, scores, is in descending order.
Alice's scores, alice, are in ascending order.


Subtask

For 60% of the maximum score:
- 1 <= n <= 200
- 1 <= m <= 200


Output Format

Print m integers. The jth integer should indicate Alice's rank after playing the jth game.


Sample Input 1

7
100 100 50 40 40 20 10
4
5 25 50 120

Sample Output 1

6
4
2
1

Sample Input 2

6
100 90 90 80 75 60
5
50 65 77 90 102

50 65 77 90 102

Sample Output 2

6
5
4
2
1