# DSA Pattern Recognition Guide

## 1. How to Use This File

- Every DSA problem maps to one of ~25 reusable patterns listed here.
- When you see a new problem, scan the **Problem Signals** column in the Master Index.
- Match signals to a pattern, then apply the corresponding template.
- This file is designed for 15-minute pre-interview review sessions.
- Memorize the patterns, not individual problems.
- Speed comes from instant pattern recognition, not from solving thousands of problems.

---

## 2. Master Pattern Index

| Pattern | Problem Signals | Core Idea | Famous Problems |
|---------|-----------------|-----------|-----------------|
| Sliding Window | Subarray/substring, contiguous, max/min length, k elements | Expand/shrink window to maintain constraint | Longest Substring Without Repeating, Max Sum Subarray of Size K |
| Two Pointers | Sorted array, pair sum, remove duplicates, partition | Move pointers from ends or same direction based on condition | Two Sum II, Container With Most Water, 3Sum |
| Prefix Sum | Range sum queries, subarray sum equals k | Precompute cumulative sums for O(1) range queries | Subarray Sum Equals K, Range Sum Query |
| Hashing / Frequency Map | Count occurrences, find duplicates, anagrams | Use `unordered_map` to track frequencies or indices | Two Sum, Group Anagrams, Top K Frequent |
| Fast & Slow Pointers | Cycle detection, middle of list, nth from end | Two pointers at different speeds detect cycles/positions | Linked List Cycle, Find Middle, Happy Number |
| In-place Reversal | Reverse linked list, reverse in groups | Manipulate `next` pointers without extra space | Reverse Linked List, Reverse Nodes in K-Group |
| Dummy Node | Head might change, insert/delete at head | Create dummy node pointing to head, return `dummy->next` | Remove Nth Node, Merge Two Sorted Lists |
| Monotonic Stack | Next greater/smaller, histogram problems | Maintain increasing/decreasing stack to find bounds | Next Greater Element, Largest Rectangle in Histogram |
| BFS using Queue | Shortest path unweighted, level order | Process nodes level by level using queue | Binary Tree Level Order, Rotting Oranges |
| Binary Search | Sorted array, search space, minimize/maximize | Halve search space each iteration | Search in Rotated Array, Find Peak Element |
| Binary Search on Answer | Minimize maximum, maximize minimum, capacity problems | Binary search on result space, validate with greedy | Koko Eating Bananas, Split Array Largest Sum |
| DFS (Pre/In/Post) | Tree traversal, path problems, serialize | Recursive traversal with timing of node processing | Validate BST, Flatten Binary Tree |
| BFS (Level Order) | Level-wise processing, minimum depth | Queue-based traversal tracking levels | Level Order Traversal, Minimum Depth |
| Height / Diameter | Tree height, diameter, balanced check | Postorder DFS returning height information | Diameter of Binary Tree, Balanced Binary Tree |
| Path-Based Recursion | Root to leaf paths, path sum | Carry path state through recursion | Path Sum, Binary Tree Paths |
| Graph BFS/DFS | Connected components, traversal, islands | Mark visited, explore neighbors recursively or with queue | Number of Islands, Clone Graph |
| Topological Sort | Prerequisites, ordering with dependencies | Kahn's BFS or DFS with finish times | Course Schedule, Alien Dictionary |
| Union-Find | Dynamic connectivity, grouping, cycle detection undirected | Union by rank, path compression | Number of Connected Components, Redundant Connection |
| Dijkstra | Weighted shortest path, non-negative edges | Priority queue with relaxation | Network Delay Time, Cheapest Flights |
| 1D DP | Sequence problems, Fibonacci-style recurrence | State depends on previous 1-2 states | Climbing Stairs, House Robber |
| 2D DP | Grid paths, two sequences | State depends on row above or previous column | Unique Paths, Edit Distance, LCS |
| Knapsack Pattern | Select items with weight/value, capacity constraint | Include/exclude decision at each step | 0/1 Knapsack, Partition Equal Subset Sum |
| Subsequence DP | LIS, LCS, count subsequences | Track optimal subsequence ending at each index | Longest Increasing Subsequence, Distinct Subsequences |
| DP on Trees | Optimal values on subtrees | Postorder traversal accumulating subtree results | House Robber III, Binary Tree Maximum Path Sum |
| Subsets / Permutations | Generate all combinations, arrangements | Backtrack with include/exclude or swap | Subsets, Permutations, Combination Sum |
| Interval Scheduling | Merge intervals, meeting rooms, overlaps | Sort by start/end, process greedily | Merge Intervals, Non-overlapping Intervals |
| XOR Tricks | Single number, missing number, pairs | XOR cancels duplicates, isolates unique | Single Number, Missing Number |
| Bit Masking | Subset representation, state compression | Use bits to represent set membership | Subsets via Bitmask, Traveling Salesman DP |

---

## 3. Core FAANG Patterns

