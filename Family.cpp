#include "Family.h"
#include <iostream>


			int Family::setHeight(float InHeight)
				{height=InHeight;}

			int Family::setmass(int InMass)
				{mass=InMass;}

			float Family::getHeight()
				{return height;}

			int Family::getMass()
				{return mass;}

			float Family::CalcBMI(float height, int mass)
				{
						float BMI=0;
						BMI=mass/((height/100)*(height/100));
						return BMI;

				}

			string Family::BMIclass(float BMI)
				{
					string category;
					if(BMI<15) {category="Very severely underweight"; return category;}
					else if(BMI>=15 && BMI<=16) {category="Severely underweight"; return category;}
					else if(BMI>16 && BMI<=18.5) {category="Underweight"; return category;}
					else if(BMI>18.5 && BMI<=25) {category="Normal"; return category;}
					else if(BMI>25 && BMI<=30) {category="Overweight"; return category;}
					else if(BMI>30 && BMI<=35) {category="Obese Class I (Moderately obese)"; return category;}
					else if(BMI>35 && BMI<40) {category="Obese Class II (Severely obese)"; return category;}
					else if(BMI>=40) {category="Obese Class III (Very severely obese)"; return category;}
					return category;

				}