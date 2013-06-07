parametrization-of-Pythagorean-triplets-
========================================

given the sum of the Pythagorean triplets, it is possible to calculate all possible Pythagorean triplets whose sum is provided.

Explanation:
A Pythagorean triplet is the set of three whole numbers, such that they form the three sides of a right angled triangle and also the sum of the squares of non-hypotenuse sides is equal to the square of the hypotenuse. 
Most common example being: 3,4,5.
(3*3)+(4*4)=(5*5)
Hence its  a Pythagorean triplet. Advanced information at: http://en.wikipedia.org/wiki/Pythagorean_triple

There are a multiple ways to get the three sides by having known the addition of them, brute-force method being most common and simple. I have opted for the one that used parametrization of the triplets. I have tried making it as efficient as possible by making use of an efficient GCD function and also modifying Euclid's formula for calculating triplets. http://en.wikipedia.org/wiki/Formulas_for_generating_Pythagorean_triples

The basic formula used by him was:

a =i*i-n*n                                        
b =2*i*n
c =i*i+n*n
                                                                    ...(1)
where, i>n>0
Basic formule adapted from:
https://sites.google.com/site/tpiezas/002
A Pythagorean triplet a,b,c is said to be primitive if gcd(a,b,c)=1 and exactly one of i and n is even, details at: http://aleph0.clarku.edu/~djoyce/numbers/pyth.pdf
Now as stated in formula (1) every triplet can be generated, but in order to get the primitive triplet by dividing it by its GCD and hence we can further modify the formula and represent it as:

a = d* (i*i − n*n ) 
b = 2 *i* n* d
c = d*(i*i+ n*n ) 
                                                                 ...(2)
d being the output of GCD(a,b,c)

After parameterizing we get

a+b+c = 2*i*(i + n)*d                            ...(3)

From above we conclude that m is divisor of s/2 and is less than its square root.
So the next task is to find k which is divisor to s/(2*i) and is greater than i but less than 2*i and GCD(i,k)=1. Thus n=k-m and also d=s/(2*i*k) substituting them in (2) and modifying the source code is generated.
