// Graphs are made up of Vertices and Edges that connect those vertices
// Graphs can be undirected or directed
// Graphs can be weighted or unweighted
// Typically we deal with simple graphs i.e. no self loops, and no multiple edges between same pair of vertices
// Number of edges E ranges from 0 to O(V^2)
// An undirected edge e(u,v) is incident with its two vertices u and v, and two vertices u,v are adjacent if they are incident with a common edge e
// Two edges are adjacent if they are incident with a common vertex v
// The degree of a vertex v in an undirected graph is the number of edges incident with v
// A vertex of degree 0 is an isolated vertex
// A subgraph G' of a graph G is a (smaller) graph that contains subsets of vertices and edges of G
// A path of length n in an (undirected) graph G is a sequence of vertices {v0, v1, ..., vn} such that there is an edge e_i between v_i and v_i+1 for all i in [0,n-1]
// If there is no repeated vertex along the path, then it is a simple path
// An undirected graph G is connected if there exists a path between every pair of distinct vertices of G
// An undirected graph C is a connected component of the undirected graph G if:
// 1. C is a subgraph of G
// 2. C is connected
// 3. No connected subgraph of G has C as a subgraph and contains vertices or edges not in C (i.e. C is the maximal subgraph that satisfies 1. and 2.)
// For a directed edge e(u,v), v is adjacent to u, but u is not necessarily adjacent to v
// For a directed graph, the in-degree of a vertex v is the number of edges coming into v
// For a directed graph, the out-degree of a vertex v is the nuumber of edges going out of v
// For a directed graph, a strongly connected graph is a graph where there exists a path between every pair of distinct vertices
// A strongly connected component (SCC) is a subgraph of a directed graph G that is strongly connected
// A cycle is a path that begins and ends with the same vertex
// An acyclic graph is a graph with no cycles
// In an undirected graph, each undirected edge creates a trivial cycle, but it is usually not classified as a cycle
// A directed acyclic graph (DAG) is a directed graph that is acyclic
// A sparse graph is a graph where E << V^2, and a dense graph is a graph where E ~ V^2
// Examples of graphs include trees, complete graphs, bipartite graphs, DAG, and less frequently planar graphs, line graphs, star graphs, wheel graphs

// Tree is a connected graph consisting of V vertices and E=V-1 edges
// Tree has 1 unique path between any pair of vertices
// Trees are usually undirected and unweighted, and acyclic
// Trees are sparse graphs
// Tree with one of its vertices designated as root is a rooted tree
// In a rooted tree, every vertex has a parent, except the root, which has NONE/NULL
// In a rooted tree, every vertex may or may not have children i.e. the vertex may be the parent vertex of another vertex
// In a rooted tree, the ancestors of a vertex are all the vertices contained in the path between the vertex and the root (inclusive)
// In a rooted tree, the descendants of a vertex are all the vertices for which the vertex is an ancestor
// The level of a tree starts from 0 (the root), and the height of a tree is its maximum level
// We can further define additional properties for various trees
// For a binary tree, it is a rooted tree where a vertex has at most two children
// A full binary tree is a binary tree where each non-leaf vertex has exactly two children
// A complete binary tree is a binary tree where each level, except possibly the last, is completely filled, and the last level has vertexes as far left as possible

// A complete graph has V vertices and E=V(V-1)/2=O(V^2) edges i.e. there exists an edge between every pair of distinct vertices
// A complete graph with V vertices is denoted by K_V
// A complete graph is the most dense simple graph

// A bipartite graph is an undirected graph with V vertices that can be partitioned into 2 disjoint sets of vertices of size m and n, V=m+n
// There is no edge between vertices in the same set
// Bipartite graphs do not have odd-length cycles, only even-length cycles (if any)
// A bipartite graph can also be complete, i.e. all m vertices from one disjoint set are connected to all n vertices in the other disjoint set
// When m=n=V/2, the complete bipartite graph has E=O(V^2)

// A DAG is a directed graph with no cycle
// Used in DP problems, has at least one topological sort/order (via slight modification to dfs/bfs)
// A topological ordering is the ordering of the vertices into a sequence such that:
// For every edge the start vertex of the edge occurs earlier in the sequence than the end vertex
// The transitive closure of a DAG is the graph with the most number of edges that still maintains the same reachability relation
// The transitive reduction of a DAG is the graph with the fewest number of edges that still maintains the same reachability relation

// Ways to store graph information for graph DS: adjacency matrix (AM), adjacency list (AL), edge list (EL)
// AM is a square matrix where A[i][j] stores the weight of the edge from vertex i to vertex j
// For unweighted graphs, we can use 1 to represent an edge, 0 otherwise, and -1 if the vertex does not exist (e.g. deleted)
// AM has space complexity of O(V^2), even when graph is sparse
// AM can be implemented using vector<vector<int>>
// AL is an array of V lists, one for each vertex, where A[i] stores the list of neighbours of i
// For weighted graphs, store pairs of (neighbour u, weight w)
// AL has space complexity of O(V+E)
// AL can be implemented using vector<vector<pair<int,int>>
// EL is a collection of edges with both connecting vertices and their weights
// Typically sorted in increasing order of weights, and bidirectional edges are listed once for undirected and twice for directed graphs
// EL has space complexity of O(E)
// EL can be implemented using vector<tuple<int,int,int>>

// Usual stuff to do: Count V, Count E, Enumerate neighbours of vertex u, Check existence of edge (u,v)
// Counting V can be done in O(V) or O(1) for AM, AL, for EL depends as isolated vertices will not have edges and will not show up on EL, but if not, O(E)
// Counting E can be done in O(E) for EL, O(V+E) for AL by summing length of each list (and divide by 2 for undirected), O(V^2) for AM
// Enumerate neighbours of vertex is O(V) for AM, O(k) for AL if vertex u has k neighbours, O(E) for EL
// To check existence of edge is O(1) for AM, O(k) for AL if vertex u has k neighbours, O(E) for EL
