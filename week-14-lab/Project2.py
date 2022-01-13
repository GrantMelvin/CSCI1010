# Grant Melvin
# Student Management System Python Version

def menu():
    print("\n")
    print("*** CSCI1010 Student Information Management System ***\n")
    print("1. Add Student\n")
    print("2. Search by ID\n")
    print("3. Grades Statistics\n")
    print("4. Remove a student\n")
    print("5. Print all students\n")
    print("6. Exit the system\n")

def print_array(arr, counter):

    for counter in arr:

        print(counter)

def binary_search(arr, item):
    low = 0
    high = len(arr) - 1

    while low <= high:

        mid = (low + high)

        guess = arr[mid]

        if guess == item:

            return mid

        if guess > item:

            high = mid - 1

        else:

            low = mid + 1

    return 9999

def add_student(ID, name, grade, counter):
    ID.append(counter)
    name
    grade

    print("\n")
    print("The ID for the new student is: ", ID[counter], "\n")

    answer = input("Please enter the name of the student (LastName,FirstName): ")
    name.append(answer)

    answer2 = input("Please enter the grade of the new student: ")
    grade.append(answer2)

def search_student(ID, name, grade, counter):

    print("\n")
    print("Please enter the ID of the student: ")
    search = int(input())

    search_index = int(binary_search(ID, search))

    if search_index == 9999:
        print("\nPlease enter a valid ID!\n")

    else:
        print("\n")
        print("Student ID: ", search, "\n")
        print("Student Name: ", name[search_index], "\n")
        print("Student Grade: ", grade[search_index], "\n")
        print("\n")

def grade_student(ID, name, grade, counter):

    mean = 0.00

    for x in range(len(grade)):

        if grade[x] != 0:

            mean += int(grade[x])

        else:

            continue

    mean /= counter 

    for x in range(len(grade)):

        if x == 0:

            high = int(grade[x])

        else:

            if int(grade[x]) > high:

                high = int(grade[x])

    low = int(grade[1])
    
    for x in range(len(grade)):

        if int(grade[x]) < low and int(grade[x]) != 0:

            low = int(grade[x])



    print("\n")
    print("The Highest Grade is: ", "{:.2f}".format(high), "\n")
    print("The Average Grade is: ", "{:.2f}".format(mean), "\n")
    print("The Lowest Grade is: ", "{:.2f}".format(low))

    mean = 0

def remove_student(ID, name, grade, counter):

    #print_array(ID, counter)
    search = int(input("\nPlease enter the ID of the student you'd like to remove: \n"))

    index_search = binary_search(ID, search)
    #print(index_search, " index search")

    if  index_search != 9999:

        print("\n",name[search], "has been removed\n\n")

        #Debug tool
        #print_array(ID, counter)

        ID[index_search] = 0
        name[index_search] = "0"
        grade[index_search] = 0
            
        return True

    else:

        print("\nPlease enter a valid ID! \n")

        return False

def print_student(ID, name, grade, counter):

    #print_array(ID, counter)
    print("\nID\t", "Name\t", "\t\tGrade", "\n")

    real_counter = counter + 1

    for x in (range(real_counter)): 

        if ID[x] != 0:

            print(ID[x], "\t", name[x], "\t\t", grade[x], "\n")

ID = [0]

grade = [0]

name = ["0"] 

counter = 0

for x in range(100):

    menu()
    option = int(input())
    #print(type(option))

    if option == 1:

        x += 1

        counter += 1

        add_student(ID, name, grade, counter)

    elif option == 2:

        search_student(ID, name, grade, counter)

    elif option == 3:

        grade_student(ID, name, grade, counter)

    elif option == 4:

        result = remove_student(ID, name, grade, counter)

        if result == True:
            x -= 1 

    elif option == 5:

        print_student(ID, name, grade, counter)

    elif option == 6: break

    else:

        print("\nPlease enter a valid option!\n")

