# 🏗️ Unidad 3: Arquitectura Modular y Estructuras de Datos

---

## 1. 🧩 Modularidad: Comunicación entre Módulos

### 1.1. Paso por Valor (Copia de Argumentos)
Cuando pasas una variable por valor, la función no recibe la variable real, sino una réplica exacta de su contenido. Es como si le entregaras a alguien una fotocopia de un documento: esa persona puede rayar o romper la fotocopia, pero tu documento original en casa seguirá intacto.

* **¿Para qué sirve?**: Permite procesar información de forma local dentro de un bloque de código sin alterar el estado del flujo principal 
* **¿Cómo se usa?**: El sistema asigna un espacio temporal en la memoria para que la función trabaje exclusivamente con esos datos mientras esté activa 


**💻 Codigo en C junto con su ejecucion: Lógica de Copia**

Como se observa el valor original NO se modifica dentro del programa principal.

<img width="1160" height="642" alt="1" src="https://github.com/user-attachments/assets/28e61300-7e4f-4e73-9403-eb06f4b55baf" />

---

### 1.2. Paso por Referencia (Gestión de Punteros)
* **¿Qué es?**: Consiste en proporcionar la ubicación física (dirección de memoria) de la variable original mediante punteros y el operador `&` 
* **¿Para qué sirve?**: Facilita la edición directa de los datos originales desde cualquier función y optimiza el rendimiento al evitar el copiado de estructuras pesadas 
* **¿Cómo se usa?**: Se declara la función para que reciba un puntero y se invoca enviando la dirección específica de memoria de la variable 

---

## 2. 📂 Arreglos (Arrays): Organización Homogénea de Datos

### 2.1. Arreglo Unidimensional (Vectores)
* **¿Qué es?**: Una secuencia de elementos del mismo tipo almacenados de forma contigua en la memoria 
* **¿Para qué sirve?**: Agrupa múltiples valores bajo un único nombre, simplificando el acceso y la manipulación de listas de información .
* **¿Cómo se usa?**: Los elementos se localizan mediante un índice numérico que, en lenguaje C, comienza estrictamente en la posición `0` .




CÓDIGO EN C: Lógica de Vectores</h3>

🖥️ TERMINAL: Visualización de Elementos</h3>

---

### 2.2. Arreglo Bidimensional (Matrices)
* **¿Qué es?**: Una estructura organizada en dos ejes (filas y columnas) que requiere un par de coordenadas para ubicar cualquier dato 
* **¿Para qué sirve?**: Es la herramienta ideal para modelar tablas de datos, hojas de cálculo o sistemas de rejillas .
* **¿Cómo se usa?**: Se recorren y manipulan mediante el uso de dos bucles `for` anidados que actúan sobre cada dimensión 


💻 CÓDIGO EN C: Estructura de Filas y Columnas</h3>
 
🖥️ TERMINAL: Impresión de la Tabla</h3>


---

### 2.3. Arreglo Tridimensional (Cubos)
* **¿Qué es?**: Una extensión de las matrices que incorpora una tercera dimensión o "capa" para manejar volúmenes complejos
* **¿Para qué sirve?**: Permite la representación de objetos en el espacio 3D o el seguimiento de datos tabulares a través del tiempo 
* **¿Cómo se usa?**: Se gestiona a través de tres índices: `[capa][fila][columna]`, requiriendo tres ciclos anidados para su acceso total 


CÓDIGO EN C: Gestión de Capas y Profundidad

TERMINAL: Salida del Cubo de Datos</h3>

---

## 3. ⚠️ Desafíos Encontrados

Esta etapa representó un reto de precisión técnica. La mayor dificultad fue **desmitificar el uso de punteros**; comprender que ya no operaba con etiquetas de variables, sino con su residencia física en la memoria, cambió drásticamente mi esquema mental.

Asimismo, mantener el orden en **estructuras de múltiples dimensiones** fue complejo. Al escalar de matrices a cubos, un error mínimo en los índices puede provocar accesos a memoria inválida, resultando en el cierre inesperado del programa. La sincronización perfecta entre lo que el programa envía y lo que la función espera requiere una planificación meticulosa.

---

## 4. 💡 Reflexión Crítica

Considero que esta unidad marca una evolución en mi perfil como programador. Pasar del código lineal al **diseño de sistemas modulares** me permite construir software como si fueran piezas de un rompecabezas: organizadas y reutilizables. He dejado de escribir código de "un solo uso" para desarrollar soluciones con visión de futuro.

El dominio de los arreglos y la gestión por referencia me ha brindado un **control tangible sobre el hardware**. Entender la optimización de recursos y evitar la redundancia de datos es lo que separa a un aficionado de un profesional. Es gratificante saber que ahora puedo dictar cómo mi aplicación consume memoria para que sea ágil y eficiente.

