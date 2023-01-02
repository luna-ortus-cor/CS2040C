// Binary (Max) Heap (there is also a binary min heap)
// complete binary tree i.e. all levels except possibly the last are fully filled, and all vertices in the last level are as far left as possible
// max heap property i.e. parent of each vertex except root is larger than that vertex
// used to implement priority queue (PQ)
// PQ is similar to queue, but with following 2 operations
// Enqueue(x): put a new element x into the PQ (in some order)
// Dequeue(): return an existing element that has the highest priority in the PQ
// if tied, can choose to return any, or return in order that was enqueued (FIFO)
// we can implement PQ using (circular) array or linked list, but this is slow O(N) enqueue and dequeue operation
// max height of binary heap is log N for N elements
// store elements in compact array, starting with root at index 1, and subsequent levels from left to right in increasing indices
// then tree traversal can be simplified to following operations
// parent(i) = i>>1 (index i divided by 2, integer division)
// left(i) = i<<1 (index i multiplied by 2)
// right(i) = (i<<1)+1 (index i multiplied by 2 add 1)
