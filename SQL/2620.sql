SELECT c.name, o.id
FROM orders as o
INNER JOIN customers as c
ON o.id_customers = c.id
WHERE o.orders_date BETWEEN '2016-01-01' 
AND '2016-06-30';
