Algoritmo TemaBEjercicio1
	Escribir "Ingrese sus a�os de antiguedad: "
	Leer a�os
	Escribir "Ingrese su sueldo en soles: "
	Leer sueldo
	Si a�os>0&&a�os<=3 entonces 
		bono=sueldo*0.04
		Escribir "Su bono es de S/: " bono
	sino
		si a�os>3&&a�os<=5 entonces
			bono=sueldo*0.06
			Escribir "Su bono es de S/: " bono
		SiNo
			si a�os>5&&a�os<=10 Entonces
				bono=sueldo*0.10
				Escribir "Su bono es de S/: " bono
			SiNo
				si a�os>10 Entonces
					bono=sueldo*0.15
					escribir "Su bono es de S/: " bono
				FinSi
			FinSi
		FinSi
		
	FinSi
FinAlgoritmo
