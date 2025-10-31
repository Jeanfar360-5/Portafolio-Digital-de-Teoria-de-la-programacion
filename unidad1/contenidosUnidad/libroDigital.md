# 📚 Contenido de la Unidad 1: Fundamentos y bases de la programacion 🧠

***

## 1. Algoritmos, Pseudocódigo y Diagrama de Flujo

El **algoritmo** es la base del pensamiento computacional: una secuencia finita y ordenada de reglas para resolver un problema [1]. Su estudio es vital porque permite a los desarrolladores priorizar la **solución conceptual** sobre la implementación técnica, lo cual es un factor clave en la calidad final del software [2].

Para modelar esta solución abstracta, se utilizan dos herramientas principales:
1.  **Pseudocódigo:** Un lenguaje intermedio, **independiente del lenguaje de programación**, que usa estructuras sintácticas similares al código para describir la lógica [3].
2.  **Diagrama de Flujo:** La **representación gráfica** del algoritmo, que usa símbolos estandarizados y líneas de flujo para mostrar la secuencia de ejecución [1].
A continuacion le mostraremos un ejemplo en pseudocodigo y diagrama de flujo:

**Pseudocodigo**


 <img width="1228" height="516" alt="image" src="https://github.com/user-attachments/assets/8aa8e22c-35bd-4397-8528-c7b6bc75949b" />

 * Aqui explicamos, como calcular el vuelto de una persona a traves de una resta. 
 
 * Los pasos estan señalados, definivos los comentarios del autor como con "//".

**Diagrama de flujo**


<img width="685" height="923" alt="image" src="https://github.com/user-attachments/assets/71a5e05d-4cf3-457d-94b2-1c8608f0128c" />


* Este es el mismo proble representado en Pseudocodigo.
* Aqui se identifica mejor los datos de entrada y salida.

 
 ---
 

> **Otros Ejemplos de ejercicios realizados en PseInt**
    1. [ 💻 Carpeta con archivos realizados en PseInt ](contenidosUnidad/algoritmos/pseudocodigos)

---

## 2. Programación por Bloques

La Programación por Bloques (ej. Scratch o Blockly) es una metodología educativa que utiliza **piezas visuales (bloques)** para representar comandos [4]. Este enfoque elimina la principal barrera inicial, la **sintaxis textual** [5].

Al enfocarse en el ensamblaje visual, el estudiante puede concentrarse directamente en la **Lógica de Control** y la **Abstracción** de conceptos [4]. Es una herramienta efectiva para desarrollar el **pensamiento computacional** en etapas tempranas y facilitar una transición más suave a lenguajes basados en texto [5].

**Ejemplo de progrmacion de bloques**

<img width="1459" height="681" alt="image" src="https://github.com/user-attachments/assets/70f728b3-fe03-438b-84ec-b722f57a4ca2" />


