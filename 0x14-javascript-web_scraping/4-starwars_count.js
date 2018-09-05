#!/usr/bin/node
// Prints the number of movies where "Wedge Antilles" is present

const request = require('request');
const url = process.argv[2];
const charUrl = 'https://swapi.co/api/people/18/';

request(url, function (err, res, body) {
  if (err) {
    console.log(err);
  }
  let json = JSON.parse(body);
  let movies = 0;
  for (let i = 0; i < json.results.length; i++) {
    if (json.results[i].characters.includes(charUrl)) {
      movies++;
    }
  }
  console.log(movies);
});
