class Publisher:
    def __init__(self,pub_id,pub_name):
        self.pub_id = pub_id
        self.pub_name = pub_name
class Book(Publisher):
    def __init__(self,pub_id,pub_name,pub_title,pub_author):
        super().__init__(pub_id,pub_name)
        self.pub_title = pub_title
        self.pub_author = pub_author
class Python(Book):
    def __init__(self,pub_id,pub_name,pub_title,pub_author,price,noofpages):
        super().__init__(pub_id,pub_name,pub_title,pub_author)
        self.price = price
        self.noofpages = noofpages
    def display(self):
        print("book information")
        print(f"publisher id : {self.pub_id}")
        print(f"publisher name : {self.pub_name}")
        print(f"book title : {self.pub_title}")
        print(f"author name : {self.pub_author}")
        print(f"book price : {self.price}")
        print(f"book pages : {self.noofpages}")

pub_id = int(input("enter the publisher id : "))
pub_name = input("enter the publisher name : ")
pub_title = input("enter the book title : ")
pub_author = input("enter the book author : ")
price = int(input("enter the book price : "))
noofpages = input("enter the book pages : ")
result = Python(pub_id,pub_name,pub_title,pub_author,price,noofpages)
result.display()