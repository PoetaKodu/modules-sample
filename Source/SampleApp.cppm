module;

#include <iostream>

export module SampleApp;

export namespace sample_app
{

auto run(int argc, char* argv[]) -> int;

}

module :private;

namespace sample_app
{

auto run(int argc, char* argv[]) -> int
{
  std::cout << "Hello, World from modules sample app!\n";
  return 0;
}

}