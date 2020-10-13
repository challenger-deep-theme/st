![Challenger Deep](https://challenger-deep-theme.github.io/images/logo.png)

### [Challenger Deep Theme](https://challenger-deep-theme.github.io/) for [Suckless Terminal st](https://st.suckless.org/)

#### How to use:

There are 2 ways of using this theme. The first is to replace the existing `colorname` array and `default*` functions with the content in the header file.

The second is to remove the `colorname` array and `default*` functions in your `config.h` and replace it with:
```
#include "challenger-deep-theme.h"
```
If you go for the second option, you must of course have the header file in the same directory as the `config.h`.

Afterwards, recompile st with `sudo make install` and you're done!
