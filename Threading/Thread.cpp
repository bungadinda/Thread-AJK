//5220600025_BungaAdinda_Thread

#include <iostream>
#include <thread>

using namespace std;

//Membuat fungsi untuk memunculkan bilangan Ganjil
void thread_odd()
{
	//for loop untuk bilangan <=30
	for (int x = 1; x <= 30; x++)
	{
		//Menambahkan kondisi untuk bilangan Ganjil
		if (x % 2 != 0)
		{
			//Menampilkan bilangan Ganjil
			cout << endl << "Print ODD Number: " << x << endl;
			//Menambahkan fungsi untuk memberi delay selama 1000ms
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
	}
	cout << endl << "=================ODD Numbers Done===============" << endl;
}


//Membuat fungsi untuk memunculkan bilangan Genap
void thread_even()
{
	//for loop untuk bilangan <=30
	for (int x = 1; x <= 30; x++)
	{
		//Menambahkan kondisi untuk bilangan Genap
		if (x % 2 == 0)
		{
			//Menampilkan bilangan Ganjil
			cout << endl << "Print EVEN Number:  " << x << endl;
			//Menambahkan fungsi untuk memberi delay selama 2500ms
			this_thread::sleep_for(chrono::milliseconds(2500));
		}
	}
	cout << endl << "=================EVEN Numbers Done===============" << endl;
}

int main()
{
	//constructor untuk memanggil fungsi thread_odd
	thread th1(thread_odd);		
	//constructor untuk memanggil fungsi thread_even
	thread th2(thread_even);		

	//method untuk menunggu thread th1 selesai dieksekusi
	th1.join();
	//method untuk menunggu thread th2 selesai dieksekusi
	th2.join();				


	return 0;
}

//5220600025_BungaAdinda_Thread
