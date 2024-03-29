//
// MODELO DE DADOS
//

class Pais {
  int id;
  String abreviatura;
  String nome;
  String area;
  String capital;
  String historico;

  Pais(
    this.id,
    this.abreviatura,
    this.nome,
    this.area,
    this.capital,
    this.historico,
  );

  factory Pais.fromJson(Map<String, dynamic> json) {
    return Pais(
      json['id']['M49'],
      json['id']['ISO-3166-1-ALPHA-2'],
      json['nome']['abreviado'],
      json['area']['total'],
      json['governo']['capital']['nome'],
      json['historico'],
    );
  }
}