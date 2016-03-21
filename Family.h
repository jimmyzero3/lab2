#include <iostream>
using namespace std;
class Family
{
		public:

			int setHeight(float InHeight);

			int setmass(int InMass);

			float getHeight();

			int getMass();

			float CalcBMI(float height, int mass);

			string BMIclass(float BMI);

		private:

			float height;
			int mass;

};
