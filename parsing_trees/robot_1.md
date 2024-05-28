# Формальная грамматика
\<expression> ::= \<command> \<expression> 
\<command> ::= "north" | "east" | "south" | "west"

# Синтаксически управляемое определение
\<expression> ::= \<command> \<expression> : shift=\<command>.shift+\<expression>.shift
\<command> ::= "north" : shift=(0, 1) | "east" : shift=(-1, 0) | "south" : shift=(0, -1) | "west" : shift=(1, 0)