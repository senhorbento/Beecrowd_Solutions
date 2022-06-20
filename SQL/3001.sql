(SELECT name as type, CAST('20.0' AS FLOAT) as price
FROM products
WHERE type = 'A'
ORDER BY id DESC)
UNION ALL
(SELECT name as type, CAST('70.0' AS FLOAT) as price
FROM products
WHERE type = 'B'
ORDER BY id DESC)
UNION ALL
(SELECT name as type, CAST('530.5' AS FLOAT) as price
FROM products
WHERE type = 'C'
ORDER BY id DESC);
