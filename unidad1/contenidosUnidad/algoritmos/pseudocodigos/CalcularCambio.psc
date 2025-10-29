Algoritmo CalcularCambio
	
    // Determinar el cambio que recibirá una persona, 
	//de acuerdo a la cantidad de dinero que dispone y el precio/costo de un producto.
	
    Definir Dinero, Precio, Cambio, Falta Como Real
	

    Escribir "Ingrese la cantidad de dinero que dispone:"
    Leer Dinero
    Escribir "Ingrese el precio del producto:"
    Leer Precio
	
	Cambio <- Dinero - Precio

	Escribir "El cambio a devolver es: ", Cambio
	
FinAlgoritmo
