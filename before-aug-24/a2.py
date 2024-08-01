def max_attainable_elements(t, test_cases):
    for _ in range(t):
        n, sets = test_cases[_]
        
        # Count the frequency of each element
        frequency_counter = {}
        for i in range(n):
            _, elements = sets[i]
            for element in elements:
                if element in frequency_counter:
                    frequency_counter[element] += 1
                else:
                    frequency_counter[element] = 1
        
        # Select elements with frequency 1
        max_attainable = 0
        for element, frequency in frequency_counter.items():
            if frequency == 1:
                max_attainable += 1
        
        print(max_attainable)

# Input reading
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    sets = []
    for _ in range(n):
        set_info = list(map(int, input().split()))
        sets.append((set_info[0], set_info[1:]))
    test_cases.append((n, sets))

# Output
max_attainable_elements(t, test_cases)
