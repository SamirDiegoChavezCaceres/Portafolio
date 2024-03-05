# List Abstract Data Type
## Types

## Signatures
```
    newstack:                       ------->  STACK
    push    : STACK x INTEGER       --------> STACK
    pop     : STACK                 --------> STACK
    top     : STACK                 --------> INTEGER U {undefined}
    empty   : STACK                 --------> BOOLEAN

 ```
## Axioms
```
   1. pop(newstack)   = newstack
   2. pop(push(S,I))  = S
   3. top(newstack)   = undefined
   4. top(push(S,I))  = I
   5. empty(newstack) = true
   6. empty(push(S,I))= false
 ```