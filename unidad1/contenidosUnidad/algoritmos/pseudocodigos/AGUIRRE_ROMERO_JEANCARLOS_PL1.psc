Algoritmo AGUIRRE_ROMERO_JEANCARLOS_PL1
	// Un estudiante desea calcular su �ndice de Masa Corporal
	// (IMC) para saber si su peso est� dentro de lo normal.
	// El IMC se calcula con la siguiente f�rmula:
	// IMC= Peso/(altura^2)
	// Se debe ingresar el peso y la altura del usuario
	Definir peso, altura, imc Como Real
	Escribir 'Programa para calcular el Indice de Masa Corporal'
	Escribir 'Ingrese su peso en Kilogramos:'
	Leer peso
	Escribir 'Ingrese altura en metros:'
	Leer altura
	imc <- peso/altura^2
	Escribir 'Su Indice de Masa Corporal es: ', imc
FinAlgoritmo
