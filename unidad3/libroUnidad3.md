# 🏗️ Unidad 3: Arquitectura Modular y Estructuras de Datos

---

## 1. 🧩 Modularidad: Comunicación entre Módulos

### 1.1. Paso por Valor (Copia de Argumentos)
En C la invocación de funciones implica que el paso de parámetros es, con carácter general y predefinido, por valor. De acuerdo con lo que indicamos cuando hablamos de pseudocódigo, esto impide que la variable transferida sea manipulada dentro de una función, ya que la función únicamente recibe un valor (no manipulable) copia del contenido de la variable.

Hay una excepción a este comportamiento: el paso de arrays como parámetros de función. Por motivos históricos, los arrays son transferidos por variable, de modo que cualquier manipulación del contenido del array que sea realizada dentro de la función implicará la modificación del array original pasado como parámetro.

* **¿Cual es su proposito**: El propósito es permitir que las funciones intercambien datos entre sí para procesar información externa, garantizando que el código sea modular, reutilizable y que el programador tenga control sobre la seguridad o la eficiencia de la memoria.
* **¿Cual es su proceso interno?**: El sistema asigna un espacio temporal en la memoria para que la función trabaje exclusivamente con esos datos mientras esté activa 


**💻 Codigo en C junto con su ejecucion: **

Como se observa el valor original NO se modifica dentro del programa principal.

<img width="1160" height="642" alt="1" src="https://github.com/user-attachments/assets/28e61300-7e4f-4e73-9403-eb06f4b55baf" />

---

### 1.2. Paso por Referencia (Gestión por Punteros)
El paso de parámetros en C está construido de tal modo que los valores resultantes de evaluar los parámetros formales se copian en los parámetros formales. Como los parámetros formales son variables distintas de los parámetros reales, los cambios efectuados en los parámetros foramales no afectan para nada a los parámetros reales. Esto es cierto e insalvable, pero disponemos de un auxiliar sumamente interesante: los punteros. En efecto, considérese el siguiente fragmento de código

* **¿Cual es su proposito?**: Facilita la edición directa de los datos originales desde cualquier función y optimiza el rendimiento al evitar el copiado de estructuras pesadas 
* **¿Cual es su proceso interno?**: Se declara la función para que reciba un puntero y se invoca enviando la dirección específica de memoria de la variable 

**💻 Codigo en C junto con su ejecucion: **

<img width="1250" height="803" alt="2" src="https://github.com/user-attachments/assets/7cd30e49-fec5-4f39-baf7-eac92a302dca" />

---

## 2. 📂 Arreglos (Arrays): Organización Homogénea de Datos

### 2.1. Arreglo Unidimensional (Vectores)
El concepto de array en el lenguaje C coincide con el que se expone en el curso Bases de la programación nivel I de aprenderaprogramar.com cuando se habla de pseudocódigo. Veremos ahora cómo declarar arrays estáticos de una dimensión. La gestión de arrays multidimensionales la veremos más adelante.

Los arrays dinámicos no están permitidos en C, aunque hay formas para conseguir almacenar información simulando un array dinámico.

* **¿Cual es su proposito?**: Agrupa múltiples valores bajo un único nombre, simplificando el acceso y la manipulación de listas de información .
* **¿Cual es su proceso interno?**: Los elementos se localizan mediante un índice numérico que, en lenguaje C, comienza estrictamente en la posición `0` .

**💻 Codigo en C junto con su ejecucion: **

<img width="1237" height="892" alt="3" src="https://github.com/user-attachments/assets/4db6d61c-f531-4506-a78e-9e3a6be94e68" />

---

### 2.2. Arreglo Bidimensional (Matrices)
Es una matriz de datos de tamaño m x n que contiene información almacenada del mismo tipo de datos (int, float, char, etc). Este tipo de arreglos necesita dos subíndices para ser declarado o para acceder a la información de un elemento en específico, a diferencia de una matriz unidimensional que solo necesita un subíndice. 

Un arreglo bidimensional es utilizado cuando queremos guardar mucha información sobre un tipo de dato en específico en distintas filas. Por ejemplo, si quieres crear una base de datos donde queremos guardar varios nombres, en un vector no se podría hacer pues solo podrías guardar un nombre, en cambio, con un arreglo bidimensional puedes guardar un nombre por fila, por lo tanto, si creamos varias filas podemos guardar varios nombres.

* **¿Cual es su proposito?**: Es la herramienta ideal para modelar tablas de datos, hojas de cálculo o sistemas de rejillas .
* **¿Cual es su proceso interno?**: Se recorren y manipulan mediante el uso de dos bucles `for` anidados que actúan sobre cada dimensión 

**💻 Codigo en C junto con su ejecucion: **

<img width="847" height="808" alt="4" src="https://github.com/user-attachments/assets/c62021a5-ad97-4270-b834-5c6208abc414" />

<img width="1275" height="567" alt="5" src="https://github.com/user-attachments/assets/863b065e-1232-46ef-a24d-f8f97d5a278e" />

---

### 2.3. Arreglo Tridimensional (Cubos)

Un array multidimensional es como tener varios arrays combinados. Los arrays pueden tener diferentes formas y tamaños, y en esta sección nos centraremos en uno de los arrays multidimensionales más comunes: los arrays bidimensionales (arrays 2D) y los arrays tridimensionales (arrays 3D).

Piense en un array regular como una lista o una secuencia de elementos. Ahora bien, un array multidimensional es como tener varias listas organizadas en una cuadrícula o tabla.
Una matriz multidimensional es como un conjunto de casillas dispuestas en filas y columnas. Cada casilla contiene un número, y se puede encontrar una casilla específica indicando su número de fila y de columna.
  
* **¿Cual es su proposito?**: Permite la representación de objetos en el espacio 3D o el seguimiento de datos tabulares a través del tiempo 
* **¿Cual es su proceso interno?**: Se gestiona a través de tres índices: `[capa][fila][columna]`, requiriendo tres ciclos anidados para su acceso total 

**💻 Codigo en C junto con su ejecucion: **

<img width="858" height="907" alt="6" src="https://github.com/user-attachments/assets/1bff5993-0568-4915-a465-bae9de1de3f9" />

<img width="1303" height="472" alt="7" src="https://github.com/user-attachments/assets/78242faa-ed3b-44b8-abf6-2401e4378a3d" />

---

## 3. ⚠️ Desafíos Encontrados

Esta etapa representó un reto de precisión técnica. La mayor dificultad fue **desmitificar el uso de punteros**; comprender que ya no operaba con etiquetas de variables, sino con su residencia física en la memoria, cambió drásticamente mi esquema mental.

Asimismo, mantener el orden en **estructuras de múltiples dimensiones** fue complejo. Al escalar de matrices a cubos, un error mínimo en los índices puede provocar accesos a memoria inválida, resultando en el cierre inesperado del programa. La sincronización perfecta entre lo que el programa envía y lo que la función espera requiere una planificación meticulosa.

---

## 4. 💡 Reflexión Crítica

Considero que esta unidad marca una evolución en mi perfil como programador. Pasar del código lineal al **diseño de sistemas modulares** me permite construir software como si fueran piezas de un rompecabezas: organizadas y reutilizables. He dejado de escribir código de "un solo uso" para desarrollar soluciones con visión de futuro.

El dominio de los arreglos y la gestión por referencia me ha brindado un **control tangible sobre el hardware**. Entender la optimización de recursos y evitar la redundancia de datos es lo que separa a un aficionado de un profesional. Es gratificante saber que ahora puedo dictar cómo mi aplicación consume memoria para que sea ágil y eficiente.

