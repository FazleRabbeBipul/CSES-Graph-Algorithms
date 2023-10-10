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