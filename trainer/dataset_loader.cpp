#include <dirent.h>
#include <fstream>
#include <iostream>
#include "headers/dataset_loader.h"

#define ONE_GB 1 << 10
#define CSV "csv"

static long long int GetFileSize(const std::string& filePath) {
    std::ifstream file(filePath);
    const auto begin = file.tellg();
    file.seekg(0, std::ios::end);
    const auto end = file.tellg();
    file.close();
    return end - begin;
}

static std::string GetFileExt(const std::string& s) {
    const size_t i = s.rfind('.', s.length());
    if (i != std::string::npos) {
        return s.substr(i + 1, s.length() - i);
    }
    return "";
}

TDataSetLoader::TDataSetLoader(const std::string &DataSetsDir) : DataSetsDir(DataSetsDir) {}

std::vector<std::string> TDataSetLoader::GetDataSetsFileNames() const {
    std::vector<std::string> dataSetsFileNames;
    auto dir = opendir(DataSetsDir.data());
    if (dir != nullptr) {
        dirent* f;
        while ((f = readdir(dir))) {
            const auto& fileType = f->d_type;
            if (fileType == DT_REG) {
                const auto fileName = std::string(f->d_name);
                const auto fullFilePath = DataSetsDir + "/" + fileName;
                const auto fileSize = GetFileSize(fullFilePath);
                const auto fileExt = GetFileExt(fileName);
                if (fileExt == CSV && fileSize <= ONE_GB)  {
                    dataSetsFileNames.push_back(fullFilePath);
                }
            }
        }
        closedir(dir);
    }
    return dataSetsFileNames;
}

std::string TDataSetLoader::GetDataSetsDir() const {
    return DataSetsDir;
}