* Esto fue usado en Blockly, aqui les dejo el link por si quieren probarlo:[Blocky](https://blockly.games/?lang=es)
* En este trabajo necesitabamos, ordenar los bloques para hacer que el muñequito llegue a la ubicacion.

  
>**Acceso a un pdf, con mas imagenes que tratan de lo mismo:**
 [ ⏹️ Ejercicios Resueltos de Programacion por Bloques ](contenidosUnidad/programacionBloques)

 
---

## 3. Ejemplos de Algoritmos Lineales/Secuenciales

El estudio práctico de los algoritmos secuenciales, que son la base de la secuencia de control (**Entrada/Proceso/Salida**), es crucial para consolidar la habilidad de programación. Aquí redactaremos un ejemplo práctico en: **Pseudocódigo**, **Diagrama de Flujo** y **Lenguaje de Programación C**.

### Primer Ejemplo: Conversión de Moneda (Dólar a Soles, Pesos, Euros)

**Pseudocodigo**

* Aquí se plantea una conversión de moneda de dólar a: **soles**, **pesos** y **euros**.

<img width="734" height="537" alt="Pseudocódigo para la conversión de moneda de dólar a soles, pesos y euros." src="https://github.com/user-attachments/assets/19498840-0113-4460-874f-8c59b81ea079" />

**Diagrama de flujo**

* Es el mismo proceso que se realizó en el pseudocódigo: calcular la conversión de moneda, respecto a soles, euros y pesos.

<img width="487" height="860" alt="Diagrama de flujo para la conversión de moneda." src="https://github.com/user-attachments/assets/bf760000-8b19-4f9d-bd3e-551feda0820f" />

**Lenguaje de programacion C**

* Al igual que en los ejemplos anteriores, aquí utilizamos el mismo objetivo transformado a **Programación C**.

<img width="860" height="530" alt="Código fuente del algoritmo de conversión de moneda en lenguaje C." src="https://github.com/user-attachments/assets/34224e23-a6a7-4533-a355-a0308243f975" />

* **Declaraciones Iniciales:** En C, el inicio del algoritmo requiere:
    * `#include <stdio.h>` (para la entrada y salida de datos).
    * `int main() { ... }` (función principal). Las llaves cierran el algoritmo.
* **Regla de Sintaxis:** Cada instrucción del algoritmo debe terminar en **punto y coma (`;`)**, de lo contrario, no se puede compilar ni ejecutar.
* **Compilación:** Para compilar, se usa el código: `gcc (nombre_del_archivo.c) -o (nombre_del_ejecutable)`.
* **Ejecución:** Para ejecutar, se usa el código: `.\ (nombre_del_ejecutable).exe`.
    * **Ejemplo de Consola:**
        
<img width="1020" height="272" alt="Ejemplo de compilación y ejecución del código C en la consola." src="https://github.com/user-attachments/assets/5119c2ff-b387-4b59-aaf7-d143ad37c39d" />

* Los dos primeros comandos son ejemplos de los códigos para **Compilar** y **Ejecutar**. Luego, se muestra el código ya ejecutado con sus respuestas.

---

## 📊 Prueba de Escritorio (Traza)

La prueba de escritorio (también conocida como **traza**) es una técnica fundamental que consiste en simular el funcionamiento del algoritmo paso a paso en una tabla. Se utiliza para verificar su lógica y los valores que toman las variables.

| Datos de Entrada (Input) | Proceso (Cálculos) | Datos de Salida (Output) |
| :--- | :--- | :--- |
| **Valor del Dólar** (`dolar`) | `soles` = `dolar` \* **3.38** | `soles` |
| | `euros` = `dolar` \* **0.86** | `euros` |
| | `pesos` = `dolar` \* **18.45** | `pesos` |

***Nota de Coherencia:*** *Las constantes usadas en la conversión son ejemplos didácticos. Los valores reales de las tasas de cambio varían diariamente.*

### Segundo Ejemplo: Conversión de Temperatura (Celsius a Fahrenheit)

Este ejemplo también sigue la estructura secuencial básica (**Entrada/Proceso/Salida**) y es ideal para ilustrar una operación matemática sencilla y directa. Se enfoca en la conversión de una unidad de temperatura común (Celsius) a otra (Fahrenheit).

**Pseudocodigo**

* Aquí se presenta el algoritmo de conversión, donde se solicita la temperatura en grados Celsius y se aplica la fórmula matemática para obtener el resultado en Fahrenheit: **$F = C \times 1.8 + 32$**.

<img width="1000" height="436" alt="Pseudocódigo para la conversión de temperatura de Celsius a Fahrenheit." src="https://github.com/user-attachments/assets/23122415-9557-47da-b7e6-159fb030d113" />

**Diagrama de flujo**

* El diagrama de flujo representa visualmente los pasos secuenciales: la entrada de la variable (Celsius), el proceso de cálculo y la salida del resultado (Fahrenheit).

<img width="586" height="681" alt="Diagrama de flujo para la conversión de temperatura." src="https://github.com/user-attachments/assets/05c31660-0b7f-4fea-9117-d07675bb858f" /> 

**Programacion en C**

* La implementación en C utiliza variables de tipo **coma flotante** (`float` o `double`) para manejar números decimales, esenciales en cálculos como este donde se usan valores como `1.8` y `32`.

<img width="668" height="317" alt="Código fuente del algoritmo de conversión de temperatura en lenguaje C." src="https://github.com/user-attachments/assets/95aae229-52df-4a8b-8f2b-cf57699ef2bc" />

* **Reglas de Sintaxis y Uso en C:**
    * **Inclusión de Librería:** Se inicia con `#include <stdio.h>` para usar funciones de entrada/salida como `printf()` y `scanf()`.
    * **Función Principal:** El código se ejecuta dentro de la función `int main() { ... }`.
    * **Declaración de Variables:** Es obligatorio declarar el tipo de datos de las variables (`float` en este caso) antes de usarlas.
    * **Fin de Sentencia:** Cada instrucción (lectura, cálculo o impresión) debe terminar con un **punto y coma (`;`)**.
* **Compilación y Ejecución (Recordatorio):**
    * **Compilación:** `gcc (nombre_del_archivo.c) -o (nombre_del_ejecutable)`
    * **Ejecución:** `.\ (nombre_del_ejecutable).exe`

---

## 📊 Prueba de Escritorio (Traza)

Esta tabla verifica la lógica de conversión usando la fórmula **$F = C \times 1.8 + 32$**.

| Datos de Entrada (Input) | Proceso (Cálculos) | Datos de Salida (Output) |
| :--- | :--- | :--- |
| La cantidad de grados **Celsius** (`celsius`) | `fahrenheit` = `celsius` $\times$ **1.8 + 32** | **Fahrenheit** (`fahrenheit`) |

---

## 4. ⚠️ Principales Dificultades en la Aplicación

## 🚧 Principales Dificultades en la Aplicación de los Contenidos  

---

### ⚠️ **Problemas Identificados**

#### 🔹 1. Abstracción de problemas a algoritmos  
La transición de un problema descrito en lenguaje natural a un algoritmo formal representó un desafío significativo, especialmente en la identificación de los pasos secuenciales necesarios.

#### 🔹 2. Sintaxis vs. lógica en pseudocódigo  
Aunque el pseudocódigo es más flexible que un lenguaje de programación, mantener una estructura clara y consistente mientras se desarrolla la lógica del programa requirió práctica constante.

#### 🔹 3. Traducción a lenguaje de programación  
La adaptación del pseudocódigo a sintaxis específica de lenguajes como **Python** o **C** generó confusiones, particularmente en la declaración de variables y el manejo de entrada/salida de datos.

#### 🔹 4. Depuración de errores secuenciales  
Identificar y corregir errores en programas con estructuras puramente secuenciales demostró la importancia de verificar cada paso antes de proceder al siguiente.

#### 🔹 5. Compilación y Ejecución  
Al momento de terminar un algortimo en el lenguaje de programacion C, este siempre se tendra que compilar y ejecutar a travez de comandos lo que fue complicado en un prinicpio ya que es un comando estructurado que no debe contener errores.

---

## 5. 💡 Reflexión Crítica de los Aprendizajes

Al comenzar la unidad, el aprendizaje se dividió en dos partes claras. Primero, con los **diagramas de flujo** y la **programación en bloques**, pude enfocarme solo en la lógica; esto ayudó muchísimo a entender el orden de los pasos que el programa debe seguir.
Sin embargo, esta facilidad inicial creó un contraste fuerte al pasar a la **Programación en C**. Aquí la dificultad fue real, C exige una precisión absoluta en su escritura, en cómo se declara cada variable y se usa cada comando. Mi frustración inicial fue tener que  ser tan riguroso. Aprendí que la herramienta es nueva, sí, pero el verdadero desafío es la complejidad en si que impone el lenguaje.
Finalmente, la frase ambiciosa "Si lo puedes imaginar, lo puedes programar" me impulsa. Aprender esto y lo antes mencionado es una base de aprendizaje sólida para un futuro.

---

### 🔙 Navegación Principal

* [🔝 Volver al Inicio del Índice (Unidad 1)](Unidad1.md#inicio)
* [◀️ Volver al Apartado 2: Tareas Entregadas](Unidad1.md#2--tareas-entregadas-evidencias-de-aplicación)
* [🏠 Regresar a la Página Principal Global](Introduccion.md)
