# libft
> Some rewritten libc functions

A school project.

## How to use this library

**Note: OSX only**

#### Clone the repo

```shell
git clone https://github.com/joshgelbard/libft
```

#### Build

```shell
cd libft
make
```

## Testing

#### Run the included tests

```shell
cd test
./testrunner
```

#### Other libft testers

See https://www.moulibft.com/ and https://github.com/alelievr/libft-unit-test

#### Include the library in another project

To use the functions provided by this library in another project:

```shell
cp libft.a libft.h $your-c-project-root
```

and compile your project with the flag `-lft`.

## Other projects

[libftasm](https://github.com/joshgelbard/libftasm) reimplements a subset of these functions in NASM assembly. (They can't be used together, though -- it's one or the other.)

## Credits

### Authors

* [Joshua Gelbard](https://github.com/joshgelbard)

### Thanks to

The authors of [moulibft](https://www.moulibft.com) and [libft-unit-test](https://github.com/alelievr/libft-unit-test)

## License

MIT License

Copyright (c) 2019 Joshua Gelbard

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
