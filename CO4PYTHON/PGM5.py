class Publisher:
    def __init__(self,publisher):
        self.publisher=publisher
    def display(self):
        print("Publishers name:",self.publisher)
class Book(Publisher):
    def __init__(self,title,author):
        self.title=title
        self.author=author
    def display(self):
        super().display()
        print("Title of the book:",self.title)
        print("Author of the book:",self.author)
class Python(Book):
    def __init__(self,publishers,author,title,price,number):
        self.price=price
        self.noofpages=number
        Book.__init__(self,title,author)
        Publisher.__init__(self,publishers)
    def display(self):
        super().display()
        print("Price of the book:",self.price)
        print("Number of pages in the book",self.noofpages)
b1=Python("SPD","BRIAN JOHNES","PYTHON COOK BOOK:RECIPES FOR MASTERING PYTHON",1500,1220)
b1.display()