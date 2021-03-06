// { dg-do compile }

// PR c++/7804
// Floating point formatting in error and warning messages

extern "C" int printf(const char *, ...);

struct S
{
  static const float inf = 1.0f / 0.0f; // { dg-warning "1.0|float|initialization" }
  static const float nan = 0.0f / 0.0f; // { dg-warning "0.0|float|initialization" }
};

int main()
{
  printf("%f\n%f\n", S::inf, S::nan);
  return 0;
}
