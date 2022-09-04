class Person:
  def __init__(self):
    self._name = ""
    self._age = 0
    
  def set_name(self, name):
    self._name = name
        
  def get_name(self):
  	return self._name
    
  def set_age(self, age):
    self._age = age
        
  def get_age(self):
  	return self._age
    
    
class Student(Person):
  def __init__(self):
    Person.__init__(self)
    self.__ra = "" #information protected
  
  def set_ra(self, ra):
  	self.__ra = ra
  
  def get_ra(self):
  	return self.__ra
  
  def myfunc(self):
    print("Hello my name is " + self._name)
        
p1 = Student()
p1.set_name("dfgdfgfdg")
p1.set_age(65)
p1.set_ra("654")
p1.myfunc()
