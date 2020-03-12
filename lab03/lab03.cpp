

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
