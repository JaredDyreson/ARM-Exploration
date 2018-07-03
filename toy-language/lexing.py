#!/usr/bin/env python3.5
import re
from collections import namedtuple

# a simple string we want to parse
simple_src = '4*6+9*(8-1)'

class TokenDefinition(namedtuple('TokenDefinition', ('name', 'pattern', 'value_filter'))):
    def __repr__(self):
        return 'TokenType.' + self.name
class TokenType(object):
    _defs = [
        # operators
        TokenDefinition('plus', '+', None),
        TokenDefinition('minus', '-', None),
        TokenDefinition('asterik', '*', None),
        TokenDefinition('slash', '/', None),

        # other punctuation
        TokenDefinition('left_paren', '(', None),
        TokenDefinition('right_paren', ')', None),

        # more complex tokens
        TokenDefinition('integer', re.compile('[0-9]+'), int),
        TokenDefinition('whitespace', re.compile('[ \t]+'), None),
    ]
for def_ in TokenType._defs:
    setattr(TokenType, def_.name, def_)

print(TokenType.plus)
