/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <a.martino@sutdent.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:54:11 by amartino          #+#    #+#             */
/*   Updated: 2020/05/19 09:36:41 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>

/*
**								ADJACENCY LIST
**	An array of lists is used. Size of the array is equal to the number of
**	vertices (vertices are coonected by edges). Let the array be array[].
**	An entry array[i] represents the list of vertices adjacent (has an edge) to
**	the ith vertex. This representation can also be used to represent a weighted
**	graph. The weights of edges can be represented as lists of pairs.
*/

/*
** ############################################################################
** ############################## STRUCTURES ##################################
** ############################################################################
*/
typedef struct	s_adj_node
{
	size_t				dest;
	struct s_adj_node	*next;
	uint8_t				available;
	char				padding[7];
}				t_adj_node;

typedef struct	s_adj_list
{
	t_adj_node			*head;
	char				*name;
	ssize_t				distance;
	uint8_t				usable;
	char				padding[7];
}				t_adj_list;

typedef struct	s_graph
{
	t_adj_list			*array;
	size_t				size;
}				t_graph;

/*
** ############################################################################
** ############################ ADJACENCY LIST ################################
** ############################################################################
*/
t_graph			*init_graph(size_t size);
uint8_t			does_link_exist(t_graph *graph, size_t src, size_t dest);
int8_t			add_edge(t_graph *graph, size_t src, size_t dest);
int8_t			add_edge_one_way(t_graph *graph, size_t src, size_t dest);
int8_t			add_edge_rear(t_graph *graph, size_t src, size_t dest);
int8_t			add_vertex_name(t_graph *graph, size_t i, char *name);
void			remove_edge(t_graph *graph, size_t src, size_t dest);
void			remove_edge_one_way(t_graph *graph, size_t src, size_t dest);
t_adj_list		get_vertex(t_graph *graph, size_t src);
t_adj_node		*get_link(t_graph *graph, size_t src, size_t dest);
void			print_adj_list(t_graph *graph);
void			print_adj_node(t_adj_list node);
void			clean_adj_graph(t_graph **graph);
t_graph			*dup_adj_list(t_graph *graph);
int8_t			is_link_available(t_graph *graph, size_t src, size_t dest);
int8_t			is_link_used_both_way(t_graph *graph, size_t src, size_t dest);

#endif
