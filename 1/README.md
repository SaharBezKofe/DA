# Условие
Требуется разработать программу, осуществляющую ввод пар «ключ-значение», их упорядочивание по возрастанию ключа указанным алгоритмом сортировки за линейное время и вывод отсортированной последовательности.

Вариант задания определяется типом ключа (и соответствующим ему методом сортировки) и типом значения:

## Сортировка подсчётом.

Тип ключа: числа от 0 до 65535.

Тип значения: строки переменной длины (до 2048 символов).

## Формат входных данных
На каждой непустой строке входного файла располагается пара «ключ-значение», в которой ключ указан согласно заданию, затем следует знак табуляции и указано соответствующее значение.

## Формат результата
Выходные данные состоят из тех же строк, что и входные, за исключением пустых и порядка следования.

## Ввод
0 xGfxrxGGxrxMMMMfrrrG   
65535 xGfxrxGGxrxMMMMfrrr   
0 xGfxrxGGxrxMMMMfrr   
65535 xGfxrxGGxrxMMMMfr

## Вывод
0  xGfxrxGGxrxMMMMfrrrG   
0 xGfxrxGGxrxMMMMfrr   
65535 xGfxrxGGxrxMMMMfrrr   
65535 xGfxrxGGxrxMMMMfr

# P.S.: нельзя применять STL
