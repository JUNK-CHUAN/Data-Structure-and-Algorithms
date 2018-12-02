//
// Created by 杨小川 on 2018/10/29.
//

#ifndef DICT_DICT_H
#define DICT_DICT_H


#include "Alist.h"

// The Dictionary abstract class
template <typename Key, typename E>
class Dictionary
{
 private:
  void operater = (const Dictionary&) {}
  Dictionary(const Dictionary&) {}

 public:
  Dictionary() {}          // Default constructor
  virtual ~Dictionary() {} // Base destructor

  // Reinitialize dictionary
  virtual void clear() = 0;

  // Insert a record
  // k: The key for the record being inserted
  // e: The record being inserted
  virtual void insert(const Key &k, const E &e) = 0;

  // Remove and return a record
  // k: The key of the record to be removed
  // Return a matching record. If multiple records match
  // "k", remove an arbitrary one. Return NULL if no record
  // with key "k" exists.
  virtual E remove(const Key& k) = 0;

  // Remove and return an arbitrary record from dictionary
  // Return: The record removed, or NULL if none exits
  virtual E removeAny() = 0;

  // Return: A record matching "k" (NULL if none exits).
  // If multiple records match,, return an arbitrary one.
  // k: The key of the record to find
  virtual E find(const Key& k) const = 0;

  //Return the number of records in the dictionary.
  virtual int size() = 0;
};


#endif