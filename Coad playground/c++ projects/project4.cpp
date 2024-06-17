#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Task {
    string description;
    bool completed;

    // Default constructor
    Task() : completed(false) {}

    Task(const string& desc, bool comp = false) : description(desc), completed(comp) {}
};

class ToDoList {
private:
    vector<Task> tasks;
    const string filename = "todolist.txt"; // File to store tasks

public:
    void loadTasks() {
        ifstream file(filename);
        if (file.is_open()) {
            Task task;
            while (getline(file, task.description)) {
                file >> task.completed;
                tasks.push_back(task);
                file.ignore(); // Ignore newline after bool
            }
            file.close();
        }
    }

    void saveTasks() {
        ofstream file(filename);
        if (file.is_open()) {
            for (const Task& task : tasks) {
                file << task.description << "\n" << task.completed << "\n";
            }
            file.close();
        }
    }

    void addTask(const string& desc) {
        tasks.emplace_back(desc);
        cout << "Task added: " << desc << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the to-do list." << endl;
        } else {
            cout << "To-Do List:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << "[" << (i + 1) << "] " << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].description << endl;
            }
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            cout << "Removing task: " << tasks[index - 1].description << endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList toDoList;
    toDoList.loadTasks();

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); // Clear newline from buffer
                string taskDescription;
                cout << "Enter task description: ";
                getline(cin, taskDescription);
                toDoList.addTask(taskDescription);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
                size_t index;
                cout << "Enter the index of the task to remove: ";
                cin >> index;
                toDoList.removeTask(index);
                break;
            }
            case 4:
                toDoList.saveTasks();
                cout << "Exiting program. Your tasks are saved.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
