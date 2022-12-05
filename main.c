Algorithm: Job-Sequencing-With-Deadline (D, J, n, k) 
D(0) := J(0) := 0 
k := 1 
J(1) := 1   // means first job is selected 
for i = 2 … n do 
   r := k 
   while D(J(r)) > D(i) and D(J(r)) ≠ r do 
      r := r – 1 
   if D(J(r)) ≤ D(i) and D(i) > r then 
      for l = k … r + 1 by -1 do 
         J(l + 1) := J(l) 
         J(r + 1) := i 
         k := k + 1