[[nodiscard]] int nonDiscardableFunc() {
  return 0;
}

int main() {
  std::ignore = nonDiscardableFunc;
}
