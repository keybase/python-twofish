from distutils.core import setup, Extension

twofish_module = Extension('_twofish',
                          sources=['twofish-0.3/twofish.c', 'twofish.c'],
                          include_dirs=['twofish-0.3'])

setup(name='twofish',
      version='0.2.0',
      description='Bindings for the Twofish implementation by Niels Ferguson',
      author='Filippo Valsorda',
      author_email='filippo.valsorda@gmail.com',
      url='http://github.com/keybase/python-twofish',
      py_modules=['twofish'],
      ext_modules=[twofish_module],
      classifiers=['Development Status :: 4 - Beta',
                   'Intended Audience :: Developers',
                   'License :: OSI Approved :: BSD License',
                   'Programming Language :: Python :: 2.6',
                   'Programming Language :: Python :: 2.7',
                   'Programming Language :: Python :: 3.3',
                   'Topic :: Security :: Cryptography',
                   'Topic :: Software Development :: Libraries'],
      license='3-clause BSD',
      long_description=open('README.md').read())
