#include <iostream>
#include <cmath>

using namespace std;

int main()
{

  int numbers[20] =
    { 12, 14, 14, 17, 19, 22, 23, 28, 29, 31, 37, 38, 42, 44, 45, 49, 55, 64,
    82, 87 };

  int array_length = 20;

  int target_num = 29;

  cout << "The target number is: " << target_num << endl;

  int left = 0;
  int right = array_length - 1;

  int current_index = 0;

  int count = 0;

  while ((numbers[current_index] != target_num))
    {

      cout << "Current index: " << current_index << endl;
      cout << "Current number: " << numbers[current_index] << endl;

      current_index = left + (right - left) / 2;

      if (numbers[current_index] < target_num)
	    {

	  left = left + (right - left) / 2;

	  current_index = floor (left + (right - left) / 2);

	    }
      else if (numbers[current_index] > target_num)
	    {

	  right = right - (right - left) / 2;

	  current_index = ceil (left + (right - left) / 2);

    	}

      count++;


      if (numbers[current_index] == target_num)
	    {

	    cout << "At index " << current_index << " the number is: " <<
	    numbers[current_index] << endl;

	    cout << "The target number was found! It is: " <<
	    numbers[current_index] << endl;

    	}

      if (count > log2(array_length))
    	{

	  cout << count << endl;
	  break;

    	}

    }

}
