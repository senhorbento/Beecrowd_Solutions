SELECT p.name, f.name, c.name
FROM products as p
INNER JOIN providers as f 
ON f.id = p.id_providers
INNER JOIN categories as c
ON c.id = id_categories
AND f.name = 'Sansul SA'
AND c.name = 'Imported';