---

### ARRAY / STRING

---

#### Sliding Window

- **When You See This in a Problem:**
  - "Contiguous subarray" or "substring"
  - "Maximum/minimum length" with a constraint
  - "At most K distinct elements"
  - Fixed or variable window size mentioned

- **Why This Pattern Works:**
  - Avoids O(n^2) by reusing previous window computation
  - Window expands to explore, shrinks to restore constraint

- **Standard C++ Template:**
```cpp
int left = 0, result = 0;
for (int right = 0; right < n; right++) {
    // Add arr[right] to window state
    while (/* window invalid */) {
        // Remove arr[left] from window state
        left++;
    }
    result = max(result, right - left + 1);
}
```

- **Common Interview Mistakes:**
  - Forgetting to shrink window when constraint violated
  - Off-by-one in window size calculation
  - Not handling empty input

- **High-Frequency FAANG Problems:**
  - Longest Substring Without Repeating Characters
  - Minimum Window Substring
  - Maximum Sum Subarray of Size K
  - Longest Repeating Character Replacement

---

#### Two Pointers

- **When You See This in a Problem:**
  - Sorted array with pair/triplet sum target
  - Remove duplicates in-place
  - Partition array around pivot
  - "Container", "trapping water" style problems

- **Why This Pattern Works:**
  - Sorted order guarantees direction of pointer movement
  - Eliminates nested loops by converging from both ends

- **Standard C++ Template:**
```cpp
int left = 0, right = n - 1;
while (left < right) {
    if (/* condition met */) {
        // Process result
    } else if (/* need larger sum */) {
        left++;
    } else {
        right--;
    }
}
```

- **Common Interview Mistakes:**
  - Forgetting to sort array first when required
  - Skipping duplicates incorrectly in 3Sum
  - Using `<=` instead of `<` causing infinite loop

- **High-Frequency FAANG Problems:**
  - Two Sum II (sorted input)
  - 3Sum
  - Container With Most Water
  - Trapping Rain Water

---

#### Prefix Sum

- **When You See This in a Problem:**
  - Multiple range sum queries
  - "Subarray sum equals K"
  - Cumulative frequency or count

- **Why This Pattern Works:**
  - Precomputation converts O(n) range queries to O(1)
  - `sum(i, j) = prefix[j+1] - prefix[i]`

- **Standard C++ Template:**
```cpp
vector<int> prefix(n + 1, 0);
for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + arr[i];
}
// Range sum [l, r] = prefix[r + 1] - prefix[l]
```

- **Common Interview Mistakes:**
  - Off-by-one errors in prefix array indexing
  - Forgetting prefix[0] = 0 for empty prefix
  - Not using `unordered_map` for "subarray sum equals K" variant

- **High-Frequency FAANG Problems:**
  - Range Sum Query - Immutable
  - Subarray Sum Equals K
  - Contiguous Array
  - Product of Array Except Self

---

#### Hashing / Frequency Map

- **When You See This in a Problem:**
  - "Find duplicates", "count occurrences"
  - "Anagram", "permutation in string"
  - Need O(1) lookup for previously seen elements

- **Why This Pattern Works:**
  - Hash maps provide O(1) average lookup and insert
  - Track indices, counts, or existence efficiently

- **Standard C++ Template:**
```cpp
unordered_map<int, int> freq;
for (int x : arr) {
    freq[x]++;
}
// Or for index tracking:
unordered_map<int, int> seen;
for (int i = 0; i < n; i++) {
    if (seen.count(target - arr[i])) {
        // Found pair
    }
    seen[arr[i]] = i;
}
```

- **Common Interview Mistakes:**
  - Using `map` instead of `unordered_map` (O(log n) vs O(1))
  - Not handling negative numbers or zero correctly
  - Forgetting to check if key exists before accessing

- **High-Frequency FAANG Problems:**
  - Two Sum
  - Group Anagrams
  - Top K Frequent Elements
  - Longest Consecutive Sequence

---

### LINKED LIST

---

#### Fast & Slow Pointers

- **When You See This in a Problem:**
  - "Detect cycle" in linked list
  - "Find middle" of linked list
  - "Nth node from end"
  - "Happy number" or similar cyclic sequences

- **Why This Pattern Works:**
  - Fast pointer (2x speed) meets slow pointer inside cycle
  - When fast reaches end, slow is at middle

- **Standard C++ Template:**
```cpp
ListNode* slow = head;
ListNode* fast = head;
while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
        // Cycle detected
    }
}
// slow is at middle when loop ends
```

- **Common Interview Mistakes:**
  - Null pointer access: always check `fast && fast->next`
  - Off-by-one for finding middle in even-length lists
  - Not resetting pointer when finding cycle start

- **High-Frequency FAANG Problems:**
  - Linked List Cycle / Cycle II
  - Middle of the Linked List
  - Remove Nth Node From End
  - Happy Number

