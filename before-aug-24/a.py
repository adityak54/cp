class MonkeyBananaProblem:
    def __init__(self, room_width, room_height, monkey_x, monkey_y, box_x, box_y, banana_x, banana_y):
        self.room_width = room_width
        self.room_height = room_height
        self.monkey_x = monkey_x
        self.monkey_y = monkey_y
        self.box_x = box_x
        self.box_y = box_y
        self.banana_x = banana_x
        self.banana_y = banana_y

    def is_goal_state(self, state):
        return state[0] == self.banana_x and state[1] == self.banana_y

    def actions(self, state):
        moves = []
        x, y, has_box = state

        # Possible movements
        possible_moves = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]

        for new_x, new_y in possible_moves:
            if 0 <= new_x < self.room_width and 0 <= new_y < self.room_height:
                if (new_x, new_y) != (self.box_x, self.box_y) or has_box:
                    moves.append((new_x, new_y, has_box))

        # Check if the monkey can pick up or put down the box
        if (x, y) == (self.box_x, self.box_y):
            moves.append((x, y, not has_box))

        return moves

    def result(self, state, action):
        return action

    def h(self, state):
        x, y, _ = state
        return abs(x - self.banana_x) + abs(y - self.banana_y)

def monkey_banana_search(problem):
    start_state = (problem.monkey_x, problem.monkey_y, False)
    goal_state = (problem.banana_x, problem.banana_y, False)

    if problem.is_goal_state(start_state):
        return [start_state]

    explored = set()
    frontier = [[start_state]]

    while frontier:
        path = frontier.pop(0)
        state = path[-1]

        if state in explored:
            continue

        for action in problem.actions(state):
            new_state = problem.result(state, action)
            new_path = list(path)
            new_path.append(new_state)

            if problem.is_goal_state(new_state):
                return new_path

            frontier.append(new_path)

        explored.add(state)

    return None

if __name__ == "__main__":
    # Define the room dimensions and initial positions
    room_width = 5
    room_height = 5
    monkey_x = 1
    monkey_y = 1
    box_x = 2
    box_y = 2
    banana_x = 4
    banana_y = 4

    problem = MonkeyBananaProblem(room_width, room_height, monkey_x, monkey_y, box_x, box_y, banana_x, banana_y)

    solution = monkey_banana_search(problem)

    if solution:
        print("Solution:")
        for state in solution:
            x, y, has_box = state
            print(f"Monkey at ({x}, {y}) with {'box' if has_box else 'no box'}")
    else:
        print("No solution found.")
