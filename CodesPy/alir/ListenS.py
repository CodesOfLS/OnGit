"""
    Di Luu

    This code isn't something I wish to share because I believe it won't bring
    any benefits. I'm adding it here only to avoid loss, but it's not part of
    something important that I want to share.
"""

from requests import get
from pygame.mixer import *
from time import sleep

init()
BASE_URL = ''


def alert_sound(path_sound: str, time: int, status: bool = True):
    music.load(path_sound)
    music.set_volume(100)
    if status:
        music.play()
    else:
        music.stop()
    sleep(time)


def verify_alert(status: int):
    if status == 1:
        alert_sound('sounds/alert.mp3', 40)
    elif status == 0:
        alert_sound('sounds/alert.mp3', 40, False)


while True:
    r = get(BASE_URL + 's_stat')

    if r.content:
        str_res = r.content.decode('utf-8')
        if str_res == '0' or str_res == '1':
            verify_alert(int(r.content))

            if str_res == '1':
                get(BASE_URL + 's_init')

        sleep(5)
