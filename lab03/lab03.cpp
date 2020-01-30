
#include <iomanip>
#include <conio.h>


#define TASK_2_X 3
#define TASK_3_K 4
#define TASK_3_A 4.1
#define TASK_3_X 5e-5
#define TASK_4_K 4
#define TASK_4_X 2e-4
#define TASK_4_A 8.1
#define TASK_5_T 6
#define TASK_5_Y -1.2
#define TASK_5_X 0.4e6


using namespace std;

int main()
{		


#pragma region
	float 

	task_2_y;
		
	double
		task_3_t,
		task_3_u,


		task_4_t,
		task_4_u,


		task_5_p,
		task_5_q,
#pragma endregion variable

#pragma region
	printf("\nTask 2\n\n");

	task_2_y = TASK_2_X * TASK_2_X + sin(TASK_2_X);

	printf("y = %f\n\n", task_2_y);

	system("pause");
#pragma endregion -------------TASK 2----------------
#pragma region
	
	printf("\n\nTask 3\n");

	task_3_t = 2 * tan(TASK_3_K) / TASK_3_A + log(3 + TASK_3_X) + exp(TASK_3_X);
	task_3_u = sqrt(task_3_t + 1) - sin(TASK_3_X) * cos(task_3_t);

	printf("\nt = %f\nu = %f \n\n", task_3_t, task_3_u);
	

	system("pause");
#pragma endregion -------------TASK 3----------------
#pragma region
	
	printf("\nTask 4\n\nNumber task choice from table\n");

	task_4_t = 2 * TASK_4_K / TASK_4_A + log(2 + TASK_4_X);

	task_4_u = sqrt(TASK_4_K - 1) / (task_4_t + 1);

	printf("\nt = %f\nu = %f\n\n", task_4_t, task_4_u);

	system("pause");
#pragma endregion -------------TASK 4----------------
#pragma region
	
	printf("\n\nTask 5\n");

	task_5_p = 2.6 * TASK_5_T + cos(TASK_5_Y / (3 * TASK_5_X + TASK_5_Y));
	task_5_q = sin(TASK_5_T) / cos(TASK_5_T);

	printf("\np = %f\nq = %f\n\n", task_5_p, task_5_q);
	

	system("pause");
	
#pragma endregion -------------TASK 5----------------

}
