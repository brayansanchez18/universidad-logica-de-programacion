#include <stdio.h>

int main(int argc, char *argv[]) {
	int diaSemana;
	printf("proporcione dia de la semana \n");
	scanf("%d", &diaSemana);
	
	switch (diaSemana) {
	case 1:
		printf("lunes");
		break;
	case 2:
		printf("martes");
		break;
	case 3:
		printf("miercoles");
		break;
	case 4:
		printf("jueves");
		break;
	case 5:
		printf("viernes");
		break;
	case 6:
		printf("sabado");
		break;
	case 7:
		printf("domingo");
		break;
	default:
		printf("valor erroneo la semana solo tiene 7 dias");
		break;
	}
	return 0;
}

