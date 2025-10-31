# 📚 Contenido de la Unidad 1: Fundamentos y bases de la programacion 🧠

***

## 0. La Programacion en Base

Como Introduccion a este libro digital primero debemos saber que es la programacion como concepto inicial: La programación es el proceso de analizar, diseñar, codificar o traducir, depurar y mantener el código fuente de los programas computacionales, los cuales son escritos en algún lenguaje de programación (Joyanes, 2008)[1]. 

A partir de este concepto ya podremos iniciar de forma secuancial con los contenidos del libro de forma comoda

***

## 1. Algoritmos, Pseudocódigo y Diagrama de Flujo

Un **algoritmo** se define como un conjunto finito de reglas o instrucciones bien definidas para obtener una salida deseada a partir de un conjunto de entradas [1]. En pocas palabras un algoritmo es una secuencia ordenada de pasos o instrucciones que nos permiten resolver un problema o realizar una tarea concreta. Los algoritmos como tal son los primeros conceptos para abordar la progrmacion como materia de estudio por lo tanto es importante enfatizar el que es y como se implementa dentro del entorno diario.

Siguiendo nuestra secuencia de aprendizaje ahora debemos abordar que es un **Pseudocodigo** y que es un **diagrama de flujo**, conctrtamente:

1. El **pseudocódigo** se utiliza como un medio intermedio entre la descripción informal de un problema y su implementación en un lenguaje de programación, permitiendo un diseño más claro y organizado de los algoritmos [2]. Dicho en palabras propias el Pseudocodigo como tal, es el intermedio entre nuestro lenguaje natural y el leguaje de las maquinas es decir los lengujes de alto nivel, lo que es bastante util para centar las bases de la programacion de forma facil, ya que el pseudocodigo estara en nuestra lengua.
   
2. Los **diagramas de flujo** proporcionan una representación visual de los algoritmos, mostrando la relación entre operaciones, decisiones y el flujo de datos dentro de un proceso [3]. Los diagramas de flujo, son una representacion visual del pseudocodigo, siendo bastnte util para poder entender el como funcionan los algoritmos, es decir, como si se tratase de un cuerpo ordenado de instrucciones, Inicio, desarrollo y final.

Con todos estos conceptos ahora podremos adentrarnos a la programacion en Pseudocodigo con normalidad:

**PSeInt** o por tambien llamado **Pseudocode Interpreter** es una herramienta educativa gratuita diseñada para apoyar el aprendizaje de la programación estructurada mediante el uso de pseudocódigo. Fue creada con el propósito de facilitar la comprensión de los conceptos básicos de programación, permitiendo a los estudiantes practicar la resolución de problemas sin la complejidad de un lenguaje formal[4]. Nosotros como estudiantes, para introducirnos a la programacion utilizamos PSeInt como herramienta de programacion en pseudocodigo, y para demostrar su funcionalidad mostrare un ejemplo de programacion por Pseudodigo en PSeInt:

***

**Pseudocodigo**

<img width="1918" height="997" alt="Captura de pantalla 2025-10-30 234607" src="https://github.com/user-attachments/assets/778cd9c7-3f3c-464e-a0ed-b8131c9099e7" />

 * Este algoritmo tiene la finalidad de calcular el promedio de un estudiante con 3 calificaciones.
   
 * **Funcionamiento de los comandos del algorimo:**
    * **Definir:** Se encarga de declarar las variables, es decir a travez de este podemos definir datos en los cuales luego podremos o definir valores, o que el usuario los defina .
    * **Escribir:** A travez de este comando podemos mostrar dentro del ejecutador de comandos, textos que el usuario podra ver para seguir una orden en conctreto.
    * **Leer:** Si queremos que el usuario guarde un valor dentro de una variable usamos este comando para que lo haga.
    * **Asignar (a=b+c)** Este comando es utilizado para realizar operaciones aritmeticas dentro del algoritmo, ya sean, sumas, restas multiplicaciones, etc.

***

**Diagrama de flujo**


<img width="1918" height="1017" alt="Captura de pantalla 2025-10-30 235149" src="https://github.com/user-attachments/assets/840dfb4a-23c7-417e-9d94-f026713aba97" />

* Aqui se puede ver el Pseudocodigo adaptado automaticamente por PSeInt.
* Como podemos ver cada recuadro tiene una forma y color distinto diferenciando cada comando de forma separada

  
 ---
 
 
> **Otros Ejemplos de ejercicios realizados en PseInt**
    1. [ 💻 Carpeta con archivos realizados en PseInt ](contenidosUnidad/algoritmos/pseudocodigos)

---

## 2. Programación por Bloques

La programación por bloques permite a los aprendices crear programas conectando piezas gráficas que representan instrucciones, promoviendo el pensamiento computacional de manera accesible y visual [4]. La programacion por bloques es bastante util para introducir a la progrmacion junto con el pseudocodigo, ya que la programacion por bloques es visual e intuitiva es bastante funcional para ambitos educativos.

**Un Ejemplo de progrmacion de bloques**

