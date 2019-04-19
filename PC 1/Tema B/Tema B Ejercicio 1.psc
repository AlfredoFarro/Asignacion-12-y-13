Algoritmo TemaBEjercicio1
	Escribir "Ingrese sus años de antiguedad: "
	Leer años
	Escribir "Ingrese su sueldo en soles: "
	Leer sueldo
	Si años>0&&años<=3 entonces 
		bono=sueldo*0.04
		Escribir "Su bono es de S/: " bono
	sino
		si años>3&&años<=5 entonces
			bono=sueldo*0.06
			Escribir "Su bono es de S/: " bono
		SiNo
			si años>5&&años<=10 Entonces
				bono=sueldo*0.10
				Escribir "Su bono es de S/: " bono
			SiNo
				si años>10 Entonces
					bono=sueldo*0.15
					escribir "Su bono es de S/: " bono
				FinSi
			FinSi
		FinSi
		
	FinSi
FinAlgoritmo
