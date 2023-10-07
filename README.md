# CSES-Graph-Algorithms
Tutorials for the complete problem set of CSES on graph algorithms, along with code solutions in C++.

## Counting_Rooms 
"Given a grid where '#' represents a wall (a cell we cannot visit) and '.' represents a free area of any room, we need to find the number of rooms.

### Solution: 
Initially, all cells are unvisited. We start by choosing any '.' cell and visit all reachable unvisited cells (designated by '.') from this starting cell. Once we complete this process, it is clear that we have visited all the cells of a single room. 

However, there could be more rooms in the grid. Therefore, we need to repeat this process starting from another unvisited '.' cell. We continue to visit all reachable unvisited cells using DFS/BFS, and increment the room count by 1. We repeat this process for all unvisited '.' cells until no cells remain unvisited. After completing this, we will have the total room count, which is equal to the number of times we called the BFS/DFS function."