<img width="872" height="430" alt="Imagen1" src="https://github.com/user-attachments/assets/99f19e23-f3b0-447f-94e2-f956ade14dc4" />

* Este ejemplo fue utilizado en la pagina web de Blocky, una pagina de programacion por bloques muy util: [Blocky](https://blockly.games/?lang=es)
* En este ejercicio nuestro trabajo es el ordenar los bloques para hacer que el sujeto en cuestion llegue a su destino.

  
>**Otros ejemplos de Programacion por bloques:**
 [ ⏹️ Ejercicios Resueltos de Programacion por Bloques ](contenidosUnidad/programacionBloques)


---


## 3. Ejemplos de Algoritmos Lineales/Secuenciales

### Ejemplo: Conversión de metros a kilómetros, centímetros y milímetros

**Pseudocodigo**

* Este ejercicio plantea la trasformacion de la unidad de medida de metros a kilómetros, centímetros y milímetros.

<img width="1130" height="563" alt="Captura de pantalla 2025-10-31 001531" src="https://github.com/user-attachments/assets/4ae759dc-04d7-44f6-8083-5c27b6db272d" />

**Diagrama de flujo**

* Es el mismo proceso que se realizó en el pseudocódigo: calcular la conversión de moneda, respecto a soles, euros y pesos.

<img width="757" height="930" alt="Captura de pantalla 2025-10-31 002218" src="https://github.com/user-attachments/assets/abd440af-4ad3-48f5-b1ec-560e33eeb4d2" />

**Lenguaje de programacion C**

* Ahora Procedermos a transformar este algoritmo al lenguaje de **Programación C**.

<img width="860" height="530" alt="Código fuente del algoritmo de conversión de moneda en lenguaje C." src="https://github.com/user-attachments/assets/34224e23-a6a7-4533-a355-a0308243f975" />

* **Declaraciones Iniciales:** En C, el inicio del algoritmo requiere:
    * `#include <stdio.h>` (para la entrada y salida de datos).
    * `int main() { ... }` (función principal). Las llaves cierran el algoritmo.
* **Regla de Sintaxis:** Cada instrucción del algoritmo debe terminar en **punto y coma (`;`)**, de lo contrario, no se puede compilar ni ejecutar.
* **Compilación:** Para compilar, se usa el código: `gcc (nombre_del_archivo.c) -o (nombre_del_ejecutable)`.
* **Ejecución:** Para ejecutar, se usa el código: `.\ (nombre_del_ejecutable).exe`.

* Los dos primeros comandos son ejemplos de los códigos para **Compilar** y **Ejecutar**. Luego, se muestra el código ya ejecutado con sus respuestas.

---

## 📊 Prueba de Escritorio (Traza)

| Metros (entrada) | Fórmula km | Resultado km | Fórmula cm | Resultado cm | Fórmula mm | Resultado mm |
|------------------:|:-----------|--------------:|:-----------|--------------:|:-----------|--------------:|
| 125 | 125 / 1000 | **0.125 km** | 125 * 100 | **12,500 cm** | 125 * 1000 | **125,000 mm** |
| 850 | 850 / 1000 | **0.85 km** | 850 * 100 | **85,000 cm** | 850 * 1000 | **850,000 mm** |
| 3420 | 3420 / 1000 | **3.42 km** | 3420 * 100 | **342,000 cm** | 3420 * 1000 | **3,420,000 mm** |

---

## 📊 Conclusión
El algoritmo realiza correctamente las conversiones de **metros a kilómetros, centímetros y milímetros**, aplicando las fórmulas matemáticas básicas de conversión de unidades.


---

## 4. ⚠️ Principales Dificultades en la Aplicación de los Contenidos  

Al momento de que se presentaron las clases de programacion no fue tan dificil el adaptarme al entorno de aprendizaje ya que, ya poseia conociemientos previos debido a mi formacion bachiller, sin embargo debo admitir que si prente algunas dificultades al momento de probar un nuevo lenguaje de programacion y tuve algunas dificultades al momento de aplicar lo aprendido por ejemplo, una dificultad que tuve al momento de programar en C, fue que al momento de terminar un algortimo, este siempre se tendra que compilar y ejecutar a travez de comandos lo que me fue complicado en un prinicpio ya que es un comando estructurado que no debe contener errores, asi mismo no solo el comando de compilacion tiene una estructura exacta sino tambien por ejemplo el concatenar las variables, ya que se concaten las variables de difernete forma a como se hace en Java o en Python, Sin embargo estas dificultades las pude superar y poco a poco me fui adapatando al nuevo entorno de trabajo el cual fue este nuevo lenguaje de programacion.

---

## 5. 💡 Reflexión Crítica de los Aprendizajes

Como reflexion Critica me gustaria enfatizar en que los aprendizajes fueron utiles y necesarios para que nosotros los estudiantes estemos preparados para este nuevo entorno el cual es la programacion, cada tema abordado dentro de la unidad fue indispensable para forjar los cimientos de la materia y por lo tanto me siento satisficho con los aprendizajes adquiridos duante todo el transcurso de las clases.

---
