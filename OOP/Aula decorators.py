class Pessoa:
  def __init__(self):
    self.__nome = ""
    self.__cpf = ""

  def set_nome(self, nome):
    self.__nome = nome
  def set_cpf(self, cpf):
    self.__cpf = cpf

  def get_nome(self):
    return self.__nome
  def get_cpf(self):
    return self.__cpf

  # Decorator
  @property
  def nome(self):
    return self.__nome
    
  @nome.setter
  def nome(self, nome):
    self.__nome = nome
  
  @property
  def cpf(self):
    return self.__cpf
    
  @cpf.setter
  def cpf(self, cpf):
    self.__cpf = cpf

  def exibe_dados(self):
    print("Olá " + self.__nome + " CPF: " + self.__cpf)

class Aluno(Pessoa):
  def __init__(self):
    super().__init__()
    self.__ra = ""
  
  def set_ra(self, ra):
    self.__ra = ra
    
  def get_ra(self):
    return self.__ra

class Professor(Pessoa):
  def __init__(self):
    super().__init__()
    self.__funcional = ""
    self.__disciplina = ""

  def set_funcional(self, funcional):
    self.__funcional = funcional
  def set_disciplina(self, disciplina):
    self.__disciplina = disciplina

  def get_funcional(self):
    return self.__funcional
  def get_disciplina(self):
    return self.__disciplina

a1 = Aluno()
a1.set_nome("Luis")
a1.set_cpf("9876543210")
a1.set_ra("5555555")
a1.exibe_dados()
print(a1.get_ra(), a1.get_nome(), a1.get_cpf())

p1 = Professor()
p1.set_nome("Tanaka")
p1.set_cpf("4455667788")
p1.set_funcional("6666666")
p1.set_disciplina("poo")
print(p1.get_nome(), p1.get_cpf(), p1.get_funcional(), p1.get_disciplina())

# Usando Decorators
a2 = Aluno()
a2.nome = "Teste"
a2.cpf = "1122334455"

print(a2.nome)
print(a2.cpf)