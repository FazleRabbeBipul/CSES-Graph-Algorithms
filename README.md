# CSES Graph Algorithm Solutions

This repository contains C++ solutions for various graph algorithm problems from the CSES Problem Set. These problems cover a wide range of graph concepts and algorithms, helping to strengthen problem-solving skills in competitive programming.

## Table of Contents

- [Problems Solution in C++](#problems-solution-in-c)
- [Solution Approaches](#solution-approaches)

## Problems Solution in C++

Below is a list of graph algorithm problems from the CSES Problem Set that have been solved in this repository:

1. [Counting Rooms](#counting-rooms-solution) - [Solution Idea](#counting-rooms-solution)
2. [Labyrinth](#labyrinth-solution) - [Solution Idea](#labyrinth-solution)
3. [Building Roads](#building-roads-solution) - [Solution Idea](#building-roads-solution)
4. [Message Route](#message-route-solution) - [Solution Idea](#message-route-solution)
5. [Building Teams](#building-teams-solution) - [Solution Idea](#building-teams-solution)
6. [Round Trip](#round-trip-solution) - [Solution Idea](#round-trip-solution)
7. [Monsters](#monsters-solution) - [Solution Idea](#monsters-solution)
8. [Shortest Routes I](#shortest-routes-i-solution) - [Solution Idea](#shortest-routes-i-solution)
9. [Shortest Routes II](#shortest-routes-ii-solution) - [Solution Idea](#shortest-routes-ii-solution)
10. [High Score](#high-score-solution) - [Solution Idea](#high-score-solution)

---

## Solution Approaches

### Counting Rooms Solution
- **Link to Problem**: [Counting Rooms](https://cses.fi/problemset/task/1192)
- **Solution Idea**: Use Depth First Search (DFS) to explore the grid. Each DFS call marks a new room, and we count how many such calls are made to determine the total number of distinct rooms.

### Labyrinth Solution
- **Link to Problem**: [Labyrinth](https://cses.fi/problemset/task/1193)
- **Solution Idea**: Implement Breadth First Search (BFS) to explore all possible paths through the maze. BFS is ideal for finding the shortest path in an unweighted grid.

### Building Roads Solution
- **Link to Problem**: [Building Roads](https://cses.fi/problemset/task/1194)
- **Solution Idea**: Use the Union-Find (Disjoint Set Union) algorithm to efficiently determine connected components and calculate the minimum number of roads needed to connect all the cities.

### Message Route Solution
- **Link to Problem**: [Message Route](https://cses.fi/problemset/task/1195)
- **Solution Idea**: Dijkstra's algorithm is used to find the shortest path from the starting point to the destination, taking into account weighted edges.

### Building Teams Solution
- **Link to Problem**: [Building Teams](https://cses.fi/problemset/task/1196)
- **Solution Idea**: Use BFS/DFS to check if the graph is bipartite by attempting to color the graph using two colors. If successful, the graph can be divided into two teams.

### Round Trip Solution
- **Link to Problem**: [Round Trip](https://cses.fi/problemset/task/1197)
- **Solution Idea**: Detect cycles in the undirected graph using DFS or BFS. Once a cycle is found, the round trip can be constructed by backtracking.

### Monsters Solution
- **Link to Problem**: [Monsters](https://cses.fi/problemset/task/1198)
- **Solution Idea**: A two-phase BFS: First, run BFS to propagate the monsters’ spread across the grid. Then, run BFS again to find the shortest safe path from the start to the exit.

### Shortest Routes I Solution
- **Link to Problem**: [Shortest Routes I](https://cses.fi/problemset/task/1199)
- **Solution Idea**: Dijkstra's algorithm is used to find the shortest paths from the starting point to all other nodes in the graph.

### Shortest Routes II Solution
- **Link to Problem**: [Shortest Routes II](https://cses.fi/problemset/task/1200)
- **Solution Idea**: Bellman-Ford algorithm is used to handle negative edge weights and detect potential negative cycles in the graph.

### High Score Solution
- **Link to Problem**: [High Score](https://cses.fi/problemset/task/1201)
- **Solution Idea**: Use dynamic programming (DP) on a directed acyclic graph (DAG) to calculate the highest possible score while navigating the graph.

---





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
