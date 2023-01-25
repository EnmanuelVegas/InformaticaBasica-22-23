# @author Enmanuel Vegas alu0101281698@ull.edu.es
# @date Nov 2022
# @brief My own makefile config

.RECIPEPREFIX = - 
CXX = g++
CXXFLAGS = -std=c++17 -Wall -pedantic
LDFLAGS = -I

all = P97156-numbers-in-an-interval

files = $(all).cc

$(all): $(files)
- $(CXX) $(CXXFLAGS) -o $@ $<

.PHONY: clean

clean:
- @echo "cleaning up the directory..."
- rm -rf *.o *gch *.out *~
