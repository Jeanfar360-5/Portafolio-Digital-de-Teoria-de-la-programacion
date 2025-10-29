Algoritmo RecaudacionBuses
	
    // En un terminal de buses, dos buses con destino a la ciudad de Valdivia, transportan a 35 pasajeros cada bus, el 
	//valor del pasaje para cada bus es diferente y es definido por el dueño del bus. 
	//¿Cuál es la recaudación obtenida para cada bus?

	Definir pasaje1, pasaje2, resultado Como Real;
	Definir can_pasajeros Como entero;
	
	can_pasajeros = 35 
	
	
	Escribir 'ingres el valor de pasaje del primer bus'
	Leer pasaje1
	
	Escribir 'ingres el valor de pasaje del segundo bus'
	Leer pasaje2
	
	pasa_total1 = pasaje1 * can_pasajeros
	pasa_total2 = pasaje2 * can_pasajeros
	
	resultado = pasa_total1 + pasa_total2
	
	Escribir 'La recaudacion total del primer bus: ', pasa_total1
	Escribir 'La recaudacion total del segundo bus: ', pasa_total2
	Escribir 'Y la recaudacion total entre los 2 buses fue de: ', resultado
	
FinAlgoritmo
