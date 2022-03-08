#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  string getName();
  Node(string name);

private:
  string name;
};

string Node::getName() { return name; }

Node::Node(string name) : name(name) {}

class File : public Node {
public:
  File(string name, byte *space);

private:
  byte *space;
  string name;
};

File::File(string name, byte *space) : Node(name), space(space) {}

class Directory : public Node {
public:
  Directory(string name);
  Directory *createDirectory(string path);
  File *createFile(string path);

private:
  vector<Directory *> directories;
  vector<File *> files;

  optional<string> getChild(string path);
};

Directory::Directory(string name) : Node(name) {}

Directory *Directory::createDirectory(string path) {
  optional<string> child = getChild(path);
  if (child == nullopt) {
    return nullptr;
  }
  string sub_path = child.value();
  for (Directory *dir : directories) {
    Directory *newDirectory = dir->createDirectory(sub_path);
    if (newDirectory != nullptr)
      return newDirectory;
  }
  if (sub_path.back() != '/')
    sub_path += '/';
  Directory *newDirectory = new Directory(sub_path);
  directories.push_back(newDirectory);
  return newDirectory;
}

File *Directory::createFile(string path) {
  optional<string> child = path;
  if (child == nullopt)
    return nullptr;
  string child_path = child.value();
  for (Directory *dir : directories) {
    File *newFile = dir->createFile(child_path);
    if (newFile != nullptr)
      return newFile;
  }
  return new File(child_path, nullptr);
}

optional<string> Directory::getChild(string path) {
  if (static_cast<int>(path.size()) == 0)
    return nullopt;
  string name = getName();
  int pos = path.find(name);
  if (pos == 0) {
    string suffix = string(path.begin() + name.size(), path.end());
    return suffix;
  }
  if (path.find("/") == string::npos)
    return nullopt;
  return path;
}

class FileSystem final {
public:
  Directory *root;
  FileSystem();
  Directory *createDirectory(string path);
  File *createFile(string path);
};

FileSystem::FileSystem() { root = new Directory("/"); }

Directory *FileSystem::createDirectory(string path) {
  return root->createDirectory(path);
}

File *FileSystem::createFile(string path) { return root->createFile(path); }

// int main() {
//   FileSystem fs;
//   Directory* dir = fs.createDirectory("/bin");
//   assert(dir->getName() == "bin/");
//   File* file = fs.createFile("/a.txt");
//   assert(file != nullptr);
//   return 0;
// }
