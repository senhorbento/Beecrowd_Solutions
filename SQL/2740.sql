(SELECT CAST('Podium: ' AS VARCHAR(20)) || 
CAST(team AS VARCHAR(255)) AS name
FROM league
LIMIT 3)
UNION ALL
(SELECT name
FROM(SELECT CAST('Demoted: ' AS VARCHAR(20)) || 
CAST(team AS VARCHAR(255)) AS name, position
FROM league
ORDER BY position DESC
LIMIT 2) AS name
ORDER BY position);
