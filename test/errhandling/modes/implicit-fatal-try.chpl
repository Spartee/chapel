

use ThrowError;

proc propError() throws {
  throwAnError();
}

try {
  propError();
} catch {
  writeln("OK");
}
