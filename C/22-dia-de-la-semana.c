#include <stdio.h>

int main(int argc, char *argv[]) {
	int diaSemana;
	printf("proporciona el dia de la semana: \n");
	scanf("%d", &diaSemana);
	
	if (diaSemana == 1) {
		printf("lunes");
	} else if (diaSemana == 2) {
		printf("martes");
	} else if (diaSemana == 3) {
		printf("miercoles");
	} else if (diaSemana == 4) {
		printf("jueves");
	} else if (diaSemana == 5) {
		printf("viernes");
	} else if (diaSemana == 6) {
		printf("sabado");
	} else if (diaSemana == 7) {
		printf("domingo");
	} else {
		printf("valor erroneo, la semana solo tiene 7 dias");
	}
	return 0;
}

