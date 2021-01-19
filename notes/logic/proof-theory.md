# Proof Theory

Proofs are typically presented as **inductively-defined data structures** such as plain **lists**, **boxed lists**, or **trees**, which are constructed according to the **axioms** and **rules of inference** of the logical system. As such, proof theory is **syntactic in nature**, in contrast to model theory, which is semantic in nature.  
Some of the major areas of proof theory include **structural proof theory**, **ordinal analysis**, **provability logic**, **reverse mathematics**, **proof mining**, **automated theorem proving**, and **proof complexity**.


### Structural Proof Theory
Structural proof theory is the subdiscipline of proof theory that studies the specifics of `proof calculi`. The three most well-known styles of proof calculi are:
* The Hilbert calculi
* The natural deduction calculi
* The sequent calculi

### Ordinal analysis
Ordinal analysis is a powerful technique for providing combinatorial consistency proofs for subsystems of arithmetic, analysis, and set theory. Gödel's second incompleteness theorem is often interpreted as demonstrating that finitistic consistency proofs are impossible for theories of sufficient strength. Ordinal analysis allows one to measure precisely the infinitary content of the consistency of theories. For a consistent recursively axiomatized theory T, one can prove in finitistic arithmetic that the well-foundedness of a certain transfinite ordinal implies the consistency of T. Gödel's second incompleteness theorem implies that the well-foundedness of such an ordinal cannot be proved in the theory T.

### Provability logic
Provability logic is a modal logic, in which the box operator is interpreted as 'it is provable that'. The point is to capture the notion of a proof predicate of a reasonably rich formal theory. As basic axioms of the provability logic GL (Gödel-Löb), which captures provable in Peano Arithmetic, one takes modal analogues of the Hilbert-Bernays derivability conditions and Löb's theorem (if it is provable that the provability of A implies A, then A is provable).


### Proof by Induction