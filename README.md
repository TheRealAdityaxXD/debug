# Debugging Program -- Error List

## Line-wise Errors

-   **Line 8** - `// LOGICAL ERROR (assignment instead of comparison)`
-   **Line 16** - `// MISSING RETURN STATEMENT (Warning)`
-   **Line 25** - `// RUNTIME ERROR (missing &)`
-   **Line 38** - `// SEGMENTATION FAULT (array overflow)`
-   **Line 43** - `// INFINITE LOOP (missing i++)`
-   **Line 56** - `// DOUBLE FREE ERROR`

------------------------------------------------------------------------

## Error Summary Table
| Error Type              | Where                                                                           |
| ----------------------- | ------------------------------------------------------------------------------- |
| Syntax Error            | Missing `;` after printf, missing `;` after `count++`, missing `;` after return |
| Logical Error           | `if(n = 1)`                                                                     |
| Runtime Error           | `scanf("%d", n);`                                                               |
| Segmentation Fault      | `i <= n`                                                                        |
| Infinite Loop           | `for(i = 0; i < n; )`                                                           |
| Missing Return          | `isPrime()`                                                                     |
| Double Free             | `free(arr); free(arr);`                                                         |
