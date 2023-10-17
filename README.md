# CSES-Graph-Algorithms
Tutorials for the complete problem set of CSES on graph algorithms, along with code solutions in C++.

## Counting_Rooms 
"Given a grid where '#' represents a wall (a cell we cannot visit) and '.' represents a free area of any room, we need to find the number of rooms.

### Solution: 
Initially, all cells are unvisited. We start by choosing any '.' cell and visit all reachable unvisited cells (designated by '.') from this starting cell. Once we complete this process, it is clear that we have visited all the cells of a single room. 

However, there could be more rooms in the grid. Therefore, we need to repeat this process starting from another unvisited '.' cell. We continue to visit all reachable unvisited cells using DFS/BFS, and increment the room count by 1. We repeat this process for all unvisited '.' cells until no cells remain unvisited. After completing this, we will have the total room count, which is equal to the number of times we called the BFS/DFS function."


## Labyrinth
Given a grid where '#' represents a block cell that cannot be visited, '.' represents a valid cell that can be moved, 'A' represents the starting point, and 'B' represents the destination point. The task is to find the shortest path from 'A' to 'B'.

### Labyrinth Solution:
We'll use a Breadth-First Search (BFS) traversal approach to solve this problem. BFS traverses the grid level by level, exploring all possible moves from the current level before moving to the next level. Here's how we approach the traversal:
1. Start at the cell 'A' (the starting point).
2. Consider cell 'A' as level 1.
3. From cell 'A', explore the next possible movable cells in the 'Up', 'Down', 'Left', and 'Right' directions. These will be level 2.
4. For each of the level 2 cells, explore their adjacent valid cells (excluding '#' cells) to reach level 3.
5. Repeat this process, traversing level by level until we reach the destination cell 'B'.

The path that reaches cell 'B' will be the shortest path, as we have traveled level by level, exploring the grid.

## Building Roads
[https://cses.fi/problemset/task/1666/](#building-roads)
Given a set of cities and their connections, some cities may not be directly or indirectly connected to every other city. The task is to connect each city with others using the minimum number of newly added edges.

### Building Roads Solution
The goal is to connect different groups of cities using the minimum number of edges. Here's the approach using connected components concepts in graph theory, using DFS/BFS. Suppose counting N groups. Now, to connect all the cities of two different groups, just connect two cities from each group with a new edge. So, to connect all the different groups, we need N-1 new edges, and thus, every city will be connected to all other cities.


## Message Route
Given bidirectional connections of some computers, we are asked if it is possible to reach from Uolevi's computer (1) to Maija's computer (N). If possible, then print the shortest path; otherwise, print IMPOSSIBLE.

### Message Route Solution 
DFS runs level by level and even works if there's a cycle in the computer connections. Just initiate BFS from Uolevi's computer (1) and check if it can reach Maija's computer (N). Then, retrieve the shortest path by tracing the parent computer from which we came to Maija's computer (N).

## Building_Teams
Given a group of many friends, we are asked to create two teams where no friends should be in the same team.

### Building_Teams Solution
Let's suppose we are in a friend group. If a student (stu1) is marked as team1, then all directly connected students (stu2) will be in team2. In the event that we find stu1 and stu2 marked in the same team, it's an 'IMPOSSIBLE' case. This occurs when there is a circle, and its length is odd.It can be easily solve by bipartite graph coloring, BFS concept.

## Round Trip
Given connections of cities, Your task is to design a round trip that begins in a city, goes through two or more other cities, and finally returns to the starting city. Every intermediate city on the route has to be distinct.

### Round Trip Soultion: 
We can achieve this by utilizing Depth-First Search (DFS) traversal. During DFS traversal, if we encounter a city that has already been visited and it is not the parent city from which we arrived, then we have identified a cycle in the graph.