//
// Copyright 2014-2016 Robert Fratto. See the LICENSE.txt file at the top-level
// directory of this distribution.
//
// Licensed under the MIT license <http://opensource.org/licenses/MIT>. This file
// may not be copied, modified, or distributed except according to those terms.
//

#pragma once

#include <vector>
#include <map>

#include "ast.h"
#include "typecheck.h"

namespace orange { namespace ast {
	class ASTSearcher {
	private:
		std::vector<LongBlockExpr*> mASTs;

		/// A cache of determined parents for nodes.
		std::map<int, Node*> mParentCache;

		/// Validates a node is a parent of another node.
		bool ValidateParent(Node* parent, Node* child);

		/// Gets a parent from the cache. Before returning it,
		/// validates that the parent is still the childs parent,
		/// in case the AST has been modified. Returns the node
		/// from the cache, if it exists, nullptr if it doesn't or
		/// the found node isn't a parent anymore.
		Node* GetParentFromCache(Node* child);

		/// Adds a parent to the cache.
		void AddParentToCache(Node* parent, Node* child);
	public:
		/// Gets the closest parent node of a child node.
		/// Returns nullptr if there is no parent.
		Node* GetParent(Node* child);

		/// Finds the closest type T parent of a child node.
		/// Returns nullptr if no parent could be found.
		template <typename T>
		T* FindParent(Node* child) {
			auto lookat = GetParent(child);

			while (lookat != nullptr) {
				if (isA<T>(lookat)) break;
				lookat = GetParent(lookat);
			}

			return lookat;
		}

		/// Searches for a node by a given identifier. Returns the node that has this identifier,
		/// not the identifier itself. For example, searching for a function name will return the function,
		/// rather than the name of the function.
		/// @param id The identifier to search for
		/// @param from The node you're searching from. If null, looks through each AST.
		/// @param allowForwardRef Whether or not you can reference the node before it's declared.
		Node* FindNode(Identifier* id, Node* from, bool allowForwardRef = false);

		ASTSearcher(std::vector<LongBlockExpr*> asts);
	};
}}