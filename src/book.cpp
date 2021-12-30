#pragma once
#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include "book.h"
using namespace std;

book::book(){
    name = isbn = cate1 = cate2 = cate3 = "";
    author.clear();
    inlib = false;
}

book::book(string& names, string& isbns, vector<string>* vec, string& c1, string& c2, string& c3){
	name = names;
	isbn = isbns;
	author = *vec;
	cate1 = c1; cate2 = c2; cate3 = c3;
	inlib = true;
}

void book::print_info(){
	cout<<endl;
	cout<<"Name:\t"<<this->name<<endl;
	cout<<"ISDB:\t"<<this->isbn<<endl;
	cout<<"Author:\t";
	for (int i=0;i<(int)(this->author.size());i++) cout<<this->author[i]<<" ";
	cout<<endl;
	cout<<"Type:\t"<<this->cate1<<"/"<<this->cate2<<"/"<<this->cate3<<endl;
	cout<<((this->inlib)?"In library.":"Borrowed.")<<endl;
	cout<<endl;
}