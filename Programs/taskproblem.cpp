#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Task{
public:
    int taskid;
    string taskname;
    int priority;
};

bool compare(Task a, Task b){
    return a.priority < b.priority;
}

void show(Task t){
    cout << t.taskid << " "
         << t.taskname << " "
         << t.priority << endl;
}

int main(){

    vector<Task> tasks;

    tasks.push_back({101,"Cleaning",2});
    tasks.push_back({105,"Sleeping",3});
    tasks.push_back({103,"Studying",1});

    sort(tasks.begin(), tasks.end(), compare);

    for_each(tasks.begin(), tasks.end(), show);

    return 0;
}