---

#### In-place Reversal

- **When You See This in a Problem:**
  - "Reverse linked list" or "reverse in groups"
  - "Reorder list"
  - Modify list without extra space

- **Why This Pattern Works:**
  - Three pointers (prev, curr, next) rewire links in single pass
  - O(1) space by manipulating existing nodes

- **Standard C++ Template:**
```cpp
ListNode* prev = nullptr;
ListNode* curr = head;
while (curr) {
    ListNode* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
return prev; // New head
```

- **Common Interview Mistakes:**
  - Losing reference to next node before relinking
  - Returning `curr` instead of `prev` (curr is null at end)
  - Not handling single node or empty list

- **High-Frequency FAANG Problems:**
  - Reverse Linked List
  - Reverse Linked List II
  - Reverse Nodes in K-Group
  - Palindrome Linked List

---

#### Dummy Node Technique

- **When You See This in a Problem:**
  - Insert/delete might affect head
  - Merge multiple lists
  - Build new list from scratch

- **Why This Pattern Works:**
  - Dummy node eliminates edge cases for head modification
  - Simplifies logic by providing stable starting point

- **Standard C++ Template:**
```cpp
ListNode dummy(0);
ListNode* tail = &dummy;
// Build or modify list
tail->next = /* next node */;
tail = tail->next;
// Finally
return dummy.next;
```

- **Common Interview Mistakes:**
  - Creating dummy on heap and forgetting to delete
  - Returning `&dummy` instead of `dummy.next`
  - Not initializing `tail` pointer

- **High-Frequency FAANG Problems:**
  - Merge Two Sorted Lists
  - Remove Nth Node From End of List
  - Partition List
  - Add Two Numbers

---

### STACK / QUEUE

---

#### Monotonic Stack

- **When You See This in a Problem:**
  - "Next greater/smaller element"
  - "Histogram" or "skyline" problems
  - "Stock span" or "days until warmer"

- **Why This Pattern Works:**
  - Maintains elements in sorted order, popping violations
  - Each element pushed/popped once: O(n) total

- **Standard C++ Template:**
```cpp
stack<int> st; // Store indices
vector<int> result(n, -1);
for (int i = 0; i < n; i++) {
    while (!st.empty() && arr[st.top()] < arr[i]) {
        result[st.top()] = arr[i];
        st.pop();
    }
    st.push(i);
}
```

- **Common Interview Mistakes:**
  - Storing values instead of indices when indices needed
  - Wrong comparison direction (increasing vs decreasing stack)
  - Not processing remaining stack elements after loop

- **High-Frequency FAANG Problems:**
  - Next Greater Element I/II
  - Daily Temperatures
  - Largest Rectangle in Histogram
  - Trapping Rain Water

---

#### Stack for Next Greater / Smaller

- **When You See This in a Problem:**
  - Find next larger element on right
  - Find previous smaller element on left
  - Span calculations

- **Why This Pattern Works:**
  - Stack maintains candidates in order
  - Pop when current element "answers" stack top

- **Standard C++ Template:**
```cpp
// Next Greater Element (right to left variant)
stack<int> st;
vector<int> nge(n, -1);
for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && st.top() <= arr[i]) {
        st.pop();
    }
    if (!st.empty()) nge[i] = st.top();
    st.push(arr[i]);
}
```

- **Common Interview Mistakes:**
  - Using `<` when `<=` required (handling duplicates)
  - Processing left-to-right when right-to-left needed
  - Confusing NGE with NSE logic

- **High-Frequency FAANG Problems:**
  - Next Greater Element I
  - Stock Span Problem
  - Sum of Subarray Minimums
  - 132 Pattern

---

#### BFS using Queue

- **When You See This in a Problem:**
  - "Shortest path" in unweighted graph/grid
  - "Minimum moves/steps"
  - "Level order traversal"
  - "Spread" or "infection" simulation

- **Why This Pattern Works:**
  - Queue processes nodes level by level
  - First time reaching a node is shortest path

- **Standard C++ Template:**
```cpp
queue<pair<int, int>> q;
q.push({startX, startY});
visited[startX][startY] = true;
int level = 0;
while (!q.empty()) {
    int size = q.size();
    while (size--) {
        auto [x, y] = q.front();
        q.pop();
        // Process (x, y)
        for (auto [dx, dy] : directions) {
            int nx = x + dx, ny = y + dy;
            if (valid(nx, ny) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    level++;
}
```

- **Common Interview Mistakes:**
  - Not marking visited BEFORE pushing to queue (causes duplicates)
  - Forgetting to track levels when level count needed
  - Using DFS when BFS required for shortest path

- **High-Frequency FAANG Problems:**
  - Binary Tree Level Order Traversal
  - Rotting Oranges
  - Shortest Path in Binary Matrix
  - Word Ladder

---

### BINARY SEARCH

---

#### Standard Binary Search

