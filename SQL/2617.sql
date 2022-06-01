SELECT p.name, f.name
FROM providers as f, products as p
WHERE p.id_providers = f.id
AND f.name = 'Ajax SA';
