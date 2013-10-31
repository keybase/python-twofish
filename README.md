python-twofish
==============

Bindings for the Twofish implementation by Niels Ferguson ([`libtwofish-dev`](http://packages.debian.org/sid/libtwofish-dev)).

Compatible with Python 2 and 3.

`pip install https://github.com/keybase/python-twofish/zipball/master`

```python
>>> from twofish import Twofish
>>> T = Twofish(b'*secret*')
>>> x = T.encrypt(b'YELLOWSUBMARINES')
>>> print(T.decrypt(x))
YELLOWSUBMARINES
```
