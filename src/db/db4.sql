
drop table if exists score;
drop table if exists test;
drop table if exists student;

create table student(
  student_id int,
  primary key(student_id)
);

create table test(
  test_id int,
  primary key(test_id)
);


create table score(
  test_id int,
  student_id int,
  score int,
  foreign key(student_id) references student(student_id),
  foreign key(test_id) references test(test_id)
);

--  select st.student_id, avg(sc.score) av from student st join score sc on st.student_id = sc.student_id group by (st.student_id) order by av desc;
