#!/usr/bin/python3
"""
Takes a string and sends a search request to the Star Wars API
"""

import requests
from sys import argv

if __name__ == '__main__':
    search = argv[1]
    url = 'https://swapi.co/api/people/'

    r = requests.get(url, params={'search': search})
    json_dict = r.json()

    print("Number of results: {}".format(json_dict['count']))

    if json_dict['count'] > 0:
        for person in json_dict['results']:
            print(person['name'])
