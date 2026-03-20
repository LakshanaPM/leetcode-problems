# Write your MySQL query statement below
select t.request_at as Day,
round(
    sum(
        case
            when t.status!='completed' then 1
            else 0.00
        end)/count(*),2
    
) as 'Cancellation Rate'
from Trips t
join Users u ON t.client_id=u.users_id
join Users d ON t.driver_id=d.users_id
where u.banned='No' and d.banned='No' and t.request_at between '2013-10-01' and '2013-10-03'
group by t.request_at;