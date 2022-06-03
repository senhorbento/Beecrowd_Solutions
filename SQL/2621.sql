SELECT p.name
FROM products as p
INNER JOIN providers as f
ON p.id_providers = f.id
WHERE p.amount 
BETWEEN 10 AND 20
AND f.name 
LIKE 'P%';