- **When You See This in a Problem:**
  - Sorted array lookup
  - "Find target" or "find insertion point"
  - O(log n) time requirement

- **Why This Pattern Works:**
  - Sorted order allows eliminating half of search space
  - Logarithmic reduction in problem size

- **Standard C++ Template:**
```cpp
int left = 0, right = n - 1;
while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }
}
return -1; // Or left for insertion point
```

- **Common Interview Mistakes:**
  - Integer overflow: use `left + (right - left) / 2`
  - Wrong boundary update: `left = mid` causes infinite loop
  - Off-by-one in `left <= right` vs `left < right`

- **High-Frequency FAANG Problems:**
  - Binary Search
  - Search Insert Position
  - First Bad Version
  - Find First and Last Position

---

#### Binary Search on Answer

- **When You See This in a Problem:**
  - "Minimize the maximum"
  - "Maximize the minimum"
  - "Minimum capacity to achieve X"
  - Answer space is bounded and monotonic

- **Why This Pattern Works:**
  - If answer X works, all values > X also work (or vice versa)
  - Binary search on result space, validate with greedy check

- **Standard C++ Template:**
```cpp
int left = minPossible, right = maxPossible;
while (left < right) {
    int mid = left + (right - left) / 2;
    if (canAchieve(mid)) {
        right = mid; // Try smaller
    } else {
        left = mid + 1;
    }
}
return left;
```

- **Common Interview Mistakes:**
  - Wrong bounds for search space
  - Incorrect `canAchieve` function logic
  - Using wrong template (minimize vs maximize)

- **High-Frequency FAANG Problems:**
  - Koko Eating Bananas
  - Capacity To Ship Packages
  - Split Array Largest Sum
  - Magnetic Force Between Two Balls

---

#### Modified Binary Search

- **When You See This in a Problem:**
  - Rotated sorted array
  - Find peak element
  - Search in matrix with sorted properties

- **Why This Pattern Works:**
  - Binary search principles apply to any monotonic/partitioned structure
  - Identify which half maintains search property

- **Standard C++ Template:**
```cpp
// Rotated array example
int left = 0, right = n - 1;
while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[left] <= arr[mid]) { // Left half sorted
        if (arr[left] <= target && target < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    } else { // Right half sorted
        if (arr[mid] < target && target <= arr[right]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}
```

- **Common Interview Mistakes:**
  - Not handling duplicates in rotated array
  - Wrong boundary comparison (using `<` vs `<=`)
  - Not identifying which half is sorted

- **High-Frequency FAANG Problems:**
  - Search in Rotated Sorted Array
  - Find Minimum in Rotated Sorted Array
  - Find Peak Element
  - Search a 2D Matrix

---

### TREES

---

#### DFS (Pre/In/Post)

- **When You See This in a Problem:**
  - Tree traversal required
  - Path from root to leaf
  - Serialize/deserialize tree
  - BST validation

- **Why This Pattern Works:**
  - Recursive structure matches tree structure
  - Order of processing determines traversal type

- **Standard C++ Template:**
```cpp
void dfs(TreeNode* node) {
    if (!node) return;
    // Preorder: process here
    dfs(node->left);
    // Inorder: process here
    dfs(node->right);
    // Postorder: process here
}
```

- **Common Interview Mistakes:**
  - Not handling null node base case
  - Processing at wrong point for required traversal
  - Stack overflow on very deep trees (use iterative)

- **High-Frequency FAANG Problems:**
  - Binary Tree Inorder Traversal
  - Validate Binary Search Tree
  - Serialize and Deserialize Binary Tree
  - Construct Binary Tree from Traversals

---

#### BFS (Level Order)

- **When You See This in a Problem:**
  - "Level order" explicitly mentioned
  - "Minimum depth"
  - "Right side view" or "zigzag"
  - Connect nodes at same level

- **Why This Pattern Works:**
  - Queue naturally processes nodes level by level
  - Level boundaries tracked by queue size

- **Standard C++ Template:**
```cpp
queue<TreeNode*> q;
if (root) q.push(root);
while (!q.empty()) {
    int size = q.size();
    vector<int> level;
    while (size--) {
        TreeNode* node = q.front();
        q.pop();
        level.push_back(node->val);
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    result.push_back(level);
}
```

- **Common Interview Mistakes:**
  - Not checking if root is null before pushing
  - Forgetting to capture queue size before inner loop
  - Processing children of null nodes

- **High-Frequency FAANG Problems:**
  - Binary Tree Level Order Traversal
  - Binary Tree Zigzag Level Order
  - Binary Tree Right Side View
  - Minimum Depth of Binary Tree

---

#### Height / Diameter Pattern

- **When You See This in a Problem:**
  - "Height" or "depth" of tree
  - "Diameter" or "longest path"
  - "Balanced tree" check

- **Why This Pattern Works:**
  - Postorder traversal: compute children heights first
  - Diameter = left_height + right_height at each node

