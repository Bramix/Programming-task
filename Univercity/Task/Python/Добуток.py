'''
https://www.e-olymp.com/uk/problems/28
Добуток

Петрик та Василько готувалися до атестації по темі "Множення". Петрик загадував добуток всіх натуральних чисел від A до B,
а Василько відгадував початкове та кінцеве числа. Допоможіть Васильку знайти значення A та B. 
Якщо розв’язків декілька, виведіть такий, у якого A найменше.

Вхідні дані

Одне число, добуток чисел. 1 < A ≤ B ≤ 10000.

Вихідні дані

В єдиному рядку два числа A та B, записані через пропуск. 

Ліміт часу 1 секунда
Ліміт використання пам'яті 64 MiB

Вхідні дані #1

60

Вихідні дані #1

3 5

'''

s = input("")
n = int(s)
i = 2
res = ""

while (i * i <= n):
	if (n % i == 0):
		j = i
		buf = 1
		while (n % j == 0):
			buf = buf * j
			if (n == buf):
				res = str(i) + " "+ str(j)
				j = n + 1
				i = n + 1
				break;
			j = j + 1

	i = i + 1

if (res == ""):
	res = s + " "+ s

print(res)
