#include <iostream> 
#include "Project1_A05024226_BackwardChaining.h"
#include "Project1_A05024226_ForwardChaining.h"
using namespace std;
using namespace std::chrono;

int main()
{
	string cardio_vascular_disease, input;
	BackwardChaining obj;
	ForwardChaining fc;
	fc.Initialize();
	cout<< "\nHello,\n\nInstructions:\n1. Please input appropriate response to the questions asked below.\n2. In case you do not have an answer for the question, kindly mark it as NA.\n\nWe hope we can assist you in the best possible way!\n\n";
	auto start_bc = high_resolution_clock::now();
	cardio_vascular_disease = obj.analyzeDisease();
	auto stop_bc = high_resolution_clock::now(); 
	auto duration_bc = duration_cast<seconds>(stop_bc - start_bc);
	if (cardio_vascular_disease.compare("No")==0) 
	{
		cout<< "\nWhat a relief! You are good to go.\n";
		cout<< "\nTime taken to diagnose the disease :: "<< duration_bc.count() << " seconds" << endl;
		return 0;
	}
	else if (cardio_vascular_disease.compare("Not Diagnosed")==0)
        {
                cout<< "\nUnfortunately we were unable to diagnose the disease. Please consult a doctor.\n\n";
		cout<< "Time taken to diagnose the disease :: "<< duration_bc.count() << " seconds" << endl;
                return 0;
        }

	cout<<"\nDo not worry, we have got you covered. We will get to you the treatment for "<< cardio_vascular_disease<< " shortly.\n\n";
	auto start_fc = high_resolution_clock::now();
	fc.GetTreatment(cardio_vascular_disease);
	auto stop_fc = high_resolution_clock::now(); 
	auto duration_fc = duration_cast<seconds>(stop_fc - start_fc);
	cout<< "\nGood Luck! We hope you get better soon.";
	cout<< "\n\nTime taken to diagnose the disease :: "<< duration_bc.count() << " seconds" << endl;
	cout<< "Time taken to find the treatment for the disease :: "<< duration_fc.count() << " seconds" << endl;
	return 0;
}



