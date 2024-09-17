# Формальная грамматика для вычисления арифметико-логический выражений

## Сложение и умножение
`<expr>` ::= `<term>` : val=term.val | `<expr>` ("+"|"-") `<term>` : term=expr.val (+|-) term.val
`<term>` ::= `<factor>` : val=factor.val | `<term>` ("*"|"/") `<factor>` : val=term.val(*|/)factor.val
`<factor>` ::= `<real>` : val=real.val | "(" `<expr>` ")" : val=expr.val

## Возведение в степень
`<factor>` ::= `<pow>` : val=pow.val
`<pow>` ::= `<base>` : val=base.val | `<base>`"^"`<pow>` : val=base.val^pow.val
`<base>` ::= "(" `<expr>` ")" : val=expr.val | `<real>` : val=real.val

## Тригонометрия
`<base>` ::= ... | `<trigo>`
`<trigo>` ::= "s(" `<expr>` ")" : val = sin(expr.val) | "c(" `<expr>` ")" : val=cos(expr.val) | "(" `<expr>` ")" : val=expr.val | `<real>` : val=real.val

## Операции сравнения
Новый стартовый символ
`<logic_expr>` ::= `<expr_1>` ("<", "=", ">") `<expr_2>` : logic_value=expr1.val (<|=|>) expr2.val

## Логические операции
Новый стартовый символ - `<or_statement>`
lv - logic_value
`<or_statement>` ::= `<or_statement>` "|" `<and_statement>` : logic_value=or.lv OR and.lv | `<and_statement>` : vl=and.lv
`<and_statement>` ::= ????
`<not_statement>` ::= ["!"] `<logic_expr>` : lv=[not] logic_expr.lv | ["!"] "(" `<or_statement>` ")" : lv=or.lv

## Вещественные числа
`<digit>` ::= "0" : val = 0 | "1" : val = 1 | "2" : val = 2 | "3" : val = 3 | "4" : val = 4 | "5" : val = 5 | "6" : val = 6 | "7" : val = 7 | "8" : val = 8 | "9" : val = 9
`<int>` ::= `<digit>` : val=digit.val | `<int><digit>` : val = int.val*10 + digit.val
`<real>` ::= `<int>` : val = int.val | `<int>`"."`<fraction>` : val = int.val + fraction.val
`<fraction>` ::= `<digit>` : val = digit.val / 10 | `<digit><fraction>` : val = (digit.val + fraction.val) / 10