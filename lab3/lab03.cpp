<<<<<<< HEAD
﻿
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
||||||| e5d3427... delete lab3
=======
﻿

#include <iomanip>
#include <conio.h>

using namespace std;


int main()
{		
#pragma region
	float 
	tsk2_x= 3, 
	tsk2_y;
		
	double
		tsk3_t,
		tsk3_u,
		tsk3_k = 4,
		tsk3_a = 4.1,
		tsk3_x = 5e-5,

		tsk4_t,
		tsk4_u,
		tsk4_k = 4,
		tsk4_x = 2e-4,
		tsk4_a = 8.1,

		tsk5_p,
		tsk5_q,
		tsk5_t = 6,
		tsk5_y = -1.2,
		tsk5_x = 0.4e6;
#pragma endregion variable

#pragma region
	printf("\nTask 2\n\n");

	tsk2_y = tsk2_x * tsk2_x + sin(tsk2_x);

	printf("y = %f\n\n", tsk2_y);

	system("pause");
#pragma endregion -------------TASK 2----------------
#pragma region
	
	printf("\n\nTask 3\n");

	tsk3_t = 2 * tan(tsk3_k) / tsk3_a + log(3 + tsk3_x) + exp(tsk3_x);
	tsk3_u = sqrt(tsk3_t + 1) - sin(tsk3_x) * cos(tsk3_t);

	printf("\nt = %f\nu = %f \n\n", tsk3_t, tsk3_u);
	

	system("pause");
#pragma endregion -------------TASK 3----------------
#pragma region
	
	printf("\nTask 4\n\nNumber task choice from table\n");

	tsk4_t = 2 * tsk4_k / tsk4_a + log(2 + tsk4_x);

	tsk4_u = sqrt(tsk4_k - 1) / (tsk4_t + 1);

	printf("\nt = %f\nu = %f\n\n", tsk4_t, tsk4_u);

	system("pause");
#pragma endregion -------------TASK 4----------------
#pragma region
	
	printf("\n\nTask 5\n");

	tsk5_p = 2.6 * tsk5_t + cos(tsk5_y / (3 * tsk5_x + tsk5_y));
	tsk5_q = sin(tsk5_t) / cos(tsk5_t);

	printf("\np = %f\nq = %f\n\n", tsk5_p, tsk5_q);
	

	system("pause");
	
#pragma endregion -------------TASK 5----------------

}
>>>>>>> parent of e5d3427... delete lab3
