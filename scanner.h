#pragma once

class Directory;
class File;

class Scanner final {
public:
    void VisitDirectory(Directory*) const;
    void VisitFile(File*) const;
};