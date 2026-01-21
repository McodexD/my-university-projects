# STI Credit Progress Calculator
courses = {
    "Introduction to studies": 10,
    "Programming": 40,
    "SQL": 30,
    "Data Modeling": 25,
    "LIA (Internship)": 100
}

total_points_target = 400 
points_earned = 10 + 40 + 30  # Points from your Passed courses

print(f"--- KTH Progress Report ---")
print(f"Points Earned: {points_earned}")
print(f"Remaining to Graduate: {total_points_target - points_earned}")
print(f"Progress: {(points_earned / total_points_target) * 100}%")