"""
    Di Luu

    This code isn't something I wish to share because I believe it won't bring
    any benefits. I'm adding it here only to avoid loss, but it's not part of
    something important that I want to share.
"""

from requests import get
from time import sleep
import sys
import os
import subprocess

run = True

if len(sys.argv) > 1:
    pass
else:
    subprocess.Popen([os.getcwd() + '\\InvocarLua.exe', 'LS'],
                     creationflags=subprocess.CREATE_NO_WINDOW)
    print('Ele está vindo por favor aguarde.\nCopie, cole e de enter no CMD (######, ##, #########, ####): explorer LOCAL')
    input('Enter para finalizar.')
    run = False

BASE_URL = ''

while run:
    r = get(BASE_URL + 's_stat')

    if r.content:
        str_res = r.content.decode('utf-8')
        if str_res == '0' or str_res == '1':
            if str_res == '0':
                get(BASE_URL + 's_init')

    sleep(40)
