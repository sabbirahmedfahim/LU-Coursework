# Data Structures Exam Preparation

---

## Part A

### 1. Trace the output and complexity of the functions

#### Function 1:
```c
void fun1(int n) {
   if (n > 0) {
       printf("%d ", n);
       fun1(n - 1);
   }
}
```

**Output: For `fun1(3)`**
- First call: `n = 3 → print 3`
- Second call: `n = 2 → print 2`
- Third call: `n = 1 → print 1`

**Output:** `3 2 1`

**Time Complexity:**  
The function executes `n` recursive calls → **O(n)**.

---

#### Function 2:
```c
void fun2(int n) {
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < i; j++) {
           printf("*");
       }
       printf("\n");
   }
}
```

**Output: For `fun2(4)`**
- Loop iterations:
  ```
  i = 0 → nothing
  i = 1 → *
  i = 2 → **
  i = 3 → ***
  ```

**Output:**
```
*
**
***
```

**Time Complexity:**  
Outer loop runs `n` times. Inner loop runs `0 + 1 + 2 + ... + (n-1) = O(n^2)`.

---

### 2. Perform tree traversal operations

#### Given Tree:
```
       8
      / \
     3   10
    / \    \
   1   6    14
      / \   /
     4   7 13
```

**Preorder (Root, Left, Right):**  
`8, 3, 1, 6, 4, 7, 10, 14, 13`

**Inorder (Left, Root, Right):**  
`1, 3, 4, 6, 7, 8, 10, 13, 14`

**Postorder (Left, Right, Root):**  
`1, 4, 7, 6, 3, 13, 14, 10, 8`

---

### 3. Queue operations

#### Initial Queue: `10 -> 20 -> 30`

- **Q.insert(40):** Adds `40` to the rear.  
  Result: `10 -> 20 -> 30 -> 40`

- **Q.delete():** Removes `10` from the front.  
  Result: `20 -> 30 -> 40`

---

### 4. Differences between Stack and Queue

| **Feature**       | **Stack**                     | **Queue**                  |
|--------------------|-------------------------------|----------------------------|
| **Order**         | LIFO (Last In, First Out)     | FIFO (First In, First Out) |
| **Operations**    | `push`, `pop`, `peek`         | `enqueue`, `dequeue`       |
| **Example Use**   | Undo mechanism in editors     | Task scheduling            |

---

### 5. Construct Binary Tree

#### Given Traversals:
- **Preorder:** `S, M, K, I, P, C, D, X, A, L`
- **Inorder:** `S, K, M, C, I, P, A, D, X, L`

**Steps:**
1. Root is the first node of preorder: `S`.
2. Split the inorder list into left and right subtrees:
   - Left subtree: `K, M, C, I, P, A`.
   - Right subtree: `D, X, L`.
3. Repeat recursively.

**Final Tree Structure:**
```
       S
      / \
     K   D
    /     \
   M       X
  /         \
 C           L
```

---

## Part B

### 1. Recursive function outputs

#### Function:
```c
void enjoy(int n) {
    printf("%d ", n);
    if (n == 0) return;
    enjoy(n - 2);
    printf("%d ", n);
}
```

**Output for `enjoy(5)`**:
- `5 → 3 → 1 → 0 → 1 → 3 → 5`

**Time Complexity:** O(n), as each recursive call decreases `n` by 2.

---

### 2. Symmetric diagrams for Stack/Queue operations

#### Operations:
- **Pop from A and Push to B:**  
  Stack A: `[C, B]` → `[C]`  
  Stack B: `[D]` → `[D, B]`

- **Pop from B and Push to A:**  
  Stack A: `[C]` → `[C, D]`  
  Stack B: `[D, B]` → `[B]`

---

### 3. Expression Conversion

#### Infix Expression:  
`A + (B * (D ^ X)) * E / F`

**Prefix:**  
`+ A / * + B ^ D X E F`

**Postfix:**  
`A B D X ^ * E * F / +`

---

### 4. Complexity Questions

#### (a) BST Insertion:
- Worst-case complexity: **O(h)**, where `h` is the height of the tree.  
- For a skewed BST, `h = n`, so **O(n)**.

#### (b) Heap Operations:
- Max-heapify: **O(log n)** for insertion or deletion.

#### (c) Fibonacci sequence:
- Dynamic programming approach: **O(n)**.  
- Recursive approach: **O(2^n)** due to repeated calculations.

---

### 5. Min Heap Construction

#### Array: `[50, 44, 30, 25, 80, 58, 77]`

**Steps to Build a Min Heap:**
1. Start from the last non-leaf node and heapify upwards.
2. Final Min Heap:
```
        25
      /    \
    30      44
   /  \    /  \
  50  80  58  77
```

---

### 6. Quick Sort Complexity

#### Worst-case scenario:
- Occurs when the array is already sorted or reverse sorted, and pivot selection is poor.  
- Complexity: **O(n^2)**.

#### Example:
Array `[7, 5, 4, 3, 2, 1]`:  
Pivot divides array into uneven halves repeatedly → results in quadratic time.

---
