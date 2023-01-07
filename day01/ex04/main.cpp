/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 04:02:20 by absela            #+#    #+#             */
/*   Updated: 2022/12/31 06:15:25 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
  if (argc != 4) {
    cout <<  argv[0] << " <filename> <string1> <string2>" << endl;
    return 1;
  }
  string filename = argv[1];
  string s1 = argv[2];
  string s2 = argv[3];
  if (s1.empty()) {
    cout << "Error: empty string" << endl;
    return 1;
  }

  ifstream infile(filename);
  if (!infile.is_open()) {
    cout << "Error: can't to open file " << filename << endl;
    return 1;
  }
  ofstream out_file(filename + ".replace");
  if (!out_file.is_open()) {
    cout << "Error: can't to open file " << filename + ".replace" << endl;
    return 1;
  }
  string line;
  while (getline(infile, line)) {

    string result;
    size_t i = 0;
    while (i < line.length()) 
    {
      if (line.substr(i, s1.length()) == s1)
      {
        result += s2;
        i += s1.length() - 1;
      } 
      else 
        result += line[i];
      i++;
    }
    out_file << result << endl;
  }
  infile.close();
  out_file.close();
  return 0;
}
