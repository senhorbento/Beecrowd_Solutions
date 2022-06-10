SELECT p.name, c.name
FROM categories as c 
INNER JOIN products as p
ON  p.id_categories = c.id
WHERE p.amount > 100 
AND p.id_categories
IN (1, 2, 3, 6, 9)
ORDER BY p.id_categories ASC;
