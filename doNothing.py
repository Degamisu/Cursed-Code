class TaskManager:
    def __init__(self):
        self.tasks = []

    def add_task(self, task):
        self.tasks.append(task)

    def execute_tasks(self):
        print("Executing something:")
        for task in self.tasks:
            task()

def do_nothing():
    pass

def do_nothing_twice():
    do_nothing()
    do_nothing()

def do_nothing_with_style():
    print("Executing stylish something...")
    do_nothing()

def main():
    manager = TaskManager()

    manager.add_task(do_nothing_twice)
    manager.add_task(do_nothing_with_style)

    print("Attempting to accomplish a meaningful something...")
    manager.execute_tasks()
    print("Something completed successfully!")

if __name__ == "__main__":
    main()
