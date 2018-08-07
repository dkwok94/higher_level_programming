#!/usr/bin/python3
"""
Deals with pagination on the Star Wars People API
"""

import requests
from sys import argv

if __name__ == '__main__':
    search = argv[1]

    url = url_first = 'https://swapi.co/api/people/'

    while url is not None:
        r = requests.get(url, params={'search': search})
        json = r.json()
        if url == url_first:
            print("Number of results: {}".format(json['count']))
        for person in json['results']:
            print(person['name'])
            for film in person['films']:
                movie_info = requests.get(film).json()
                title = movie_info['title']
                print("\t{}".format(title))
        url = json['next']
