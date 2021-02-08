# Types of Sets

### Universal Set
Contains EVERYTHING. Noted `U`

### Empty/Null Set
Contains NOTHING. Noted `∅` read `phy`. It is important to note that `{} != 0`.

### Singleton Set
Contains exactly ONE element, i.e. {1}.

### Finite Set
Any set that contains a FINITE amount of elements. You note them by adding all elements to the set.

### Infinite Set
A Set with infinitely many elements, you note it with ellipsis. For instance, the set of the integers:
{..., -2, -1, 0, 1,,2, ...}

### Subset
A set that contains only a subgroup of the elements in another set, such as that `B` is a subset of `A` if:
```
∀ x ∈ B => x ∈ A
```
The notation is as follows
```
B ⊆ A
```
Of A is a superset of B
```
B ⊃ A
```
It is true that every set is a susbset of themselves, and also the empty set is a subset of EVERY set
```
A ⊆ A & A = A
```

### Proper Subset
A is a Proper Subset of B if B contains ALL the elements in A and at least one more element not contained in A
The notation is the same without the line underneath.
```
A ⊂ B
```

### Power Set
Power Set of A `P(A)` is a set **with all subsets of A**.
```
B = {0, 1}

P(B) = {{}, {0}, {1}, {0, 1}}
```
It is true that the number of elements on a Power Set is 2^n where n is the number of elements of the initial set.

### Ordered Tuples
It is a kind of Set where the arrangement or order MATTERS, the notation is as follows:
```
A = (el1, el2, el3, ... eln)
```
Ordered pair or ordered 2_Tuple
```
A = (el1, el2)
```
Ordered n_Tuple
```
A = (el1, el2, el3, ... eln)
```
Ordered Tuples **can have repeated elements**.