# Грамматика + синтаксически управляемое определение

#### Старт
\<start> ::= ( <0-999> | <1000-3999>)

---

#### Числа от 0 до 9
<0-9> ::= (
    &emsp; \<empty> : value=\<empty>.value |
    &emsp; \<I> : value=\<I>.value | 
    &emsp; \<I>\<I> : value=\<I>.value + \<I>.value | 
    &emsp; \<I>\<I>\<I> :value=\<I>.value + \<I>.value + \<I>.value | 
    &emsp; \<I>\<V> : value=\<V>.value - \<I>.value |
    &emsp; \<V>( 
        &emsp; &emsp; \<empty> : value=\<V>.value+\<empty>.value | 
        &emsp; &emsp; \<I> :value=\<V>.value + \<I>.value | 
        &emsp; &emsp; \<I>\<I> : value=\<V>.value + \<I>.value + \<I>.value | 
        &emsp; &emsp; \<I>\<I>\<I> : value=\<V>.value + \<I>.value + \<I>.value + \<I>.value
        ) |
    &emsp; \<I>\<X> : value=\<X>.value - \<I>.value
)

---

#### Числа от 10 до 39
<10-39> ::= ( 
    &emsp; \<X> : value = \<X>.value + \<0-9>.value | 
    &emsp; \<X>\<X> : value = \<X>.value + \<X>.value + \<0-9>.value | 
    &emsp; \<X>\<X>\<X> : value = \<X>.value + \<X>.value + \<X>.value + \<0-9>.value
)\<0-9>

#### Числа от 40 до 49
<40-49> ::= \<X>\<L>\<0-9> : value = \<L>.value - \<X>.value + \<0-9>.value

#### Числа от 50 до 89
<50-89> ::= \<L>(
    &emsp; <0-9> : value = \<L>.value + \<0-9>.value |
    &emsp; <10-39> : value = \<L>.value + \<10-39>.value
)

#### Числа от 90 до 99
<90-99> ::= \<X>\<C> \<0-9> : value = \<C> - \<X> + \<0-9>.value

#### Объединение чисел от 0 до 99
<0-99> ::= ( 
    &emsp; \<0-9> : value = <0-9>.value | 
    &emsp; \<10-39> : value = <10-39>.value | 
    &emsp; \<40-49> : value = <40-49>.value | 
    &emsp; \<50-89> : value = <50-89>.value | 
    &emsp; <90-99> : value = \<90-99>.value
)

---

#### Числа от 100 до 399
<100-399> ::= ( 
    &emsp; \<C> : value = \<C> + \<0-99>.value | 
    &emsp; \<C>\<C> : value = \<C> + \<C> + \<0-99>.value | 
    &emsp; \<C>\<C>\<C> : value = \<C> + \<C> + \<C> + \<0-99>.value 
)\<0-99>

#### Числа от 400 до 499
<400-499> ::= \<C>\<D>\<0-99> : value = \<D> - \<C> + <0-99>.value

#### Числа от 500 до 899
<500-899> ::= \<D>(
    &emsp; <0-99> : value = \<D>.value + \<0-99>.value |
    &emsp; <100-399> : value = \<D>.value + \<100-399>.value
)

#### Числа от 900 до 999
<900-999> ::= \<C>\<M>\<0-99> : value = \<M> - \<C> + <0-99>.value

#### Объединение чисел от 0 до 999
<0-999> ::= ( 
    &emsp; \<0-99> : value = <0-99>.value | 
    &emsp; \<100-399> : value = <100-399>.value | 
    &emsp; \<400-499> : value = <400-499>.value | 
    &emsp; \<500-899> : value = <500-899>.value | 
    &emsp; \<900-999> : value = <900-999>.value 
)

---

#### Числа от 1000 до 3999
<1000-3999> ::= ( 
    &emsp; \<M> : value = \<M>.value + \<0-999>.value | 
    &emsp; \<M>\<M> : value = \<M>.value + \<M>.value + \<0-999>.value | 
    &emsp; \<M>\<M>\<M> : value = \<M>.value + \<M>.value + \<M>.value + \<0-999>.value  
)[ \<0-999> ]

---

#### Подстановка терминалов
\<I> ::= "I" : value=1
\<V> ::= "V" : value=5
\<X> ::= "X" : value=10
\<L> ::= "L" :value=50
\<C> ::= "C" : value=100
\<D> ::= "D" : value=500
\<M> ::= "M" : value=1000
\<empty> ::= "" : value=0