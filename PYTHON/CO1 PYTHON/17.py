dic={'sree':5,'aru':20,'nandu':17}
l=list(dic.items())
l.sort()
d=dict(l)
print("ascending is:",d)
l=list(dic.items())
l.sort(reverse=True)
d=dict(l)
print("descending is :",d)