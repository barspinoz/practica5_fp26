## EJERCICIO 3

Encuentre el algoritmo para calcular el término 10 de la secuencia de Fibonacci. Recuerde que los dos primeros números de la serie son 0 Un número positivo N es un número primo si los únicos enteros positivos que lo dividen son exactamente 1 y N. Indique la forma en que dado un número M, se obtenga y cuente todos los números primos menores a M.

**LECTURA 1**: Análisis

+ El número N positivo es primo.
+ N es primo solo si el ℤ que lo divide es exactamente 1 o N.
+ Obtener los primos menores a M.

**LECTURA 2**: Entradas

* Número M dividido por un ℤ.
  M: Entero

* ℤ exactamente 1 o N.
  ℤ: Entero

**LECTURA 3**: Salidas

* Si M es un número N. N: Entero
* Números primos menores a M. 
  a: Entero
  b: Entero
  c: Entero 
  … 


## DIAGRAMA DE FLUJO

![DIAGRAMA DEL EJERCICIO 1](/ejercicio3/EJERCICIO3-PRACTICA5-FP-2026-1.drawio.png)

## PSEUDOCÓDIGO

---

`INICIO.  Algoritmo Fibonacci`

`  /*Variables de entrada*/`

`  a=0`

`  b=1`

`  n=7`

`  /*Variables de salida*/`

`  actual:REAL`

`  PARA i=0 HASTA =<7 PASO i++ HACER`

`    actual=b+a`

`    a=b`

`    b=actual`

`    IMPRIMIR “El término enésimo de Fibonacci es:” actual`

`  FIN PARA`

`FIN`

---
