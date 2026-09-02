# 'assert':- assert is a  debugging tool that tests if a condition is true
# 'pytest.raises()':- type of error that we think will occur

import pytest
from calculator import square
def test_positive():
    assert square(2) == 4
    assert square(3) == 9
def test_negative():
    assert square(-3) == 9
    assert square(-2) == 4
def test_zero():
    assert square(0) == 0
def test_str():
    with pytest.raises(TypeError):
        square("cat")
    