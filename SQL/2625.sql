SELECT SUBSTRING(cpf, 1, 3 ) || '.' || 
SUBSTRING(cpf, 4, 3 ) || '.' || 
SUBSTRING(cpf, 7, 3) || '-' || 
SUBSTRING(cpf, 10, 2) as CPF
FROM natural_person;
