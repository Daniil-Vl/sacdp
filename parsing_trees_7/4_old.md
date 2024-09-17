# Формальная грамматика для вычисления арифметико-логический выражений

## Логические связки
\<logic_expr> ::= \
    &emsp; \<or_statement> | \
    &emsp; \<and_statement> | \
    &emsp; \<not_statement> 

\<or_statement> ::= \
    &emsp; \<and_statement:1> "|" \<and_statement:2> | \
    &emsp; \<and_statement> "|" "(" \<logic_expr> ")" 

\<and_statement> ::= \
    &emsp; \<not_statement> | \
    &emsp; \<and_statement> "&" \<and_statement> | 
    &emsp; \<and_statement> "&" \<logic_statement> | 
    &emsp; \<and_statement> "&" "(" \<logic_expr> ")" 

\<not_statement> ::= \
    &emsp; "!" \<logic_statement> | \
    &emsp; "!(" \<logic_expr> ")" 


## Сравнения
\<logic_statement> ::= \
    &emsp; \<expression> | \
    &emsp; \<logic_statement> ( "<" | ">" | "=" ) \<logic_statement> 


## Арифметические выражения
\<expression> ::= \
    &emsp; \<term> | \
    &emsp; \<term> "+" \<expression> | \
    &emsp; \<term> "-" \<expression> 

\<term> ::= \
    &emsp; \<factor> | \
    &emsp; \<term> "*" \<factor> | \
    &emsp; \<term> "/" \<factor> 

\<factor> ::= \
    &emsp; \<exponent> | \
    &emsp; "(" \<expression> ")" 

\<exponent> ::= \
    &emsp; \<base> "^" \<degree> | \
    &emsp; \<trigonometric_function> | \
    &emsp; \<num> 

\<base> ::= \
    &emsp; \<num> | \
    &emsp; \<trigonometric_function> | \
    &emsp; "(" \<expression> ")" 

\<degree> ::= \
    &emsp; \<num> | \
    &emsp; \<trigonometric_function> | \
    &emsp; \<exponent> | \
    &emsp; "(" \<expression> ")" 
    
\<trigonometric_function> ::= \
    &emsp; "s(" \<expression> ")" | \
    &emsp; "c(" \<expression> ")" 

\<num> ::= \
    &emsp; \<int> | \
    &emsp; \<int>"."\<fractional> 

\<fractional> ::= \
    &emsp; \<digit> | \
    &emsp; \<digit>\<fractional>

\<int> ::= \
    &emsp; \<digit> | \<int>\<digit>

\<digit> ::= \
    "0" : value = 0 | \
    "1" : value = 1 | \
    "2" : value = 2 | \
    "3" : value = 3 | \
    "4" : value = 4 | \
    "5" : value = 5 | \
    "6" : value = 6 | \
    "7" : value = 7 | \
    "8" : value = 8 | \
    "9" : value = 9 | \



