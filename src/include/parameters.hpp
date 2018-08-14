#pragma once

#include <iostream>
#include <boost/program_options.hpp>

namespace ss{


struct parameter {
	std::string train_data;
	std::string base_data;
	std::string query_data;
	std::string ground_truth;

	int topK;
	int num_thread;
	int dim;
	int transformed_dim;

	int num_bit;
	int num_sub_data_set;

	int train_size;
	int query_size;
	int base_size;

	float r; // h(x) = ceil[(av+b)/r]
	
	boost::program_options::variables_map map;

	template<class VaribleType>
	VaribleType get(const char * key) {	return map[key].as<VaribleType>(); }

} typedef parameter;

}
