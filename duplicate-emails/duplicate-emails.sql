# Write your MySQL query statement below
# 64 % and 100%
SELECT email as Email FROM Person GROUP BY email HAVING COUNT(email) != 1