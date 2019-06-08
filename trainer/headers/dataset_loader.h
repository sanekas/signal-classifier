#include <vector>
#include <string>

class IDataSetLoader {
public:
    virtual std::vector<std::string> GetDataSetsFileNames() const = 0;
    virtual std::string GetDataSetsDir() const = 0;
};

/**
 * Loads & filters valid dataSets fileNames.
 * Datasets should be in CSV format, where first 2 ^ 13 columns are inputh and last one is target
 */
class TDataSetLoader : public IDataSetLoader {
private:
    const std::string DataSetsDir;
public:
    explicit TDataSetLoader(const std::string &DataSetsDir);

    std::vector<std::string> GetDataSetsFileNames() const override;

    std::string GetDataSetsDir() const override;
};
