line 8 - // LOGICAL ERROR (assignment instead of comparison)
line 16 -  // MISSING RETURN STATEMENT (Warning)
line 25 - // RUNTIME ERROR (missing &)
line 38 -  // SEGMENTATION FAULT (array overflow)
line 43 -  // INFINITE LOOP (missing i++)
line 56 - // DOUBLE FREE ERROR


| Error Type              | Where                                                                           |
| ----------------------- | ------------------------------------------------------------------------------- |
| Syntax Error            | Missing `;` after printf, missing `;` after `count++`, missing `;` after return |
| Logical Error           | `if(n = 1)`                                                                     |
| Runtime Error           | `scanf("%d", n);`                                                               |
| Segmentation Fault      | `i <= n`                                                                        |
| Infinite Loop           | `for(i = 0; i < n; )`                                                           |
| Missing Return          | `isPrime()`                                                                     |
| Double Free             | `free(arr); free(arr);`                                                         |
