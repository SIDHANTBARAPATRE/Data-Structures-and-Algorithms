# 🐸 Frog Jump (Minimum Energy)

## 📌 Problem Statement

Given a number of stairs and a frog, the frog wants to climb from the **0th stair** to the **(N-1)th stair**.

At a time, the frog can jump either **one** or **two** stairs.

An array `height[]` of size `N` is given, where `height[i]` represents the height of the `i-th` stair.

Whenever the frog jumps from stair `i` to stair `j`, the energy consumed is:

```text
abs(height[i] - height[j])
```

where `abs()` denotes the absolute difference.

Return the **minimum amount of energy** required for the frog to reach the last stair.

---

## 📥 Example 1

### Input

```text
height = [2, 1, 3, 5, 4]
```

### Output

```text
2
```

### Explanation

One possible path is:

```text
0th stair → 2nd stair = |2 - 3| = 1
2nd stair → 4th stair = |3 - 4| = 1

Total Energy = 2
```

---

## 📥 Example 2

### Input

```text
height = [7, 5, 1, 2, 6]
```

### Output

```text
9
```

### Explanation

One possible path is:

```text
0th stair → 1st stair = |7 - 5| = 2
1st stair → 3rd stair = |5 - 2| = 3
3rd stair → 4th stair = |2 - 6| = 4

Total Energy = 9
```

---

## ✅ Constraints

- `1 ≤ N ≤ 10^5`
- `1 ≤ height[i] ≤ 10^4`