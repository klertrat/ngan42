'''
x = "123"
print(int(x))

x = 123
print(float(x))

print("abs(-45) : ", abs(-45))
print("abs(100.12) : ", abs(100.12))

import math

print("math.fabs(-45.17) : ", math.fabs(-45.17))
print("math.fabs(100.12) : ", math.fabs(100.12))
print("math.fabs(100.72) : ", math.fabs(100.72))
print("math.fabs(math.pi) : ", math.fabs(math.pi))

import math

print("math.exp(-45.17) : ", math.exp(-45.17))
print("math.exp(100.12) : ", math.exp(100.12))
print("math.exp(100.72) : ", math.exp(100.72))
print("math.exp(math.pi) : ", math.exp(math.pi))

import math

print("math.floor(-45.17) : ", math.floor(-45.17))
print("math.floor(100.12) : ", math.floor(100.12))
print("math.floor(100.72) : ", math.floor(100.72))
print("math.floor(math.pi) : ", math.floor(math.pi))

import math

print("math.log(-45.17) : ", math.log(-45.17))
print("math.log(100.12) : ", math.log(100.12))
print("math.log(100.72) : ", math.log(100.72))
print("math.log(math.pi) : ", math.log(math.pi))

import math

print("math.log10(-45.17) : ", math.log10(-45.17))
print("math.log10(100.12) : ", math.log10(100.12))
print("math.log10(100.72) : ", math.log10(100.72))
print("math.log10(math.pi) : ", math.log10(math.pi))

print("max(80, 100, 1000) : ", max(80, 100, 1000))
print("max(-20, 100, 400) : ", max(-20, 100, 400))
print("max(-80, -20, -10) : ", max(-80, -20, -10))
print("max(0, 100, -400) : ", max(0, 100, -400))

print("min(80, 100, 1000) : ", min(80, 100, 1000))
print("min(-20, 100, 400) : ", min(-20, 100, 400))
print("min(-80, -20, -10) : ", min(-80, -20, -10))
print("min(0, 100, -400) : ", min(0, 100, -400))

import math
print("math.modf(100.12) : ", math.modf(100.12))
print("math.modf(100.72) : ", math.modf(100.72))
print("math.modf(math.pi) : ", math.modf(math.pi))

print("round(80.23456, 2) : ", round(80.23456, 2))
print("round(100.000056, 3) : ", round(100.000056, 3))
print("round(-100.000056, 3) : ", round(-100.000056, 3))

import math

print("math.sqrt(100) : ", math.sqrt(100))
print("math.sqrt(7) : ", math.sqrt(7))
print("math.sqrt(math.pi) : ", math.sqrt(math.pi))

import random

print("choice([1, 2, 3, 5]) : ", random.choice([1, 2, 3, 5]))
print("choice('A String') : ", random.choice('A Sring'))

import random

print("random() : ", random.random())
print("random() : ", random.random())

import random

random.seed(10)
print("Random number with seed 10 : ", random.random())
random.seed(10)
print("Random number with seed 10 : ", random.random())
random.seed(10)
print("Random number with seed 10 : ", random.random())

import random

list = [20, 16, 0, 5]
random.shuffle(list)
print("Reshuffled list : ", list)
random.shuffle(list)
print("Reshuffled list : ", list)

var1 = 'Hello World!'
var2 = 'Python Programming'

print("var1[0] : ", var1[0])
print("var2[1:5] : ", var2[1:5])

var1 = 'Hello World!'
print("Updated String :- ", var1[:6] + 'python')

s1 = "abc"
s2 = "def"
print(s1 + s2)

s1 = "abc"
print(s1[1])

s1 = "abc"
print(s1[1:2])

s1 = "abc"
print(s1[1:])

s1 = "abc"
print(s1[:2])

s1 = "abc"
print("a" in s1)

s1 = "abc"
print("d" in s1)

s1 = "abc"
print("a" not in s1)

s1 = "abc"
print("d" not in s1)

print("hello \n")

print(r"\n")

print("hello" + r"\n")

print("My name is %s and weight is %d kg!" % ('Zara', 11))
print("My name is %s and weight is %o kg!" % ('Zara', 11))
print("My name is %s and weight is %e kg!" % ('Zara', 11))
print("My name is %s and weight is %E kg!" % ('Zara', 11))
print("My name is %s and weight is %f kg!" % ('Zara', 11))

para_str = """this is a long string that is made up of
several lines and non-printable characters such as
TAB (\t) and they will show up that way when displayed.
NEWLINEs within the string, whether explicitly given like
this within the blankets [\n], or just a NEWLINE within
this variable assignment will also show up."""
print(para_str)

print('C:\\nowhere')
print(r'C:\\nowhere')

src = "this is string example....wow!!!"
print(src.capitalize())

src = "this is string example....wow!!!"
sub = 'i'
print(src.count(sub))

src = "this is string example....wow!!!"
sub = 'exam'
print(src.count(sub, 10, 40))

src = "this is string example....wow!!!"
sub = 'exam'
print(src.count(sub, 30, 40))

import base64

src = "this is string example....wow!!!"
src = base64.b64encode(src.encode('utf-8', errors = 'strict'))
print(src)

import base64

src = "this is string example....wow!!!"
src = base64.b64encode(src.encode('utf-8', errors = 'strict'))
print(src)

src = base64.b64decode(src)
print(src)

str1 = "this is string example....wow!!!"
str2 = "exam"
print(str1.find(str2))
print(str1.find(str2, 10))
print(str1.find(str2, 40))

import string

str1 = "this is string example....wow!!!"
str2 = "exam"
print(str1.index(str2))
print(str1.index(str2, 10))
print(str1.index(str2, 40))

import string
src = "this2016"
print(src.isalnum())

import string
src = "this is string example....wow!!!"
print(src.isalnum())

import string
src = "this1"
print(src.isalpha())

import string
src = "this"
print(src.isalpha())

import string
src = "123456"
print(src.isdigit())

import string
src = "this is string example....wow!!!"
print(src.isdigit())

import string
src = "        "
print(src.isspace())

import string
src = "this is string example....wow!!!"
print(src.isspace())

import string
src = "this is string example....wow!!!"
print("length of the string: ", len(src))

s = "-"
seq = ("a", "b", "c")
print(s.join(seq))

seq = ["1", "2", "3", "4"]
print(s.join(seq))

src = "this is string EXAMPLE....WOW!!!"
print(src.lower())
print(src.upper())

intab = "aeiou"
outtab = "12345"
trantab = str.maketrans(intab, outtab)
src = "this is string example....wow!!!"
print(src.translate(trantab))

src = "this is string example....wow!!! this is really string"
print(src.replace("is", "was"))
print(src.replace("is", "was", 3))

src = "this is string example....wow!!!"
print(src.split())
print(src.split('i', 1))
print(src.split('w))

src = "this is \nstring example....\nwow!!!"
print(src.splitlines())

src = "*****this is string example....wow!!!*****"
print(src.strip('*'))

src = "     this is string example....wow!!!     "
print(src.strip(' '))

src = "this is string example....wow!!!"
print(src.title())

src = "This Is String Example....WOW!!!"
print(src.swapcase())

list1 = ['physics', 'chemistry', 1997, 2000]
list2 = [1, 2, 3, 4, 5, 6, 7]
print("list1[0] : ", list1[0])
print("list2[1:5] : ", list2[1:5])
print("list2[-2] : ", list2[-2])
print("list2[-2:] : ", list2[-2:])

list = ['physics', 'chemistry', 1997, 2000]
print("Value available at index 2 : ")
print(list[2])
list[2] = 2001
print("New value available at index 2 : ")
print(list[2])

list = ['physics', 'chemistry', 1997, 2000]
print("Value available at index 2 : ")
print(list[2])
list[2] = 2001
print("New value available at index 2 : ")
print(list[2])
list.append("2021")
print(list)

list1 = ['physics', 'chemistry', 1997, 2000]
print(list1)
del list1[2]
print("After deleting value at index 2 : ")
print(list1)

list = ['physics', 'chemistry', 1997, 2000]
list[2] = 2001
list.append("2021")
list1 = ['physics', 'chemistry', 1997, 2000]
del list1[2]
print(len(list1))
print(list1 + list)
print(1997 in list1)
for x in list1: print(x)

list1 = ['physics', 'chemistry', 1997, 2000]
list2 = [1, 2, 3, 4, 5, 6, 7]
print(list1 == list2)
print(len(list1))
print(max(list2))
print(min(list2))
'''
list1 = ['physics', 'chemistry', 1997, 2000]
list2 = [1, 2, 3, 4, 5, 6, 7]
print(list2.count(1))
print(list2.append(8))
print(list1.extend(list2))
print(list2.index(3))