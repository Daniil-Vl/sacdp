Жирным выделены изменения, которые были внесены в последнюю версию (т.е. различия с последней версией грамматики)

# Обычная арифметика
\<expression> ::= 
    &emsp; \<term> : value = \<term>.value |
    &emsp; \<expression> "+" \<term> : value = \<expression>.value + \<term>.value |
    &emsp; \<expression> "-" \<term> : value = \<expression>.value - \<term>.value

\<term> ::= 
    &emsp; \<factor> : value = \<factor>.value |
    &emsp; \<term> "\*" \<factor> : value = \<term>.value * \<factor>.value |
    &emsp; \<term> "/" \<factor> : value = \<term>.value / \<factor>.value

\<factor> ::= 
    &emsp; \<number> : value = \<number>.value |
    &emsp; "(" \<expression> ")" : value = \<expression>.value

\<number> ::= 
    &emsp; \<digit> : value = \<digit>.value |
    &emsp; \<number> \<digit> : value = 10 * \<number>.value + \<digit>.value
    
\<digit> ::= 
    &emsp; "0" : value = 0 | 
    &emsp; "1" : value = 1 | 
    &emsp; "2" : value = 2 | 
    &emsp; "3" : value = 3 | 
    &emsp; "4" : value = 4 |
    &emsp; "5" : value = 5 | 
    &emsp; "6" : value = 6 | 
    &emsp; "7" : value = 7 | 
    &emsp; "8" : value = 8 | 
    &emsp; "9" : value = 9

---

# Арифметика с добавлением возведения в степень
\<expression> ::= 
    &emsp; \<term> : value = \<term>.value |
    &emsp; \<expression> "+" \<term> : value = \<expression>.value + \<term>.value |
    &emsp; \<expression> "-" \<term> : value = \<expression>.value - \<term>.value

\<term> ::= 
    &emsp; \<factor> : value = \<factor>.value |
    &emsp; \<term> "\*" \<factor> : value = \<term>.value * \<factor>.value |
    &emsp; \<term> "/" \<factor> : value = \<term>.value / \<factor>.value

\<factor> ::= 
    &emsp; \<number> : value = \<number>.value |
    **&emsp; "(" \<expression> ")" : value = \<expression>.value**
    &emsp; \<exponent> : value = \<exponent>.value |
    
**\<exponent> ::= 
    &emsp; \<number> : value = \<number>.value |
    &emsp; \<expression:1> ^ \<expression:2> : value = \<expression:1>.value ^ \<expression:2>.value 
    &emsp; \<expression:1> ^ "(" \<expression:2> ^ \<expression:3> ")" : value = \<expression:1>.value ^ (\<expression:2>.value ^ \<expression:3>.value)**

\<number> ::= 
    &emsp; \<digit> : value = \<digit>.value |
    &emsp; \<number> \<digit> : value = 10 * \<number>.value + \<digit>.value
    
\<digit> ::= 
    &emsp; "0" : value = 0 | 
    &emsp; "1" : value = 1 | 
    &emsp; "2" : value = 2 | 
    &emsp; "3" : value = 3 | 
    &emsp; "4" : value = 4 |
    &emsp; "5" : value = 5 | 
    &emsp; "6" : value = 6 | 
    &emsp; "7" : value = 7 | 
    &emsp; "8" : value = 8 | 
    &emsp; "9" : value = 9

---

# Арифметика с добавлением вещественных чисел
\<expression> ::= 
    &emsp; \<term> : value = \<term>.value |
    &emsp; \<expression> "+" \<term> : value = \<expression>.value + \<term>.value |
    &emsp; \<expression> "-" \<term> : value = \<expression>.value - \<term>.value

\<term> ::= 
    &emsp; \<factor> : value = \<factor>.value |
    &emsp; \<term> "\*" \<factor> : value = \<term>.value * \<factor>.value |
    &emsp; \<term> "/" \<factor> : value = \<term>.value / \<factor>.value

\<factor> ::= 
    **&emsp; \<real_number> : value = \<real_number>.value |**
    &emsp; "(" \<expression> ")" : value = \<expression>.value
    &emsp; \<exponent> : value = \<exponent>.value |
    
