# CSES Graph Algorithm Solutions

This repository contains C++ solutions for various graph algorithm problems from the CSES Problem Set. The problems are solved using advanced graph algorithms, providing a comprehensive set of solutions for competitive programming practice.

## Table of Contents

- [Problems Solution in C++](#problems-solution-in-c)
- [Solution Approaches](#solution-approaches)

## Problems Solution in C++

Below is a list of graph algorithm problems from the CSES Problem Set that have been solved in this repository:

1. **[Counting Rooms](https://cses.fi/problemset/task/1192)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Counting_Rooms.cpp) | [Solution Idea](#counting-rooms-solution)
2. **[Labyrinth](https://cses.fi/problemset/task/1193)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Labyrinth.cpp) | [Solution Idea](#labyrinth-solution)
3. **[Building Roads](https://cses.fi/problemset/task/1194)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Building_Roads.cpp) | [Solution Idea](#building-roads-solution)
4. **[Message Route](https://cses.fi/problemset/task/1195)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Message_Route.cpp) | [Solution Idea](#message-route-solution)
5. **[Building Teams](https://cses.fi/problemset/task/1196)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Building_Teams.cpp) | [Solution Idea](#building-teams-solution)
6. **[Round Trip](https://cses.fi/problemset/task/1197)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Round_Trip.cpp) | [Solution Idea](#round-trip-solution)
7. **[Monsters](https://cses.fi/problemset/task/1198)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Monsters.cpp) | [Solution Idea](#monsters-solution)
8. **[Shortest Routes I](https://cses.fi/problemset/task/1199)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Shortest_Routes_I.cpp) | [Solution Idea](#shortest-routes-i-solution)
9. **[Shortest Routes II](https://cses.fi/problemset/task/1200)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Shortest_Routes_II.cpp) | [Solution Idea](#shortest-routes-ii-solution)
10. **[High Score](https://cses.fi/problemset/task/1201)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/High_Score.cpp) | [Solution Idea](#high-score-solution)
11. **[Flight Discount](https://cses.fi/problemset/task/1202)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Flight_Discount.cpp) | [Solution Idea](#flight-discount-solution)
12. **[Cycle Finding](https://cses.fi/problemset/task/1203)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Cycle_Finding.cpp) | [Solution Idea](#cycle-finding-solution)
13. **[Flight Routes](https://cses.fi/problemset/task/1204)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Flight_Routes.cpp) | [Solution Idea](#flight-routes-solution)
14. **[Round Trip II](https://cses.fi/problemset/task/1205)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Round_Trip_II.cpp) | [Solution Idea](#round-trip-ii-solution)
15. **[Course Schedule](https://cses.fi/problemset/task/1206)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Course_Schedule.cpp) | [Solution Idea](#course-schedule-solution)
16. **[Longest Flight Route](https://cses.fi/problemset/task/1207)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Longest_Flight_Route.cpp) | [Solution Idea](#longest-flight-route-solution)
17. **[Game Routes](https://cses.fi/problemset/task/1208)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Game_Routes.cpp) | [Solution Idea](#game-routes-solution)
18. **[Investigation](https://cses.fi/problemset/task/1209)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Investigation.cpp) | [Solution Idea](#investigation-solution)
19. **[Planets Queries I](https://cses.fi/problemset/task/1210)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Planets_Queries_I.cpp) | [Solution Idea](#planets-queries-i-solution)
20. **[Planets Queries II](https://cses.fi/problemset/task/1211)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Planets_Queries_II.cpp) | [Solution Idea](#planets-queries-ii-solution)
21. **[Planets Cycles](https://cses.fi/problemset/task/1212)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Planets_Cycles.cpp) | [Solution Idea](#planets-cycles-solution)
22. **[Road Reparation](https://cses.fi/problemset/task/1213)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Road_Reparation.cpp) | [Solution Idea](#road-reparation-solution)
23. **[Road Construction](https://cses.fi/problemset/task/1214)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Road_Construction.cpp) | [Solution Idea](#road-construction-solution)
24. **[Flight Routes Check](https://cses.fi/problemset/task/1215)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Flight_Routes_Check.cpp) | [Solution Idea](#flight-routes-check-solution)
25. **[Planets and Kingdoms](https://cses.fi/problemset/task/1216)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Planets_and_Kingdoms.cpp) | [Solution Idea](#planets-and-kingdoms-solution)
26. **[Giant Pizza](https://cses.fi/problemset/task/1217)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Giant_Pizza.cpp) | [Solution Idea](#giant-pizza-solution)
27. **[Coin Collector](https://cses.fi/problemset/task/1218)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Coin_Collector.cpp) | [Solution Idea](#coin-collector-solution)
28. **[Mail Delivery](https://cses.fi/problemset/task/1219)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Mail_Delivery.cpp) | [Solution Idea](#mail-delivery-solution)
29. **[De Bruijn Sequence](https://cses.fi/problemset/task/1220)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/De_Bruijn_Sequence.cpp) | [Solution Idea](#de-bruijn-sequence-solution)
30. **[Teleporters Path](https://cses.fi/problemset/task/1221)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Teleporters_Path.cpp) | [Solution Idea](#teleporters-path-solution)
31. **[Hamiltonian Flights](https://cses.fi/problemset/task/1222)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Hamiltonian_Flights.cpp) | [Solution Idea](#hamiltonian-flights-solution)
32. **[Knight's Tour](https://cses.fi/problemset/task/1223)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Knights_Tour.cpp) | [Solution Idea](#knights-tour-solution)
33. **[Download Speed](https://cses.fi/problemset/task/1224)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Download_Speed.cpp) | [Solution Idea](#download-speed-solution)
34. **[Police Chase](https://cses.fi/problemset/task/1225)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Police_Chase.cpp) | [Solution Idea](#police-chase-solution)
35. **[School Dance](https://cses.fi/problemset/task/1226)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/School_Dance.cpp) | [Solution Idea](#school-dance-solution)
36. **[Distinct Routes](https://cses.fi/problemset/task/1227)** - [C++ Code](https://github.com/FazleRabbeBipul/CSES-Graph-Algorithms/blob/main/Distinct_Routes.cpp) | [Solution Idea](#distinct-routes-solution)

## Solution Approaches

### Counting Rooms Solution
Solution idea for **Counting Rooms** goes here...

### Labyrinth Solution
Solution idea for **Labyrinth** goes here...

### Building Roads Solution
Solution idea for **Building Roads** goes here...




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
