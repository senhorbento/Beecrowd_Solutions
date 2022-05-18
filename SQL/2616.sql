SELECT c.id, c.name
FROM customers as c
WHERE NOT EXISTS(
    SELECT * 
    FROM locations as l
    WHERE l.id_customers = c.id);
