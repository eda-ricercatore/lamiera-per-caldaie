/**
 * Define the simple_template object.
 * It has two simple attributes: an integer and a string.
 *
 * It has a set of simple template functions.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since March 1, 2015
 *
 *
 *
 *
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


// Import packages from the software
#include "./simple_template.hpp"

// ==================================================================

// Default constructor.
simple_template::simple_template() {
	//	Do nothing.
}

simple_template::~simple_template() {
	// Delete instances of instance variables;
}

// ==================================================================

// Accessor functions.

/**
 * Function to get the ID of the node.
 * @param - None.
 * @return - The ID of this node.
 */
string string_node::get_node_ID() const {
	return node_ID;
}


/**
 * Function to get the label of the node.
 * @param - None.
 * @return - The label of this node.
 */
string string_node::get_node_label() const {
	return node_label;
}


/**
 * Function to print details of the object.
 * Call accessor functions to obtain private details of the object
 *	and print their content/values.
 * @param - None.
 * @return - Nothing.
 */
void string_node::print_node() const {
	cout << "Node ID:::" << get_node_ID() << "==" << endl;
	cout << "Node Label:::" << get_node_label() << "==" << endl;

}

// ==================================================================

// Mutator functions.

/**
 * Function to set the ID of the node.
 * @param temp_ID:	The ID of the node.
 * @return - Nothing.
 */
void string_node::set_node_ID(const string &temp_ID) {
	node_ID = temp_ID;
}
		

/**
 * Function to set the label of the node.
 * @param temp_label:	The label of the node.
 * @return - Nothing.
 */
void string_node::set_node_label(const string &temp_label) {
	node_label = temp_label;
}


// ==================================================================
		
// Operator overloading.

/**
 * Overload the "<" operator for node comparison.
 *
 * When containers of nodes need to compare a pair of nodes, the IDs
 *	of the nodes are compared.
 * This is because the ID of a node is unique in a set/container of
 *	nodes.
 */
bool string_node::operator<(const string_node &cmp) const {
	return (0 > node_ID.compare(cmp.node_ID));
}



/**
 * Overload the "<" operator for 2 input nodes.
 *
 * When containers of nodes need to compare a pair of nodes, the IDs
 *	of the nodes are compared.
 * This is because the ID of a node is unique in a set/container of
 *	nodes.
 */
bool string_node::operator() (const string_node& n1, const string_node& n2) const {
	return (0 > (n1.get_node_ID()).compare(n2.get_node_ID()));
}
