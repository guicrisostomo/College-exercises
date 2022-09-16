CREATE DATABASE "ADS_16_09_22"
TEMPLATE = template0
ENCODING 'UTF-8'
CONNECTION LIMIT 100;

CREATE TABLE tb_empregados(
	rg				VARCHAR(11),
	nome			VARCHAR(60),
	idade			INTEGER,
	CONSTRAINT pk_tb_emp_rg PRIMARY KEY(rg)
);

SELECT * FROM tb_empregados

CREATE TABLE tb_pedidos(
	numero			INTEGER,
	ds_pedido		VARCHAR(30),
	dt_pedido		DATE,
	CONSTRAINT pk_tb_pedidos_dr PRIMARY KEY (numero)
);

CREATE TABLE tb_itens(
	NroPedido		INTEGER,
	NroItem			INTEGER,
	produto			VARCHAR(60),
	quantidade		INTEGER,
	CONSTRAINT pk_tb_itens_NroPedido_NroItem PRIMARY KEY (NroPedido, NroItem),
	CONSTRAINT fk_tb_items_NroPedido FOREIGN KEY (NroPedido)
		REFERENCES tb_pedidos(numero)
);

DROP TABLE tb_empregados;

CREATE TABLE tb_empregados(
	Rg				VARCHAR(11),
	Nome			VARCHAR(30),
	idade			INTEGER,
	planoSaude		VARCHAR(30),
	rua				VARCHAR(30),
	numero			INTEGER,
	cidade			VARCHAR(30),
	CONSTRAINT pk_tb_empregados_rg PRIMARY KEY (Rg)
);

CREATE TABLE tb_telefones(
	rg				VARCHAR(11),
	nr_telefone		VARCHAR(14),
	CONSTRAINT pk_tb_telefones_Rg_Numero PRIMARY KEY (rg, nr_telefone),
	CONSTRAINT fk_tb_telefones_Rg FOREIGN KEY (rg)
		REFERENCES tb_empregados(Rg)
);

CREATE TABLE tb_servidores(
	cpf				VARCHAR(11),
	nm_servidor		VARCHAR(60),
	CONSTRAINT pk_tb_servidores_cpf PRIMARY KEY (cpf)
);

CREATE TABLE tb_funcionarios(
	cpf				VARCHAR(11),
	ds_funcao		VARCHAR(40),
	CONSTRAINT pk_tb_funcionarios_cpf PRIMARY KEY (cpf),
	CONSTRAINT fk_tb_funcionarios_cpf FOREIGN KEY (cpf)
		REFERENCES tb_servidores(cpf)
);

CREATE TABLE tb_professores(
	cpf				VARCHAR(11),
	titulacao		VARCHAR(15),
	categoria		VARCHAR(10),
	CONSTRAINT pk_tb_professores_cpf PRIMARY KEY (cpf),
	CONSTRAINT fk_tb_professores_cpf FOREIGN KEY (cpf)
		REFERENCES tb_servidores(cpf)
);

CREATE TABLE tb_pessoas(
	codigo			INTEGER,
	nm_pessoa		VARCHAR(60),
	CONSTRAINT pk_tb_pessoas_codigo PRIMARY KEY (codigo)
);

CREATE TABLE tb_cnh(
	nr_cnh			INTEGER,
	dt_expedicao	DATE,
	validade		DATE,
	categoria		VARCHAR(5),
	codigo			INTEGER CONSTRAINT uq_tb_cnh_codigo UNIQUE,
	dt_retirada		DATE,
	
	CONSTRAINT pk_tb_cnh_nr PRIMARY KEY (nr_cnh),
	CONSTRAINT fk_tb_cnh_codigo FOREIGN KEY (codigo)
		REFERENCES tb_pessoas(codigo)
);

CREATE TABLE tb_homens (
	rg				VARCHAR(11),
	nm_homem		VARCHAR(60),
	CONSTRAINT pk_tb_homens_rg PRIMARY KEY (rg)
);

CREATE TABLE tb_mulheres (
	rg				VARCHAR(11),
	nm_mulher		VARCHAR(60),
	CONSTRAINT pk_tb_mulheres_rg PRIMARY KEY (rg)
);

CREATE TABLE tb_casamento (
	rg_homem		VARCHAR(11),
	rg_mulher		VARCHAR(11) CONSTRAINT uq_tb_casamentos_rg_mulheres UNIQUE,
	dt_casamento	DATE,
	CONSTRAINT pk_tb_casamentos_rg_homem PRIMARY KEY (rg_homem),
	CONSTRAINT fk_tb_casamentos_rg_homem FOREIGN KEY (rg_homem)
		REFERENCES tb_homens(rg),
	CONSTRAINT fk_tb_casamentos_rg_mulher FOREIGN KEY (rg_mulher)
		REFERENCES tb_mulheres(rg)
);

DROP TABLE tb_empregados CASCADE;

CREATE TABLE tb_departamentos(
	cod_depto		INTEGER,
	nm_depto		VARCHAR(40),
	CONSTRAINT pk_tb_depto_cod_depto PRIMARY KEY (cod_depto)
);

CREATE TABLE tb_empregados(
	cpf				VARCHAR(11),
	nm_empregado	VARCHAR(60),
	cod_depto		INTEGER CONSTRAINT nm_tb_emp_cod_depto NOT NULL,
	dt_lotacao		DATE,
	CONSTRAINT pk_tb_emp_cpf PRIMARY KEY (cpf),
	CONSTRAINT fk_tb_emp_cod_depto FOREIGN KEY (cod_depto)
		REFERENCES tb_departamentos(cod_depto)
);

DROP TABLE tb_pessoas CASCADE;

CREATE TABLE tb_pessoas (
	rg				VARCHAR(11),
	nm_pessoa		VARCHAR(60),
	CONSTRAINT pk_tb_pessoas_rg PRIMARY KEY (rg)
);

CREATE TABLE tb_automoveis(
	chassi			VARCHAR(17),
	modelo			VARCHAR(10),
	ano				INTEGER,
	CONSTRAINT pk_tb_automoveis_chassi PRIMARY KEY (chassi)
);

CREATE TABLE tb_posses(
	rg				VARCHAR(11),
	chassi			VARCHAR(17),
	dt_compra		DATE,
	CONSTRAINT pk_tb_posses_chassi PRIMARY KEY (chassi),
	CONSTRAINT fk_tb_posses_rg FOREIGN KEY (rg)
		REFERENCES tb_pessoas(rg),
	CONSTRAINT fk_tb_posses_chassi FOREIGN KEY (chassi)
		REFERENCES tb_automoveis (chassi)
);

DROP TABLE tb_empregados CASCADE;

CREATE TABLE tb_empregados (
	rg				VARCHAR(11),
	nm_empregado	VARCHAR(60),
	CONSTRAINT pk_tb_empregados_rg PRIMARY KEY (rg)
);

CREATE TABLE tb_projetos(
	cod_projeto		INTEGER,
	nm_projeto		VARCHAR(40),
	CONSTRAINT pk_tb_projetos_cod_proj PRIMARY KEY (cod_projeto)
);

CREATE TABLE tb_participacao(
	rg				VARCHAR(11),
	codigo			INTEGER,
	dt_inicio		DATE,
	CONSTRAINT pk_tb_participacao_rg_cod PRIMARY KEY (rg, codigo),
	CONSTRAINT fk_tb_participacao_rg FOREIGN KEY (rg)
		REFERENCES tb_empregados(rg),
	CONSTRAINT fk_tb_participacao_cod FOREIGN KEY (codigo)
		REFERENCES tb_projetos(cod_projeto)
);