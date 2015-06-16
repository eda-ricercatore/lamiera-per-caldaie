/**
 * Test the node object using sets.
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since March 1, 2015
 *
 
 * The MIT License (MIT)
 *
 * Copyright	(C)	<2015>	<Zhiyang Ong>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"		Don't compromise my computing accounts. You have been warned.
 */



// set_emplace.cpp
// Import Header files from the C++ STL
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <math.h>
#include <climits>
#include <cfloat>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include <set>
#include <utility>

// Import packages from the software
#include "node.hpp"


using namespace std;

// =======================================================================

// Shortcut to container of int.
typedef set<int> int_set;
// Shortcut to represent a pointer to the container of int.
typedef set<int>::iterator int_set_p;

// Shortcut to container of node.
typedef set<node> node_set;
// Shortcut to represent an iterator to the container of nodes.
typedef set<node>::iterator node_set_p;
/**
 * Shortcut to a pair representing an iterator to the container of
 *	nodes and a boolean flag representing the success of a set
 *	operation.
 */
typedef pair<node_set_p, bool> pair_nodesetp_bool;

// Shortcut to a pair construct, integer and boolean value.
typedef pair<int, bool> pair_int_bool;
/**
 * Shortcut to a pair representing an iterator pointer to the
 *	set of integers and a boolean flag representing the success of
 *	a set operation.
 */
typedef pair<int_set_p, bool> pair_intboolp_bool;

// =======================================================================

// Start of main function...
int main(int argc, char *argv[]) {
	// seg fault - accessing something that isn't there
	// bus error - accessing some thing (data element) that has been freed

	cout << "==>	Test a set of integers." << endl;
	/**
	 * Create a set of integers: 17, 8, 9, [9, 9], 12, [12, 12, 12], 30, 24
	 * Sorted set: 8, 9, 12, 17, 24, 30
	 */
	int_set my_set;
	//auto a_pair_int_bool = my_set.emplace(17);

	pair_intboolp_bool p_flag = my_set.insert(17);
	if(p_flag.second) {
		cout << "==>		Add 17 to the set" << endl;
	}else{
		cout << "<<<	17 already exists in the set." << endl;
	}

	p_flag = my_set.insert(8);
	if(p_flag.second) {
		cout << "==>		Add 8 to the set" << endl;
	}else{
		cout << "<<<	8 already exists in the set." << endl;
	}
	p_flag = my_set.insert(9);
	if(p_flag.second) {
		cout << "==>		Add 9 to the set" << endl;
	}else{
		cout << "<<<	9 already exists in the set." << endl;
	}
	p_flag = my_set.insert(9);
	if(p_flag.second) {
		cout << "==>		Add 9 to the set" << endl;
	}else{
		cout << "<<<	9 already exists in the set (1)." << endl;
	}
	p_flag = my_set.insert(9);
	if(p_flag.second) {
		cout << "==>		Add 9 to the set" << endl;
	}else{
		cout << "<<<	9 already exists in the set (2)." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set (1)." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set (2)." << endl;
	}
	p_flag = my_set.insert(12);
	if(p_flag.second) {
		cout << "==>		Add 12 to the set" << endl;
	}else{
		cout << "<<<	12 already exists in the set (3)." << endl;
	}
	p_flag = my_set.insert(30);
	if(p_flag.second) {
		cout << "==>		Add 30 to the set" << endl;
	}else{
		cout << "<<<	30 already exists in the set." << endl;
	}
	p_flag = my_set.insert(24);
	if(p_flag.second) {
		cout << "==>		Add 24 to the set" << endl;
	}else{
		cout << "<<<	24 already exists in the set." << endl;
	}



	
	// Dummy variables and pointer references for key information of a node.
//	int *n_ID;
/*
	int temp_ID;
	int *n_ID = &temp_ID;
*/
//cout << "Halfway through playing (1)." << endl;
/*
	*n_ID = 109;
	string temp_label;
	string *n_label = &temp_label;
	*n_label = "america";
*/
//cout << "Halfway through playing (2)." << endl;

//	n_label = temp_label;




	// Create an empty set of nodes.
	node_set n_set;
	cout << "==>	Test a set of integers." << endl;
	/**
	 * Create a set of nodes.
	 * # (109, "america")
	 * # (218, "bangalore")
	 * # (327, "china")
	 * # (436, "denmark")
	 * # (545, "ethiopia")
	 */
//	node temp_node(109, "america");
	node temp_node;
	unsigned long long temp_ID = 109;
//cout << "Halfway through playing (3)." << endl;
	temp_node.set_node_ID(temp_ID);
//cout << "Halfway through playing (4)." << endl;
	temp_node.set_node_label("america");
//cout << "Halfway through playing (5)." << endl;
//	node temp_node{109, "america"};
	pair_nodesetp_bool nspb_outcome;
	nspb_outcome = (pair_nodesetp_bool) n_set.insert(temp_node);
//cout << "Halfway through playing (6)." << endl;

	temp_ID = 218;
//	temp_node.set_node_ID(218);
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("bangalore");
	nspb_outcome = n_set.insert(temp_node);
	temp_ID = 327;
//	temp_node.set_node_ID(327);
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("china");
	nspb_outcome = n_set.insert(temp_node);
//	temp_node.set_node_ID(436);
	temp_ID = 436;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("denmark");
	nspb_outcome = n_set.insert(temp_node);
//	temp_node.set_node_ID(545);
	temp_ID = 545;
	temp_node.set_node_ID(temp_ID);
	temp_node.set_node_label("ethiopia");
	nspb_outcome = n_set.insert(temp_node);

	/**
	 * Some functions to test from the STL set are:
	 *	# iterator begin/end
	 *	# capacity size/max_size/empty
	 *	# modifiers erase/clear/swap
	 *	# operations count/find/equal_range/lower_bound/upper_bound
	 *	# observers get_allocators/key_comp/value_comp
	 */

	
	// Iterate the sequence of nodes in the set.
	for(node_set_p it=n_set.begin(); it != n_set.end(); ++it) {
		//(*it).print_node();
		//it->print_node();
		//(*it)->print_node();
		//(&it)->print_node();
		//(&it).print_node();
		// it.print_node();
		//it->print_node();
		
//cout<< "=" << it->get_node_label() << "-" << endl;
		temp_ID = 5;
		//it->set_node_ID(temp_ID);
		//(*it).set_node_ID(temp_ID);
		//(*it)->set_node_ID(temp_ID);
		//it.set_node_ID(temp_ID);
		cout << "ID oif the node is:::" << it->get_node_ID() << "==" << endl;
		//it->set_node_ID(temp_ID);
		/**
		 * Don't use the pointer to set the attributes of the
		 *	node object.
		 */
	}





	node a_node = new node();
	a_node->set_node_ID(23);
















	














cout << "Complete playing." << endl;

	
	// End of main function...
	return 0;
}
