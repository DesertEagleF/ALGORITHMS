The solutions for problems in 2nd chapter.

1-1 A=<3, 41, 59, 26, 41, 58>
    For INSERTION-SORT, it's easy.

1-2 Rewrite the INSERTION-SORT by descending order.

1-3 A=<a1, a2, ..., an> and a given value v, if:
      v in A, return the index of A[i] which equals v;
      v not in A, return NIL.
    FIND v in A:
    for i from 1 to n
        if A[i] == v
            return i
    return NIL

1-4 A[1..n] and B[1..n] keep the binary addend and augend. C[1..n+1] to keep the sum of A and B.
    BINARY-ADD:
    flag = 0
    k = n+1 //k is the sub-index of C
    for i from n downto 1
        tmp = A[i]+B[i]+flag
        C[k] = tmp % 2
        --k
        if tmp == 2 or 3
            flag = 1
        if tmp == 0 or 1
            flag = 0
    if flag == 1
        C[1] = 1
    else
        C[1] = 0

2-1 theta(n^3/1000-100n^2-100n+3) = theta(n^3).

2-2 The best condition: theta(n^2); the worst condition: theta(n^2).

2-3 To find a element in a linear list, 
    the best condition: theta(1),the first element is what we need;
    the worst condition:theta(n), that is to say, the last element is the one.
    the average condittion: 

2-4 Decrease the loop-count.


3-1 A=<3, 41, 52, 26, 38, 57, 9, 49>
    Steps:
          A=<3, 41, 26, 52, 38, 57, 9, 49>
          A=<3, 26, 41, 52, 9, 38, 49, 57>
          A=<3, 9, 26, 38, 41, 49, 52, 49>

3-2 See Merge.cpp

3-3 Proof: T(n) = nlgn
      n = 2^k, k>=1
      so T(n) = 2T(n/2) + n is:
         T(2^k) = 2T(2^(k-1)) + 2^k
      1> when k=1 or n=2, T(n) = 2 =nlgn.
      2> suppose k=i or n=2^i they equals, so we get T(2^i) = nlgn = 2^ilg2^i = i2^i,
         when k=i+1 or n=2^(i+1),
         the left side: T(2^(i+1)) = 2T(2^i) + 2^(i+1) 
                       =2*i*2^i+2^(i+1)
                       =i2^(i+1)+2^(i+1)
                       =(i+1)2^(i+1)
                       =(n+1)lg(n+1)=right side.
      3> so for arbitary i or n, the equation is right.
      
3-4 
                       
