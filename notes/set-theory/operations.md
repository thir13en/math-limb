# Operations

### Cartesian Product
Given the Sets `A` and `B`, the **Cartesian Product** of `A` and `B`, denoted `A x B` and read A cross B, is the set of **all ordered pairs (a, b)** where a is in `A` and b is in `B`.
```
A x B = {(a, b) | a ∈ A and b ∈ B}
```
```
A = {1, 2}
A = {a, b}
A x B = {(1, a), (1, b), (2, a), (2, b)}

A = {1, 2, 3}
A = {a, b}
A x B = {(1, a), (1, b), (1, c), (2, a), (2, b), (2, c}
```
It is important to note that Cartessian Product does not have the Commutative Property:
```
A x B != B x A
# The order in which we make Cartessian Products matters also
A x B x C != (A x B) x C
# As the result of cartesian operation is ordered n_Tuples, the prior example will result in nested Tuples.
```
You can think of Cartesian Products of n Sets as the n-dimensional table resulting for combining the Ordered n_Tuples of all their elements.

### Union