def foo() {
  var k = 2;
  forall j in ([i in 1..2] i + k, 1..2) do
    writeln(j);
}

config const b = true;

serial b do foo();
