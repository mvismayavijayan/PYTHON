def merge(dict1,dict2):
    return(dict1.update(dict2))

dict1={'a':4,'b':5}
dict2={'c':6,'d':7}
print(dict1)
print(dict2)
print("after merging",merge(dict1,dict2))
print(dict1)