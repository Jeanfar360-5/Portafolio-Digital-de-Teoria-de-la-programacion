Algoritmo Calculo_de_notas
	
	//Primero debemos declarar las Variables que ocuparemos 
	Definir certamen1, certamen2, notaLaboratorio, certamen3 Como Real
    notaFinal = 60
	//Luego le pediremos al usuario que ingrese los datos que necesitamos 
	Escribir 'Ingrese la nota del certamen 1:'
	Leer certamen1
	Escribir 'Ingrese la nota del certamen 2:'
	Leer certamen2
	Escribir 'Ingrese la nota de laboratorio:'
	Leer notaLaboratorio
	//Procedemos a realizar los respectivos calculos con la formula
	certamen3 = (((notaFinal - (notaLaboratorio * 0.3)) / 0.7 )* 3) - (certamen1 + certamen2)
	//Presentamos los resultados en Pantalla
	Escribir 'La nota mínima necesaria en el tercer certamen para aprobar es: ', certamen3
	
FinAlgoritmo
