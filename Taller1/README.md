## Taller Inicial de Compilación, Ejecución y Uso de Optimizadores

Luis Andrés Gonzalez Corzo - 2201493
Valentina Galeano Castro - 2191692

## Introducción

En álgebra lineal numérica, el método de Jacobi es un algoritmo iterativo para determinar las soluciones de un sistema de ecuaciones lineales estrictamente diagonalmente dominante. Se resuelve cada elemento diagonal y se ingresa un valor aproximado. Luego, el proceso se repite hasta que converge. Este algoritmo es una versión simplificada del método de transformación de Jacobi de diagonalización de matrices.

## Implementación

1. Compilelo usando usando gcc y ejecutelo.

![jacobicodec1](https://github.com/luis3132/HPC/assets/99009069/8574dd11-bb9d-47ae-9651-09d1900f0a84)

`No se pudo medir el tiempo porque el tiempo de compilación fué 0 y al hacer la resta con 0 es igual.`

2. Use las opciones -01, -02 y -03 generando un ejecutable, por ejemplo de cada manera: suejecutable01.exe ¿Que observa en el comportamiento del código tanto al compilarlo como al ejecutar?

![nue](https://github.com/luis3132/HPC/assets/99009069/f0c809d6-c261-4c60-9b56-9d0bac60bf2c)

3. ¿Que pasa si usa las opciones -O, -O0, -Ofast -Og y Oz?

`Aparentemente no contamos con los permisos para ejecutar esos comandos con guane, incluso al intentar con permisos de root.`

![WhatsApp Image 2024-02-27 at 10 07 46 PM](https://github.com/luis3132/HPC/assets/99009069/9dfd6632-0244-401e-81af-f710d7d87691)

![WhatsApp Image 2024-02-27 at 10 07 25 PM](https://github.com/luis3132/HPC/assets/99009069/cd235531-a681-40f4-ac5c-ab5725f0cda4)

4. Busqué por internet un código de ejemplo simple que use punteros y repita los puntos del 1 al 3.

  (El archivo secuencial.cpp tiene el código que usa punteros) Aquí se reflejan los resultados.
  
![WhatsApp Image 2024-02-27 at 11 03 02 PM](https://github.com/luis3132/HPC/assets/99009069/c03d636b-b7b4-4cff-b0be-8ebf9f3efa58)

`Sin optimización.`

![WhatsApp Image 2024-02-27 at 11 06 47 PM](https://github.com/luis3132/HPC/assets/99009069/3d7a4886-5071-4080-9d24-51116b3f1713)

`Con O1.`

![WhatsApp Image 2024-02-27 at 11 08 19 PM](https://github.com/luis3132/HPC/assets/99009069/29449213-772d-4a0e-bfdb-08b06a27beb4)

`Con O2.`

![WhatsApp Image 2024-02-27 at 11 09 41 PM](https://github.com/luis3132/HPC/assets/99009069/ea74592a-842d-451d-9bd4-51dd797d7312)

`Con O3.`

  ![WhatsApp Image 2024-02-27 at 11 10 31 PM](https://github.com/luis3132/HPC/assets/99009069/c4fbc66e-f5d8-40bb-bc5b-50464218e43d)

