create table person(driver_id varchar(20) primary key,name varchar(20),address varchar(20));
desc person;
create table car(
reg_num varchar(20)primary key,
model varchar(20),
year int);

create table accident(report_num int primary key,
accident_date date,
location varchar(60));

create table owns(driver_id varchar(20),reg_num varchar(20),foreign key (driver_id) references person(driver_id),
foreign key (reg_num) references car(reg_num));

create table participated(driver_id varchar(20),reg_num varchar(20),report_num int,damage_amount int,foreign key (driver_id) references person(driver_id),
foreign key (reg_num) references car(reg_num),foreign key (report_num) references accident(report_num));

insert into person values('2c','triveni','jayanagar');
insert into person values('2d','lucy','mary road');

insert into car values('abc1','indica','2010');
insert into car values('abc2','indica','2013');
insert into car values('abc3','lambo','2018');
insert into car values('abc4','audi','2019');
insert into car values('ccc6','figo','2016');

insert into accident values('&REG_NUM','&ACCIDENT_DATE','&LOCATION');
insert into accident values(12,'02-JAN-2003','bangalore');
insert into accident values(17,'06-JAN-2007','AP');
insert into accident values(18,'06-JAN-2007','blr');


INSERT INTO participated VALUES('1a','abc1','17','40001');
SELECT * FROM person;
SELECT * FROM car;
SELECT * FROM owns;
SELECT * FROM accident;
SELECT * FROM participated;
desc accident;


update  participated set damage_amount=4000 where report_num=12 and reg_num='abc4';

select count(*) from car where year=2008;
select count(*) from  car where model='indica'; 