- **Standard C++ Template:**
```cpp
int diameter = 0;
int height(TreeNode* node) {
    if (!node) return 0;
    int left = height(node->left);
    int right = height(node->right);
    diameter = max(diameter, left + right);
    return 1 + max(left, right);
}
```

- **Common Interview Mistakes:**
  - Returning 0 vs -1 for null (affects height definition)
  - Not updating global variable during recursion
  - Confusing height vs depth terminology

- **High-Frequency FAANG Problems:**
  - Maximum Depth of Binary Tree
  - Diameter of Binary Tree
  - Balanced Binary Tree
  - Binary Tree Maximum Path Sum

---

#### Path-Based Recursion

- **When You See This in a Problem:**
  - "Root to leaf path"
  - "Path sum equals target"
  - "All paths" enumeration

- **Why This Pattern Works:**
  - Pass accumulated path state through recursion
  - Backtrack when returning from recursive call

- **Standard C++ Template:**
```cpp
void dfs(TreeNode* node, int target, vector<int>& path, vector<vector<int>>& result) {
    if (!node) return;
    path.push_back(node->val);
    if (!node->left && !node->right && target == node->val) {
        result.push_back(path);
    }
    dfs(node->left, target - node->val, path, result);
    dfs(node->right, target - node->val, path, result);
    path.pop_back(); // Backtrack
}
```

- **Common Interview Mistakes:**
  - Forgetting to backtrack (pop after recursive calls)
  - Not checking leaf condition correctly
  - Passing path by value instead of reference (inefficient)

- **High-Frequency FAANG Problems:**
  - Path Sum
  - Path Sum II
  - Binary Tree Paths
  - Sum Root to Leaf Numbers

---

### GRAPHS

---

#### Graph BFS/DFS

- **When You See This in a Problem:**
  - Grid with connected components
  - "Number of islands"
  - "Clone graph"
  - Flood fill

- **Why This Pattern Works:**
  - Explore all connected nodes from starting point
  - Mark visited to avoid cycles

- **Standard C++ Template:**
```cpp
// DFS for grid
void dfs(vector<vector<int>>& grid, int i, int j) {
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) return;
    grid[i][j] = 0; // Mark visited
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}
// Count components
int count = 0;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (grid[i][j] == 1) {
            dfs(grid, i, j);
            count++;
        }
    }
}
```

- **Common Interview Mistakes:**
  - Not marking visited before/during exploration
  - Using wrong bounds check order
  - Revisiting nodes in cycles

- **High-Frequency FAANG Problems:**
  - Number of Islands
  - Clone Graph
  - Flood Fill
  - Surrounded Regions

---

#### Topological Sort

- **When You See This in a Problem:**
  - "Prerequisites", "dependencies"
  - "Order of tasks"
  - "Course schedule"
  - Directed acyclic graph (DAG) ordering

- **Why This Pattern Works:**
  - Process nodes with no incoming edges first
  - Kahn's algorithm uses in-degree tracking

- **Standard C++ Template:**
```cpp
// Kahn's Algorithm (BFS)
vector<int> indegree(n, 0);
for (auto& [u, v] : edges) indegree[v]++;
queue<int> q;
for (int i = 0; i < n; i++) {
    if (indegree[i] == 0) q.push(i);
}
vector<int> order;
while (!q.empty()) {
    int u = q.front();
    q.pop();
    order.push_back(u);
    for (int v : adj[u]) {
        if (--indegree[v] == 0) q.push(v);
    }
}
// order.size() == n means valid ordering exists
```

- **Common Interview Mistakes:**
  - Not detecting cycle (order.size() != n)
  - Building adjacency list incorrectly
  - Confusing in-degree with out-degree

- **High-Frequency FAANG Problems:**
  - Course Schedule I/II
  - Alien Dictionary
  - Minimum Height Trees
  - Parallel Courses

---

#### Union-Find

- **When You See This in a Problem:**
  - "Connected components" with dynamic connections
  - "Are X and Y connected?"
  - Cycle detection in undirected graph
  - Grouping elements

- **Why This Pattern Works:**
  - Path compression + union by rank gives near O(1) operations
  - Efficiently tracks dynamic connectivity

- **Standard C++ Template:**
```cpp
class UnionFind {
    vector<int> parent, rank;
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false; // Already connected
        if (rank[px] < rank[py]) swap(px, py);
        parent[py] = px;
        if (rank[px] == rank[py]) rank[px]++;
        return true;
    }
};
```

- **Common Interview Mistakes:**
  - Forgetting path compression in find()
  - Not initializing parent[i] = i
  - Using union without checking if already connected

- **High-Frequency FAANG Problems:**
  - Number of Connected Components
  - Redundant Connection
  - Accounts Merge
  - Longest Consecutive Sequence

---

#### Shortest Path (Dijkstra)

