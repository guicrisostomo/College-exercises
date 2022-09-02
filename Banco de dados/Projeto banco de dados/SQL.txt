SELECT now();

-- Criação do novo database (BD)
CREATE DATABASE "ADS_02_09_22"
TEMPLATE = template0
ENCODING 'UTF-8'
CONNECTION LIMIT 100;

-- Ciação das tabelas referentes ao modelo lógico
-- 1) tb_curso
-- 		Constraints: Primary Key

CREATE TABLE tb_curso(
cod_curso			INTEGER,
nm					VARCHAR(40),
fg_ativo			INTEGER,
CONSTRAINT pk_tb_curso_cod_curso PRIMARY KEY (cod_curso)
);

SELECT *
FROM tb_curso;

-- Realizando uma carga na tb_curso
INSERT INTO tb_curso(cod_curso,
					 nm_curso,
					 fg_ativo)
VALUES
(10, 'Análise e Desenvolvimento de Sistemas', 1),
(11, 'Gestão de Negócios e Inovação', 1),
(12, 'Sistemas Biomédicos', 1);

-- 2) tb_aluno
-- 		Constraints: - Primary Key
--					 - Foreing Key
--					 - Not Null

CREATE TABLE tb_aluno(
	cod_aluno		INTEGER,
	nm_aluno		VARCHAR(60),
	cod_curso		INTEGER 
					CONSTRAINT nm_tb_aluno_cod_curso NOT NULL,
	fg_ativo		INTEGER,
	CONSTRAINT pk_tb_aluno_cod_aluno PRIMARY KEY(cod_aluno),
	CONSTRAINT fk_tb_aluno_cod_curso FOREIGN KEY(cod_curso)
		REFERENCES tb_curso(cod_curso)
);

-- 4) tb_departamento
-- 		Constraints: - Primary Key
--					 - Foreing Key

CREATE TABLE tb_departamento(
	cod_departamento		INTEGER,
	nm_departamento			VARCHAR(40),
	fg_ativo				INTEGER,
	CONSTRAINT pk_tb_departamento_cod_depto PRIMARY KEY(cod_departamento)
);

-- 4) tb_disciplina
-- 		Constraints: - Primary Key
--					 - Foreing Key
--					 - Not Null

CREATE TABLE tb_disciplina(
	cod_disciplina		INTEGER,
	cod_departamento	INTEGER CONSTRAINT nm_tb_disciplina_cod_depto NOT NULL,
	nm_disciplina		VARCHAR(40),
	creditos			INTEGER,
	fg_ativo			INTEGER,
	CONSTRAINT pk_tb_disciplina_cod_disc PRIMARY KEY(cod_disciplina),
	CONSTRAINT fk_tb_disciplina_cod_depto FOREIGN KEY(cod_departamento)
		REFERENCES tb_departamento(cod_departamento)
);

-- 5) tb_disciplina_curso
-- 		Constraints: - Primary Key (composta)
--					 - Foreing Key (cod_curso, cod_disciplina)

CREATE TABLE tb_disciplina_curso(
	cod_curso					INTEGER,
	cod_disciplina				INTEGER,
	CONSTRAINT pk_tb_dc PRIMARY KEY(cod_curso, cod_disciplina),
	CONSTRAINT fk_tb_dc_cod_curso FOREIGN KEY(cod_curso)
		REFERENCES tb_curso(cod_curso),
	CONSTRAINT fk_tb_dc_cod_disc FOREIGN KEY (cod_disciplina)
		REFERENCES tb_disciplina(cod_disciplina)
);

-- 6) tb_disciplina_pre_requisito
-- 		Constraints: - Primary Key (cod_disciplina_liberada, cod_disciplina_liberadora)
--					 - Foreing Key (cod_disciplina_liberada, cod_disciplina_liberadora)

CREATE TABLE tb_disciplina_pre_requisito(
	cod_disciplina_liberada			INTEGER,
	cod_disciplina_liberadora		INTEGER,
	CONSTRAINT pk_tb_dpr_cod_disc_liberada_liberadora
		PRIMARY KEY(cod_disciplina_liberada, cod_disciplina_liberadora),
	CONSTRAINT fk_tb_dpr_cod_disc_liberada FOREIGN KEY (cod_disciplina_liberada)
		REFERENCES tb_disciplina(cod_disciplina),
	CONSTRAINT fk_tb_dpr_cod_disc_liberadora FOREIGN KEY (cod_disciplina_liberadora)
		REFERENCES tb_disciplina(cod_disciplina)
);