# Specification

_NOTE_: Some of the notes are still under developing.

## Table of Contents

- [Installation](#installation)
- [Documentation](#documentation)
  - [Getting Started](#getting-started)
- [Examples](#tutorials)
  - [Notepad](#notepad)

## Installation

You can install the Qt Framework and tool by Homebrew.

    $ brew install qt
    $ brew cask install qt-creator

If you find `No valid kits found` [issue](https://blog.yowko.com/no-valid-kits-found-on-mac/), in `options`
set Qt version to `/usr/local/Cellar/qt/<version>/bin/qmake`.

Also notes the following settings:

```
If you need to have qt first in your PATH run:
  echo 'export PATH="/usr/local/opt/qt/bin:$PATH"' >> ~/.zshrc

For compilers to find qt you may need to set:
  export LDFLAGS="-L/usr/local/opt/qt/lib"
  export CPPFLAGS="-I/usr/local/opt/qt/include"

For pkg-config to find qt you may need to set:
  export PKG_CONFIG_PATH="/usr/local/opt/qt/lib/pkgconfig"
```

## Documentation

All of Qt Documentation can be found [here](https://doc.qt.io/).

### Getting Started

The [Getting Started](https://doc.qt.io/qt-5/gettingstarted.html) is a very useful document to help you create your first application.
