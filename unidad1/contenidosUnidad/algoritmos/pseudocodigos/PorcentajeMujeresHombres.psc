Algoritmo PorcentajeMujeresHombres
	
    // Determinar el porcentaje de mujeres y de hombres dado la cantidad para cada categoría
	
    Definir CantMujeres, CantHombres, Total Como Entero
    Definir PorcMujeres, PorcHombres Como Real
	
    Escribir "Ingrese la cantidad de mujeres:"
    Leer CantMujeres
    Escribir "Ingrese la cantidad de hombres:"
    Leer CantHombres
	
    Total <- CantMujeres + CantHombres
	
	PorcMujeres <- (CantMujeres * 100) / Total
	PorcHombres <- (CantHombres * 100) / Total
	
	Escribir "Total de personas: ", Total
	Escribir "Porcentaje de mujeres: ", PorcMujeres, " %"
	Escribir "Porcentaje de hombres: ", PorcHombres, " %"
	

FinAlgoritmo
