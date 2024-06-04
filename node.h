#ifndef NODE_H
#define NODE_H

#include "link.h"
#include "packet.h"
#include <vector>

class Node {
  friend class LinkInstaller;

private:
  int id_;
  static int nextId_;

  std::vector<Link*> link_;
public:
  Node() : id_(nextId_++) {}
  int id() const { return id_; }
  void addLink(Link* link){
    link_.push_back(link);
  }

  void received(Packet* Packet, Node* fromNode){
    
  }
};

int Node::nextId_ = 0;


#endif