\<exponent> ::= 
    **&emsp; \<real_number> : value = \<real_number>.value |**
    &emsp; \<expression:1> ^ \<expression:2> : value = \<expression:1>.value ^ \<expression:2>.value 
    &emsp; \<expression:1> ^ "(" \<expression:2> ^ \<expression:3> ")" : value = \<expression:1>.value ^ (\<expression:2>.value ^ \<expression:3>.value)

**Вещественные числа**
**\<real_number> :==
    &emsp; \<number> : value = \<number>.value |
    &emsp; \<number>.\<fractional_part> : value = \<number>.value + \<fractional_part>.value**

**\<fractional_part> :==
    &emsp; \<digit> : value = \<digit>.value / 10 |
    &emsp; \<digit>\<fractional_part> : value = \<digit>.value / 10 + \<fractional_part> / 10**

\<number> ::= 
    &emsp; \<digit> : value = \<digit>.value |
    &emsp; \<number> \<digit> : value = 10 * \<number>.value + \<digit>.value
    
\<digit> ::= 
    &emsp; "0" : value = 0 | 
    &emsp; "1" : value = 1 | 
    &emsp; "2" : value = 2 | 
    &emsp; "3" : value = 3 | 
    &emsp; "4" : value = 4 |
    &emsp; "5" : value = 5 | 
    &emsp; "6" : value = 6 | 
    &emsp; "7" : value = 7 | 
    &emsp; "8" : value = 8 | 
    &emsp; "9" : value = 9

---

# Арифметика с синусом\косинусом
\<expression> ::= 
    &emsp; \<term> : value = \<term>.value |
    &emsp; \<expression> "+" \<term> : value = \<expression>.value + \<term>.value |
    &emsp; \<expression> "-" \<term> : value = \<expression>.value - \<term>.value

\<term> ::= 
    &emsp; \<factor> : value = \<factor>.value |
    &emsp; \<term> "\*" \<factor> : value = \<term>.value * \<factor>.value |
    &emsp; \<term> "/" \<factor> : value = \<term>.value / \<factor>.value

\<factor> ::= 
    &emsp; \<real_number> : value = \<real_number>.value |
    &emsp; "(" \<expression> ")" : value = \<expression>.value
    &emsp; \<exponent> : value = \<exponent>.value |
    
\<exponent> ::= 
    &emsp; \<real_number> : value = \<real_number>.value |
    &emsp; "(" \<expression:1> ")" ^ "(" \<expression:2> ")" : value = \<expression:1>.value ^ \<expression:2>.value 
    &emsp; \<expression:1> ^ "(" \<expression:2> ^ \<expression:3> ")" : value = \<expression:1>.value ^ (\<expression:2>.value ^ \<expression:3>.value)


**Синус\Косинус**
\<trigonometric_function> ::=
    &emsp; s"(" \<expression> ")" : value = sin(\<expression>.value) |
    &emsp; s"(" \<expression> ")" : value = cos(\<expression>.value) |


Вещественные числа
\<real_number> ::=
    &emsp; \<number> : value = \<number>.value |
    &emsp; \<number>.\<fractional_part> : value = \<number>.value + \<fractional_part>.value

\<fractional_part> ::=
    &emsp; \<digit> : value = \<digit>.value / 10 |
    &emsp; \<digit>\<fractional_part> : value = \<digit>.value / 10 + \<fractional_part> / 10

\<number> ::= 
    &emsp; \<digit> : value = \<digit>.value |
    &emsp; \<number> \<digit> : value = 10 * \<number>.value + \<digit>.value
    
\<digit> ::= 
    &emsp; "0" : value = 0 | 
    &emsp; "1" : value = 1 | 
    &emsp; "2" : value = 2 | 
    &emsp; "3" : value = 3 | 
    &emsp; "4" : value = 4 |
    &emsp; "5" : value = 5 | 
    &emsp; "6" : value = 6 | 
    &emsp; "7" : value = 7 | 
    &emsp; "8" : value = 8 | 
    &emsp; "9" : value = 9