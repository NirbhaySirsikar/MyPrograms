graph = {
    'A': ['B', 'C', 'E', 'F', 'H'],
    'B': [],
    'C': ['D'],
    'D': [],
    'E': [],
    'F': ['G'],
    'G': [],
    'H': ['M', 'N', 'I'],
    'I': ['J', 'K'],
    'J': ['L'],
    'K': [],
    'L': [],
    'M': [],
    'N': ['P'],
    'P': ['Q'],
    'Q': ['R'],
    'R': ['W', 'T'],
    'T': [],
    'W': []
}

visited = []
queue = []


def bfs(visited, graph, node):
    visited.append(node)
    queue.append(node)

    while queue:
        s = queue.pop(0)
        print(s,end=" ")

        for neighbour in graph[s]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)


bfs(visited, graph, 'A')
