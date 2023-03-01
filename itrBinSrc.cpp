#include<iostream>
#include<ctime>
#include<chrono>

using namespace std;
int binary_search(int list[], int length, int item)
{   int p = 0;
    int r = length - 1;
    int q = (r + p) / 2;
    int counter = 0;

    while (p <= r)
    {
        counter++;
        if (list[q] == item)
            return q;
        else
        {
            if (list[q] < item) 
            {
                p = q + 1;
                q = (r + p) / 2;
            }
            else
            {
                r = q - 1;
                q = (r + p) / 2;    
            }
        }
    }
    return -1;
}
int main()
{  
    int list[7],item;

   cout<<"enter the elements of the array:\n";
   for(int i=0;i<7;++i)
    cin>>list[i];

   cout<<"\nEnter element to be searched:\n";
   cin>>item;

   std::chrono::time_point<std::chrono::system_clock> start, end;
   cout<<"element found at index:"<<binary_search(list,7,item)<<"\n";
   end = std::chrono::system_clock::now();
   std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
   return 0;
}