from setuptools import find_packages
from setuptools import setup

setup(
    name='planner_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('planner_msgs', 'planner_msgs.*')),
)
