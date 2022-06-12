SELECT c.name, 
cast((((s.math * 2) + (s.specific * 3) + (s.project_plan * 5)) / 10) 
AS DECIMAL(15, 2)) as avg 
FROM candidate as c JOIN
score as s
ON c.id = s.candidate_id
ORDER BY avg DESC;