- **When You See This in a Problem:**
  - "Shortest path" with non-negative weights
  - "Minimum cost" to reach destination
  - Weighted graph traversal

- **Why This Pattern Works:**
  - Greedy selection of minimum distance node
  - Priority queue ensures optimal order of processing

- **Standard C++ Template:**
```cpp
vector<int> dist(n, INT_MAX);
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
dist[src] = 0;
pq.push({0, src});
while (!pq.empty()) {
    auto [d, u] = pq.top();
    pq.pop();
    if (d > dist[u]) continue; // Skip outdated
    for (auto [v, w] : adj[u]) {
        if (dist[u] + w < dist[v]) {
            dist[v] = dist[u] + w;
            pq.push({dist[v], v});
        }
    }
}
```

- **Common Interview Mistakes:**
  - Not skipping outdated entries in priority queue
  - Using Dijkstra with negative weights
  - Wrong priority queue ordering (max-heap vs min-heap)

- **High-Frequency FAANG Problems:**
  - Network Delay Time
  - Cheapest Flights Within K Stops
  - Path with Maximum Probability
  - Minimum Cost to Make at Least One Valid Path

---

### DYNAMIC PROGRAMMING

---

#### 1D DP

- **When You See This in a Problem:**
  - "Number of ways" to reach target
  - "Minimum/maximum cost" for sequence
  - Fibonacci-style recurrence
  - Linear sequence decision

- **Why This Pattern Works:**
  - State depends on previous 1-2 states
  - Build solution iteratively from base cases

- **Standard C++ Template:**
```cpp
vector<int> dp(n + 1);
dp[0] = baseCase;
for (int i = 1; i <= n; i++) {
    dp[i] = /* recurrence using dp[i-1], dp[i-2], etc. */;
}
return dp[n];
```

- **Common Interview Mistakes:**
  - Wrong base case initialization
  - Off-by-one in loop bounds
  - Not recognizing space optimization opportunity

- **High-Frequency FAANG Problems:**
  - Climbing Stairs
  - House Robber
  - Decode Ways
  - Coin Change

---

#### 2D DP

- **When You See This in a Problem:**
  - Grid paths (obstacles, minimum cost)
  - Two sequences (LCS, edit distance)
  - State depends on two dimensions

- **Why This Pattern Works:**
  - State (i, j) depends on (i-1, j), (i, j-1), (i-1, j-1)
  - Build table row by row or use memoization

- **Standard C++ Template:**
```cpp
vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
        dp[i][j] = /* recurrence */;
    }
}
return dp[m][n];
```

- **Common Interview Mistakes:**
  - Wrong indexing between 0-indexed input and 1-indexed DP
  - Not initializing first row/column correctly
  - Confusing which dimension represents which input

- **High-Frequency FAANG Problems:**
  - Unique Paths
  - Longest Common Subsequence
  - Edit Distance
  - Minimum Path Sum

---

#### Knapsack Pattern

- **When You See This in a Problem:**
  - "Subset with sum/capacity constraint"
  - "Maximum value within weight limit"
  - "Partition into equal subsets"
  - Include/exclude decision for each item

- **Why This Pattern Works:**
  - Binary choice at each item: take or skip
  - State: (item_index, remaining_capacity)

- **Standard C++ Template:**
```cpp
// 0/1 Knapsack
vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
for (int i = 1; i <= n; i++) {
    for (int w = 0; w <= W; w++) {
        dp[i][w] = dp[i-1][w]; // Skip item
        if (w >= weight[i-1]) {
            dp[i][w] = max(dp[i][w], dp[i-1][w - weight[i-1]] + value[i-1]);
        }
    }
}
return dp[n][W];
```

- **Common Interview Mistakes:**
  - Using dp[i] instead of dp[i-1] (unbounded vs 0/1)
  - Wrong iteration order for space-optimized version
  - Not handling zero capacity edge case

- **High-Frequency FAANG Problems:**
  - 0/1 Knapsack
  - Partition Equal Subset Sum
  - Target Sum
  - Coin Change 2

---

#### Subsequence DP

- **When You See This in a Problem:**
  - "Longest increasing subsequence"
  - "Count subsequences" matching condition
  - "Distinct subsequences"
  - Order matters but elements need not be contiguous

- **Why This Pattern Works:**
  - dp[i] = best answer ending at index i
  - Transition considers all j < i where condition holds

- **Standard C++ Template:**
```cpp
// LIS
vector<int> dp(n, 1);
for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
        if (arr[j] < arr[i]) {
            dp[i] = max(dp[i], dp[j] + 1);
        }
    }
}
return *max_element(dp.begin(), dp.end());
```

- **Common Interview Mistakes:**
  - Returning dp[n-1] instead of max of all dp values
  - Wrong comparison for strictly increasing vs non-decreasing
  - Not knowing O(n log n) binary search optimization for LIS

