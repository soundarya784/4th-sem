create table branch(branch_name varchar(40) primary key,branch_city varchar(40),assets real not null);

create table bankaccount(accno int primary key,branch_name varchar(40),balance real not null,foreign key (branch_name) references branch(branch_name));

create table bankcustomer(customer_name varchar(30) primary key,customer_street varchar(30),customer_city varchar(30));

create table depositor(customer_name varchar(30) ,accno int primary key,foreign key(customer_name) references bankcustomer(customer_name),
foreign key(accno) references bankaccount(accno));

create table loan(loan_num int primary key,branch_name varchar(40),amount real not null,foreign key(branch_name) references branch(branch_name));
create table borrower(loan_num int primary key,customer_name varchar(30),foreign key(loan_num) references loan(loan_num),foreign key(customer_name) references bankcustomer(customer_name));
desc branch;
insert into branch values('sbi_chamrajpet','bangalore',50000);
insert into branch values('sbi_residenctroad','bangalore',10000);
insert into branch values('sbi_shivajiroad','bangalore',20000);
insert into branch values('sbi_parlomentroad','delhi',10000);
insert into branch values('sbi_jantarmantar','delhi',20000);

desc loan;
insert into bankaccount values(5,'sbi_jantarmantar','4000');
select * from depositor;
select * from bankaccount;
insert into bankcustomer values('ravi','prithvi_rd','delhi');
insert into depositor values('ravi',5);
insert into loan values(5,'sbi_jantarmantar',5000);

insert into borrower values(5,'ravi');
select * from borrower;


SELECT customer_name
            FROM depositor d,account a
            WHERE d.accno=a.accno
            AND a.branch_name='Main'
            GROUP BY d.customer_name
            HAVING COUNT(d.customer_name)>=2;
            
 SELECT d.customer_name
             FROM account a,branch b,depositor d
             WHERE b.branch_name=a.branch_name AND
             a.accno=d.accno AND
             b.branch_city='c3'
             GROUP BY d.customer_name
             HAVING COUNT(distinct b.branch_name)=(
                SELECT COUNT(branch_name)
                FROM branch
                WHERE branch_city='c3');
                
DELETE FROM account WHERE branch_name IN(SELECT branch_name FROM branch WHERE branch_city='c5')

