# 🚀 Fundamentos del Control de Flujo en Programación

## 1. ⚙️ Estructuras Condicionales: El Arte de Decidir 🚦

Las **estructuras condicionales** constituyen uno de los elementos centrales de la programación, ya que permiten que un programa seleccione distintos caminos según la situación. Gracias a ellas, el código puede ejecutar acciones diferentes dependiendo de si una **condición lógica** resulta verdadera (true) o falsa} (false), moldeando así el flujo general de ejecución.

---

### 1.1. Condicional Simple (`if`) 🌱

El **Condicional Simple (`if`)** representa la decisión más básica dentro de un algoritmo. Evalúa una expresión booleana y ejecuta su bloque asociado **solo cuando** dicha condición es verdadera. En caso contrario, el programa continúa sin entrar en el bloque.

**Sintaxis en C:**  
if (condición) { // código }

**Ejemplo de codigo en C**

<img width="565" height="502" alt="image" src="https://github.com/user-attachments/assets/05018432-9094-43a3-85d3-f73bf7919cc8" />




**Ejemplo en diagrama de flujo**


<img width="562" height="393" alt="image" src="https://github.com/user-attachments/assets/360ca1fb-d65a-479d-a7e6-e146a6bb2e99" />

---

### 1.2. Condicional Doble (`if-else`) ➡️

El **Condicional Doble (`if-else`)** genera una división en dos rutas posibles. Si la condición es **verdadera**, se ejecuta un bloque; si es **falsa**, se ejecuta un bloque alterno. Esto garantiza que siempre se ejecute una de las opciones disponibles.

**Sintaxis en C:**  
if (condición) { // código A } else { // código B }

**Ejemplo de codigo en C**

<img width="672" height="542" alt="image" src="https://github.com/user-attachments/assets/0d0fdaf2-1711-4287-b2d9-ad278dd3b4ef" />



**Ejemplo en diagrama de flujo**


<img width="941" height="370" alt="image" src="https://github.com/user-attachments/assets/3d09cc3b-a86a-4b80-87e0-0c8647e92e10" />

---

### 1.3. Condicional Múltiple (`if-else if-else`) y Selectiva (`switch`) 🎯

#### A. Condicional Múltiple Anidada (`if-else if-else`) 🪜

Esta estructura permite evaluar **varias condiciones** de forma secuencial. El programa ejecuta el bloque correspondiente a la **primera condición verdadera**, lo que aporta flexibilidad y orden lógico en decisiones más complejas.

**Ejemplo de codigo en C**

<img width="646" height="706" alt="image" src="https://github.com/user-attachments/assets/e4e11146-aea2-45ff-a992-96769dcb69f0" />



**Ejemplo en diagrama de flujo**

<img width="1508" height="656" alt="image" src="https://github.com/user-attachments/assets/90b77814-49d8-4983-bb07-b9b3c9a413d3" />


---

#### B. Condicional Selectiva (`switch`) 🎛️

Adecuada cuando la decisión depende del **valor exacto de una variable**. Se recomienda utilizar `break` en cada `case` para evitar que el flujo avance a los siguientes bloques.


**Ejemplo de codigo en C**

<img width="570" height="857" alt="image" src="https://github.com/user-attachments/assets/d887d83c-591c-4bda-9d29-27b90aa9e200" />


**Ejemplo en diagrama de flujo**

<img width="1302" height="425" alt="image" src="https://github.com/user-attachments/assets/a8239400-59e7-40b9-aff2-aeac95f29cae" />



---

---

## 2. 🔁 Estructuras Repetitivas (Ciclos o Bucles) 🔄

Los **bucles** permiten repetir un conjunto de instrucciones mientras se cumpla una condición, facilitando procesos que requieren iteraciones continuas o controladas.

---

### 2.1. Bucle `while` (Pre-condicional) 🛑

Es un ciclo **pre-condicional**, lo que implica que la condición se evalúa **antes** de cada repetición. Puede ejecutarse **ninguna o varias veces**, siendo útil cuando se desconoce cuántas iteraciones serán necesarias.

**Sintaxis en C:**  
`while (condición) { // código }`


**Ejemplo de codigo en C**

<img width="592" height="507" alt="image" src="https://github.com/user-attachments/assets/0f89fd44-3a48-44f8-9d48-e111307f0e86" />


**Ejemplo en diagrama de flujo**

<img width="522" height="747" alt="image" src="https://github.com/user-attachments/assets/9ff4a202-37c7-4938-9905-50e9906bcaac" />


---

### 2.2. Bucle `do-while` (Post-condicional) ➡️

En este caso, la verificación se realiza **al finalizar** cada iteración, por lo que el bloque se ejecuta **como mínimo una vez**. Es común en menús o validaciones de entrada.

**Sintaxis en C:**  
`do { // código } while (condición);`

**Ejemplo de codigo en C**

<img width="641" height="441" alt="image" src="https://github.com/user-attachments/assets/5aa78723-faf6-4e56-8ff7-b9336ea07528" />


**Ejemplo en diagrama de flujo**

<img width="655" height="622" alt="image" src="https://github.com/user-attachments/assets/7e9ff8bd-aa56-4ce3-bfea-268aa068f153" />


---

### 2.3. Bucle `for` (Conteo Fijo) 🔢

Se emplea cuando el número de repeticiones está previamente definido. Su estructura permite agrupar la inicialización, la condición y la actualización en una sola línea.

**Sintaxis en C:**  
`for (inicialización; condición; actualización) { // código }`

**Ejemplo de codigo en C**

<img width="761" height="498" alt="image" src="https://github.com/user-attachments/assets/25995af3-6d93-4094-ab85-1fe21543834f" />



**Ejemplo en diagrama de flujo**

<img width="927" height="745" alt="image" src="https://github.com/user-attachments/assets/2df47d6f-d2c0-4832-96dc-d00889e10f30" />


---

---

## 3. 🧩 Ejercicio Integrador: Condicionales y Repetitivas 🚀

### 3.1. Descripción del Problema 📝



### 3.2. Diagrama de flujo:



### 3.3. Código en lenguaje C:



### 3.4. Verificación:

---

---

## 4. ⚠️ Principales Dificultades en la Aplicación



---

## 5. 💡 Reflexión Crítica de los Aprendizajes



---

### 🔙 Navegación Principal