- **High-Frequency FAANG Problems:**
  - Longest Increasing Subsequence
  - Russian Doll Envelopes
  - Distinct Subsequences
  - Number of Longest Increasing Subsequence

---

#### DP on Trees

- **When You See This in a Problem:**
  - "Maximum path sum" in tree
  - "House robber on tree"
  - Optimal value depends on subtrees
  - Tree structure with state at each node

- **Why This Pattern Works:**
  - Postorder traversal: solve children first
  - Node state combines children solutions

- **Standard C++ Template:**
```cpp
pair<int, int> dfs(TreeNode* node) {
    if (!node) return {0, 0};
    auto [robL, skipL] = dfs(node->left);
    auto [robR, skipR] = dfs(node->right);
    int rob = node->val + skipL + skipR;
    int skip = max(robL, skipL) + max(robR, skipR);
    return {rob, skip};
}
```

- **Common Interview Mistakes:**
  - Not returning multiple states when needed
  - Wrong combination of child states
  - Forgetting to handle null children

- **High-Frequency FAANG Problems:**
  - House Robber III
  - Binary Tree Maximum Path Sum
  - Diameter of Binary Tree
  - Longest Path With Different Adjacent Characters

---

### BACKTRACKING

---

#### Subsets / Permutations

- **When You See This in a Problem:**
  - "Generate all subsets/permutations"
  - "All combinations of size k"
  - Exponential output expected
  - Need exhaustive enumeration

- **Why This Pattern Works:**
  - Explore all branches with recursive tree
  - Backtrack by undoing choice after recursion

- **Standard C++ Template:**
```cpp
// Subsets
void backtrack(int start, vector<int>& curr) {
    result.push_back(curr);
    for (int i = start; i < n; i++) {
        curr.push_back(arr[i]);
        backtrack(i + 1, curr);
        curr.pop_back();
    }
}

// Permutations
void permute(int idx) {
    if (idx == n) {
        result.push_back(arr);
        return;
    }
    for (int i = idx; i < n; i++) {
        swap(arr[idx], arr[i]);
        permute(idx + 1);
        swap(arr[idx], arr[i]);
    }
}
```

- **Common Interview Mistakes:**
  - Not handling duplicates (sort + skip if arr[i] == arr[i-1])
  - Wrong starting index for subsets vs permutations
  - Forgetting to backtrack (pop or swap back)

- **High-Frequency FAANG Problems:**
  - Subsets I/II
  - Permutations I/II
  - Combinations
  - Letter Combinations of a Phone Number

---

#### Combination / Constraint-based Search

- **When You See This in a Problem:**
  - "Find all valid configurations"
  - "Place N queens"
  - "Generate valid parentheses"
  - Constraint satisfaction with pruning

- **Why This Pattern Works:**
  - Prune invalid branches early
  - Only explore paths that can lead to valid solutions

- **Standard C++ Template:**
```cpp
void backtrack(int idx, /* state */) {
    if (/* goal reached */) {
        result.push_back(/* solution */);
        return;
    }
    for (/* each choice */) {
        if (/* choice is valid */) {
            // Make choice
            backtrack(idx + 1, /* updated state */);
            // Undo choice
        }
    }
}
```

- **Common Interview Mistakes:**
  - Not pruning early enough (TLE)
  - Incorrect validity check
  - Modifying global state without proper backtracking

- **High-Frequency FAANG Problems:**
  - N-Queens
  - Sudoku Solver
  - Combination Sum
  - Generate Parentheses

---

### GREEDY

---

#### Interval Scheduling

- **When You See This in a Problem:**
  - "Merge intervals"
  - "Non-overlapping intervals"
  - "Meeting rooms"
  - Sort by start or end time

- **Why This Pattern Works:**
  - Sorting enables greedy processing
  - Local optimal choice leads to global optimum

- **Standard C++ Template:**
```cpp
// Merge intervals
sort(intervals.begin(), intervals.end());
vector<vector<int>> merged;
for (auto& interval : intervals) {
    if (merged.empty() || merged.back()[1] < interval[0]) {
        merged.push_back(interval);
    } else {
        merged.back()[1] = max(merged.back()[1], interval[1]);
    }
}

// Max non-overlapping (sort by end time)
sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
    return a[1] < b[1];
});
```

- **Common Interview Mistakes:**
  - Sorting by wrong endpoint (start vs end)
  - Not handling empty input
  - Wrong overlap condition (`<` vs `<=`)

- **High-Frequency FAANG Problems:**
  - Merge Intervals
  - Non-overlapping Intervals
  - Meeting Rooms I/II
  - Minimum Number of Arrows to Burst Balloons

---

#### Sort + Greedy Decision

- **When You See This in a Problem:**
  - "Assign tasks optimally"
  - "Maximize/minimize" with local decisions
  - Custom sorting criteria needed
  - "Jump game" style problems

- **Why This Pattern Works:**
  - Sorting creates optimal processing order
  - Greedy choice at each step is provably optimal

