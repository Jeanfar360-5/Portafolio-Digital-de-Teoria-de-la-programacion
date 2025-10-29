Algoritmo SueldoAsesor3Meses

	// Se necesita calcular el sueldo de un asesor, 
	//este trabajó tres meses en la empresa y su sueldo mensual debe ser solicitado por el usuario.
	
	Definir SueldoMensual, SueldoTotal Como Real
	Definir Meses Como Entero
	Meses <- 3
	
	Escribir "Ingrese el sueldo mensual del asesor:"
	Leer SueldoMensual
	
	SueldoTotal <- SueldoMensual * Meses

	Escribir "El sueldo total por ", Meses, " meses es: ", SueldoTotal

FinAlgoritmo
