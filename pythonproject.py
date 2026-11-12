
import json
import os

students = []

def load_students():
    global students

    if os.path.exists("students.json"):
        file = open("students.json", "r")
        try:
            students = json.load(file)
        except:
            students = []
        file.close()


def save_students():
    file = open("students.json", "w")
    json.dump(students, file, indent=4)
    file.close()


def menu():
    print("\n------ STUDENT MANAGEMENT SYSTEM ------")
    print("1. Add Student")
    print("2. View All Students")
    print("3. Search by Roll Number")
    print("4. Search by Name")
    print("5. Update Student")
    print("6. Delete Student")
    print("7. Sort Students")
    print("8. Filter by Branch")
    print("9. Total Student Count")
    print("10. Exit")


def add_student():
    print("\n------ ADD STUDENT ------")

    roll = input("Enter Roll Number: ")

    if not roll.isdigit():
        print("Invalid Roll Number!")
        return

    roll = int(roll)

    for student in students:
        if student["roll"] == roll:
            print("Roll Number Already Exists!")
            return

    name = input("Enter Name: ")
    branch = input("Enter Branch: ")
    phone = input("Enter Phone Number: ")

    if not phone.isdigit() or len(phone) != 10:
        print("Invalid Phone Number!")
        return

    email = input("Enter Email: ")

    if "@" not in email or "." not in email:
        print("Invalid Email!")
        return

    semester = input("Enter Semester: ")

    if not semester.isdigit() or int(semester) < 1:
        print("Invalid Semester!")
        return

    address = input("Enter Address: ")

    student = {
        "roll": roll,
        "name": name,
        "branch": branch,
        "phone": phone,
        "email": email,
        "semester": int(semester),
        "address": address
    }

    students.append(student)
    save_students()

    print("Student Added Successfully!")


def view_students():
    print("\n------ STUDENT LIST ------")

    if len(students) == 0:
        print("No Students Found!")
        return

    for student in students:
        print("------------------------------")
        print("Roll Number:", student["roll"])
        print("Name:", student["name"])
        print("Branch:", student["branch"])
        print("Phone:", student["phone"])
        print("Email:", student["email"])
        print("Semester:", student["semester"])
        print("Address:", student["address"])


def search_roll():
    roll = input("Enter Roll Number: ")

    if not roll.isdigit():
        print("Invalid Roll Number!")
        return

    roll = int(roll)

    for student in students:
        if student["roll"] == roll:
            print("Student Found!")
            print(student)
            return

    print("Student Not Found!")


def search_name():
    name = input("Enter Student Name: ").lower()

    found = False

    for student in students:
        if name in student["name"].lower():
            print("Student Found!")
            print(student)
            found = True

    if found == False:
        print("Student Not Found!")


def update_student():
    roll = input("Enter Roll Number: ")

    if not roll.isdigit():
        print("Invalid Roll Number!")
        return

    roll = int(roll)

    for student in students:
        if student["roll"] == roll:

            print("\n1. Update Name")
            print("2. Update Branch")
            print("3. Update Phone")
            print("4. Update Email")
            print("5. Update Semester")
            print("6. Update Address")

            choice = input("Enter Choice: ")

            if choice == "1":
                student["name"] = input("Enter New Name: ")

            elif choice == "2":
                student["branch"] = input("Enter New Branch: ")

            elif choice == "3":
                phone = input("Enter New Phone: ")

                if not phone.isdigit() or len(phone) != 10:
                    print("Invalid Phone Number!")
                    return

                student["phone"] = phone

            elif choice == "4":
                email = input("Enter New Email: ")

                if "@" not in email or "." not in email:
                    print("Invalid Email!")
                    return

                student["email"] = email

            elif choice == "5":
                semester = input("Enter New Semester: ")

                if not semester.isdigit() or int(semester) < 1:
                    print("Invalid Semester!")
                    return

                student["semester"] = int(semester)

            elif choice == "6":
                student["address"] = input("Enter New Address: ")

            else:
                print("Invalid Choice!")
                return

            save_students()
            print("Student Updated Successfully!")
            return

    print("Student Not Found!")


def delete_student():
    roll = input("Enter Roll Number: ")

    if not roll.isdigit():
        print("Invalid Roll Number!")
        return

    roll = int(roll)

    for student in students:
        if student["roll"] == roll:

            print("Student Name:", student["name"])

            confirm = input("Are You Sure? (yes/no): ").lower()

            if confirm == "yes":
                students.remove(student)
                save_students()
                print("Student Deleted Successfully!")
            else:
                print("Delete Cancelled!")

            return

    print("Student Not Found!")


def sort_students():
    if len(students) == 0:
        print("No Students Found!")
        return

    print("\n1. Sort by Name")
    print("2. Sort by Roll Number")

    choice = input("Enter Choice: ")

    if choice == "1":
        students.sort(key=lambda x: x["name"].lower())

    elif choice == "2":
        students.sort(key=lambda x: x["roll"])

    else:
        print("Invalid Choice!")
        return

    save_students()
    print("Students Sorted Successfully!")
    view_students()


def filter_branch():
    branch = input("Enter Branch Name: ").lower()

    found = False

    for student in students:
        if student["branch"].lower() == branch:
            print(student)
            found = True

    if found == False:
        print("No Students Found!")


def student_count():
    print("Total Students:", len(students))


load_students()

while True:
    menu()

    choice = input("Enter Your Choice: ")

    if choice == "1":
        add_student()

    elif choice == "2":
        view_students()

    elif choice == "3":
        search_roll()

    elif choice == "4":
        search_name()

    elif choice == "5":
        update_student()

    elif choice == "6":
        delete_student()

    elif choice == "7":
        sort_students()

    elif choice == "8":
        filter_branch()

    elif choice == "9":
        student_count()

    elif choice == "10":
        print("Thank You! Program Closed.")
        break

    else:
        print("Invalid Choice!")
