#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100;

struct Task {
    string description;
    bool isDone;
};

void addTask(Task tasks[], int &numTasks) {
    if (numTasks < MAX_TASKS) {
        cout << "Enter Task Description: " << endl;
        cin.ignore();
        getline(cin, tasks[numTasks].description);
        tasks[numTasks].isDone = false;
        numTasks++;
        cout << "Task Added." << endl;
    } else {
        cout << "Task list is full. Cannot add more tasks." << endl;
    }
}

void viewTasks(Task tasks[], int numTasks) {
    cout << "Tasks:" << endl;
    for (int i = 0; i < numTasks; i++) {
        cout << (i + 1) << ".";
        if (tasks[i].isDone) {
            cout << "[Completed] - ";
        } else {
            cout << "[Pending] - ";
        }
        cout << tasks[i].description << endl;
    }
}

void markTaskDone(Task tasks[], int numTasks) {
    cout << "Enter the task number to mark as done: " << endl;
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= numTasks) {
        tasks[taskNumber - 1].isDone = true;
        cout << "Task marked as done." << endl;
    } else {
        cout << "Invalid task number" << endl;
    }
}

void removeTask(Task tasks[], int &numTasks) {
    cout << "Enter the task number to remove: " << endl;
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= numTasks) {
        for (int i = taskNumber - 1; i < numTasks; i++) {
            tasks[i] = tasks[i + 1];
        }
        numTasks--;
        cout << "Task removed." << endl;
    } else {
        cout << "Invalid task number" << endl;
    }
}

int main() {
    Task tasks[MAX_TASKS];
    int numTasks = 0;

    while (true) {
        cout << "*******************To-Do List Application*************************" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Done" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Quit" << endl;

        int choice;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks, numTasks);
                break;
            case 2:
                viewTasks(tasks, numTasks);
                break;
            case 3:
                markTaskDone(tasks, numTasks);
                break;
            case 4:
                removeTask(tasks, numTasks);
                break;
            case 5:
                cout << "************************GoodBye!*******************************" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
