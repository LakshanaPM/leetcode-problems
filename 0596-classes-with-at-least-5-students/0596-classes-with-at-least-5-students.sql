# Write your MySQL query statement below
select class from Courses group by 1 HAVING COUNT(student) > 4 ;