- **Standard C++ Template:**
```cpp
// Custom sort
sort(arr.begin(), arr.end(), [](auto& a, auto& b) {
    // Custom comparator
    return /* condition */;
});
// Process greedily
for (auto& item : arr) {
    // Make locally optimal choice
}
```

- **Common Interview Mistakes:**
  - Wrong comparator (must define strict weak ordering)
  - Greedy doesn't work but DP needed
  - Not proving greedy choice is safe

- **High-Frequency FAANG Problems:**
  - Jump Game
  - Gas Station
  - Task Scheduler
  - Queue Reconstruction by Height

---

### BIT MANIPULATION

---

#### XOR Tricks

- **When You See This in a Problem:**
  - "Single number among duplicates"
  - "Missing number in sequence"
  - "Find two unique numbers"
  - Pairs cancel out

- **Why This Pattern Works:**
  - XOR properties: a ^ a = 0, a ^ 0 = a
  - XOR of all elements cancels duplicates

- **Standard C++ Template:**
```cpp
// Single Number
int single = 0;
for (int x : arr) {
    single ^= x;
}
return single;

// Missing Number (0 to n)
int xorAll = 0;
for (int i = 0; i <= n; i++) xorAll ^= i;
for (int x : arr) xorAll ^= x;
return xorAll;
```

- **Common Interview Mistakes:**
  - Not recognizing XOR applicability
  - Forgetting to XOR with index for missing number
  - Wrong initial value

- **High-Frequency FAANG Problems:**
  - Single Number
  - Missing Number
  - Find the Duplicate Number
  - Single Number III

---

#### Bit Masking Basics

- **When You See This in a Problem:**
  - "Subset representation" with small n (n <= 20)
  - "State compression" in DP
  - "All subsets" iteration
  - Binary state tracking

- **Why This Pattern Works:**
  - n-bit integer represents subset of n elements
  - Bit operations provide O(1) set operations

- **Standard C++ Template:**
```cpp
// Iterate all subsets
for (int mask = 0; mask < (1 << n); mask++) {
    for (int i = 0; i < n; i++) {
        if (mask & (1 << i)) {
            // Element i is in subset
        }
    }
}

// Common operations
int setBit = mask | (1 << i);
int clearBit = mask & ~(1 << i);
int toggleBit = mask ^ (1 << i);
bool hasBit = mask & (1 << i);
```

- **Common Interview Mistakes:**
  - Integer overflow for n > 30
  - Wrong operator precedence (use parentheses)
  - Not recognizing when bitmask DP applies

- **High-Frequency FAANG Problems:**
  - Subsets (bitmask approach)
  - Shortest Path Visiting All Nodes
  - Partition to K Equal Sum Subsets
  - Travelling Salesman (bitmask DP)

---

## 4. FAANG Interview Decision Cheatsheet

### BFS vs DFS
- **Use BFS when:** shortest path in unweighted graph, level-order processing, minimum steps
- **Use DFS when:** path exists, all paths, connectivity, tree traversals, backtracking
- **BFS guarantees:** shortest path in unweighted graphs
- **DFS uses:** less memory for deep narrow trees, natural for recursion

### Recursion vs Iteration
- **Use Recursion when:** tree/graph traversal, backtracking, divide and conquer
- **Use Iteration when:** simple loops, tail recursion optimization needed, stack overflow risk
- **Convert to iteration:** when recursion depth exceeds ~10^4

### DP vs Greedy
- **Try Greedy first if:** local choice leads to global optimum, sorting helps, intervals
- **Use DP when:** overlapping subproblems, optimal substructure, greedy fails
- **Quick test:** if greedy fails on a small example, use DP

### Hidden Binary Search
- **Look for:** minimize maximum, maximize minimum, feasibility check is O(n)
- **Answer space:** bounded and monotonic (if X works, X+1 also works)
- **Classic signals:** "minimum capacity", "at most K groups"

---

## 5. 80/20 Interview Strategy

### Why These Patterns Cover 90% of FAANG Questions
- FAANG interviews test pattern recognition, not problem novelty
- Same 25 patterns appear repeatedly with different contexts
- Mastering templates > solving 500 random problems

### How to Revise This File Before Interviews
- Read Master Pattern Index daily for 1 week before interview
- Practice 2-3 problems per pattern, not 20 problems per pattern
- Focus on "Problem Signals" to build instant recognition

### Recommended Learning Order
1. **Week 1:** Two Pointers, Sliding Window, Hashing, Binary Search
2. **Week 2:** BFS/DFS on Trees, Recursion patterns
3. **Week 3:** Graph BFS/DFS, Topological Sort, Union-Find
4. **Week 4:** 1D DP, 2D DP, Knapsack
5. **Week 5:** Backtracking, Greedy, Bit Manipulation

This order builds concepts progressively and covers the highest-frequency patterns first.
