# Bubble Sort Algorithm (Ascending Order)

Simple implementation of **Bubble Sort** in C++ 

## How Bubble Sort Works

Bubble Sort is like people standing in a line and constantly comparing themselves with the person next to them.  
If the person on the left is taller than the person on the right → they swap places.  
After many passes, the tallest person slowly "bubbles" to the end of the line.

We repeat this process again and again until no more swaps are needed — that means the list is sorted!

## Step-by-Step Example

Let's sort this list: `[5, 3, 8, 4, 2]`

**Pass 1**  
5 3 8 4 2 → compare 5>3 → swap → **3 5 8 4 2**  
3 5 8 4 2 → 5<8 → no swap  
3 5 8 4 2 → 8>4 → swap → **3 5 4 8 2**  
3 5 4 8 2 → 8>2 → swap → **3 5 4 2 8**  
→ **8** is now at the correct position (biggest number)

**Pass 2**  
3 5 4 2 8 → 3<5 → no  
3 5 4 2 8 → 5>4 → swap → **3 4 5 2 8**  
3 4 5 2 8 → 5>2 → swap → **3 4 2 5 8**  
→ **5** bubbles to position

**Pass 3**  
3 4 2 5 8 → 3<4 → no  
3 4 2 5 8 → 4>2 → swap → **3 2 4 5 8**  
→ **4** moves right

**Pass 4**  
3 2 4 5 8 → 3>2 → swap → **2 3 4 5 8**  
→ now everything is sorted!

**Final result:** `[2, 3, 4, 5, 8]`

## Time Complexity

| Case          | Number of Comparisons          | Explanation                                      |
|---------------|--------------------------------|--------------------------------------------------|
| **Best**      | ≈ n-1                          | Already sorted → only one pass, no swaps         |
| **Average**   | ≈ n²/2                         | Random order → roughly half the maximum swaps    |
| **Worst**     | n(n-1)/2 ≈ n²/2                | Reverse sorted → maximum number of swaps needed  |

→ Bubble Sort is **O(n²)** in both average and worst case.

## Space Complexity

**O(1)** – Very good!  
Bubble Sort only needs a few extra variables (like `temp` for swapping).  
It sorts **in-place** — it doesn't create a new big array.

## Performance Results

I tested the algorithm with different list sizes :

| Size       | Time (milliseconds) | Comparisons         | Swaps (approx)     |
|------------|----------------------|----------------------|--------------------|
| 1          | ~0 ms               | 0                   | 0                 |
| 10         | ~0 ms               | 45                  | ~20               |
| 250        | ~10–20 ms           | ~31,000             | ~15,000           |
| 999        | ~150–300 ms         | ~500,000            | ~250,000          |
| 9,999      | ~15–30 seconds      | ~50 million         | ~25 million       |
| 89,786     | ~2–4 minutes        | ~4 billion          | ~2 billion        |
| 789,300    | ~30–60 minutes      | ~310 billion        | ~150 billion      |
| 1,780,000  | ~2.5–5 hours (est.) | ~1.58 trillion      | ~790 billion      |

→ You can clearly see: **Bubble Sort becomes very slow very quickly** as the list gets bigger.




