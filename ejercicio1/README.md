## EJERCICIO 1

Encuentre el algoritmo para calcular el término 10 de la secuencia de Fibonacci. Recuerde que los dos primeros números de la serie son 0 y 1. El resto se calcula con la suma de los dos números inmediatos que le preceden.

**LECTURA 1**: Análisis

Encontrar el décimo término de la secuencia.

Cada valor obtenido en la secuencia es la sumatoria del anterior y penúltimo número:
* a(1), b(2), c(3),... d, e, f, g, h, i,... j(10)

Sólo se pide el décimo término de la secuencia, a su vez las entradas son constantes también.
De tal modo que:
* a + b = c   —> 0 + 1 = 1
* b + c = d  —> 1 + 1 = 2
* c + d = e  —> 1 + 2 = 3
* d + e = f  —> 2 + 3 = 5
* e + f = g  —> 3 + 5 = 8
* f + g = h  —> 5 + 8 = 13
* g + h = i   —> 8 + 13 = 21
* h + i = j  —> 13 + 21 = 34

**LECTURA 2**: Entradas

* a = 0 : Entero
* b = 1 : Entero

**LECTURA 3**: Salidas

* c, d, e, f, g, h, i : Entero  //No se mostrarán
* Décimo número de Fibonacci -> j : Entero
* j = 34

## DIAGRAMA DE FLUJO

![DIAGRAMA DEL EJERCICIO 1](/ejercicio1/EJERCICIO1-PRACTICA5-FP-2026-1.drawio.png)

## PSEUDOCÓDIGO

---

![PSEUDOCÓDIGO DEL EJERCICIO 1](/ejercicio1/EJERCICIO1-PRACTICA5-FP-2026-1.pseudo.png)

---
