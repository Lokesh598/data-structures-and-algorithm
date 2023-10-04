## Time and space complexity
```

 1. What is the time, space complexity of following code :
       int a = 0, b = 0;    
        for (i = 0; i < N; i++) {
            a = a + rand();  
        }
        for (j = 0; j < M; j++) {
            b = b + rand();
        }
    
  Assume that rand() is O(1) time, O(1) space function.

3. What is the time complexity of the following code :
       int a = 0, i = N;
        while (i > 0) {
            a += i;
            i /= 2;
        }

4. What is the time complexity of the following code :
   int a = 0;
    for (i = 0; i < N; i++) {
        for (j = N; j > i; j--) {
            a = a + i + j;
        }
    }

5. What is the time complexity of the following code :
    int i, j, k = 0;
    for (i = n/2; i <= n; i++) {
        for (j = 2; j <= n; j = j * 2) {
             k = k + n/2;
        }
    }

6.  A) for(i = 0; i < n; i++)
 
    B) for(i = 0; i < n; i += 2)
   
    C) for(i = 1; i < n; i *= 2)
   
    D) for(i = n; i > -1; i /= 2)

    If n is the size of input(positive), which function is the most efficient? In other words, which loop completes the fastest.

7. Which of the given options provides the increasing order of complexity of functions f1, f2, f3 and f4:

    f1(n) = 2^n
    
    f2(n) = n^(3/2)
    
    f3(n) = nLogn
    
    f4(n) = n^(Logn)

8. What is the time, space complexity of following code :

    int a = 0, b = 0; 
    for (i = 0; i < N; i++) { 
        for (j = 0; j < N; j++) { 
            a = a + j; 
        } 
    } 
    for (k = 0; k < N; k++) { 
        b = b + k; 
    }








```
