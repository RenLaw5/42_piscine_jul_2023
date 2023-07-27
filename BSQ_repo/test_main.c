#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int		*searching(char **matrix, int sizex, int sizey, char obst);
void	print_matrix(char **matrix, int *res, char fill);

int main(void)
{
	int rows = 18;
	int cols = 27;

	// Reserva memoria para las filas (punteros a filas)
	char **matrix = (char **)malloc(rows * sizeof(char *));

	// Reserva memoria para cada fila
	for (int i = 0; i < rows; i++) {
		matrix[i] = (char *)malloc(cols * sizeof(char));
	}

	srand(time(NULL));

	// Inicializa la matriz con los valores deseados
	for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (rand() % 2 == 0)
                matrix[i][j] = 'o';
            else
                matrix[i][j] = '.';
        }
    }
	// Imprime la matriz para verificar que se generó correctamente

	char obst = 'o';
	char fill = 'x';
	int *res = searching(matrix, rows, cols, obst);
	print_matrix(matrix, res, fill);
	printf("\n\n\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", res[i]);
	}
	printf("\n\n\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}

	// Liberar memoria asignada para la matriz y el resultado
	for (int i = 0; i < rows; i++) {
		free(matrix[i]);
	}
	free(matrix);
	system("leaks -q bsq");
	return (0);
}
