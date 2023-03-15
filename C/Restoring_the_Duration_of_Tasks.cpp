#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int Time_task_start[n], Time_to_finish_task[n];
        for (int i = 0; i < n; i++){
            cin >> Time_task_start[i];}
        for (int i = 0; i < n; i++){
            cin >> Time_to_finish_task[i];}
        
        int execution_time[n];
        for (int i = 0; i < n-1; i++)
        {
            if (Time_to_finish_task[i] >= Time_task_start[i+1])
            {  
                Time_task_start[i+1] = Time_to_finish_task[i];
            }
            execution_time[i] = Time_to_finish_task[i] - Time_task_start[i];
        }
        execution_time[n-1] = Time_to_finish_task[n-1] - Time_task_start[n-1];
        for (int i = 0; i < n; i++)
        {
            cout << execution_time[i] << " ";
        }
        cout << endl;
    }
    
    
    system("pause");
    return 0;
}
