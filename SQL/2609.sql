SELECT c.name, SUM(p.amount) 
FROM products as p INNER JOIN categories as c
ON p.id_categories = c.id
group by c.name;