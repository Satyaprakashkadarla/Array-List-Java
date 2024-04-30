def move_disk(disk, source, destination):
    print(f"Move disk {disk} from rod {source} to rod {destination}")

def tower_of_hanoi(num_disks, source, auxiliary, destination):
    if num_disks == 1:
        move_disk(1, source, destination)  # Base case: Move the only disk from source to destination
        return

    # Move num_disks-1 disks from source to auxiliary using destination as the auxiliary rod
    tower_of_hanoi(num_disks - 1, source, destination, auxiliary)

    # Move the remaining disk from source to destination
    move_disk(num_disks, source, destination)

    # Move the num_disks-1 disks from auxiliary to destination using source as the auxiliary rod
    tower_of_hanoi(num_disks - 1, auxiliary, source, destination)

# Example usage
num_disks = 3
source_rod = 'A'
auxiliary_rod = 'B'
destination_rod = 'C'

print("Tower of Hanoi solution:")
tower_of_hanoi(num_disks, source_rod, auxiliary_rod, destination_rod)
