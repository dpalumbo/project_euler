class node(object):
  def __init__(self, value, children = []):
    self.value = value
    self.children = children
  def get_max_path(self):
    #assumes each node has 2 children
    if len(self.children) == 0:
      return self.value
    else:
      return max(self.children[0].get_max_path(),self.children[1].get_max_path()) + self.value

#build tree from file, then get max path
i=0
f=open('018.txt','r')
for line in f:
  current_line = [ int(x) for x in line.split() ]
  if len(current_line) > 1:
    next = []
    for idx, item in enumerate(prev):
      if idx == 0:
        node1 = node(current_line[idx])
        node2 = node(current_line[idx+1])
        prev_node = node2
      else:
        node1 = prev_node
        node2 = node(current_line[idx+1])
        prev_node = node2
      item.children = [node1,node2]
      next.append(node1)
      if idx == len(prev) - 1:
        next.append(node2)
    prev = next
  else:
    head = node(int(line))
    prev = [head]

print head.get_max_path()




