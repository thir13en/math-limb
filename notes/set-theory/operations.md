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
If you have two or more sets, the Union of them is basically the resulting Set that contains ALL the elements in the united sets.
```
A = {a, b}
B = {1, 2}
A ∪ B = {a. b, 1, 2}
A ∪ B = { x | (x ∈ A) v (x ∈ B) }
```

### Intersection
If you have two or more sets, the Intersection of them is basically the resulting Set that contains ONLY the elements common in all the sets.
```
A = {a, b, 3}
B = {1, 2, 3}
A ∩ B = { 3 }
A ∩ B = { x | (x ∈ A) ^ (x ∈ B) }
```

### Properties of Union and Intersection
```
# Commutative Property
# The Order of the Operands does not affect the Result
A ∪ B = B ∪ A
A ∩ B = B ∩ A
# Associative Property
# The Order in which an Operation is conducted, does NOT matter
(A ∪ B) ∪ C = A ∪ (B ∪ C)
(A ∩ B) ∩ C = A ∩ (B ∩ C)
# Distributive Property
A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)
A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C)
# Identity and null operators
A ∪ {} = A
A ∩ {} = {}
A ∪ U = U # U is the Universal set
# Idempotent Property
A ∩ A = A
A ∪ A = A
```

### Difference
Subtract elements of one set from another:
```
A = {1, 2, 3}
B = { 2, 3 }
A - B = { 1 }
```