# uuid4

A simple C++23 header only implementation of UUID v4

**Note**: This uses std::random_device so keep that in mind, for my use case I wanted something small that does not create collisions within hundreds of thousands and this is good enough for that

## Usage

```cpp
auto uuid = uuid4::generate();
// fa565435-2003-425a-8e47-6aa4eb3cc147
```

## Installation

Copy the file into your project and use it :)

## License

BSD 0-Clause
