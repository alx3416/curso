import pytest
import samples as samples


def test_get_square_area_1():
    assert samples.get_square_area(4) == 16


def test_get_square_area_2():
    assert samples.get_square_area(-9.5) == 0


def test_get_square_area_3():
    assert samples.get_square_area(0) == 0
