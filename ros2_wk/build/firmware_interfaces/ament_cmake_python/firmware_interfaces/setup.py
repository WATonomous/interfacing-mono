from setuptools import find_packages
from setuptools import setup

setup(
    name='firmware_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('firmware_interfaces', 'firmware_interfaces.*')),
)
