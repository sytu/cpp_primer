1. Illegal
2. Semicolon ends a line. << operator on the next line doesn't have a operate object on its left, which means the operator doesn't know where the operate object on its right should be printed to.
3. Correction:

```python
std::cout << "The sum of " << v1;
std::cout << " and " << v2;
std::cout << " is " << v1 + v2 << std::endl;
```	

		