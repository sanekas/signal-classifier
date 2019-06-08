#include "../../../OpenNN/opennn/data_set.h"

using namespace std;

class IDataSetProvider {
public:
    virtual bool HasNext() = 0;
    virtual OpenNN::DataSet Next() = 0;
    virtual const std::vector<std::string>& GetValidDataSetsFileNames() const = 0;
};

/**
 * Datasets iterator
 */
class TDataSetProvider: IDataSetProvider {
private:
    const std::vector<std::string>& ValidDataSetsFileNames;
    size_t CurrentIndex = 0;
public:
    TDataSetProvider(const vector<string> &ValidDataSetsFileNames);

    bool HasNext() override;

    OpenNN::DataSet Next() override;

    const vector<string> &GetValidDataSetsFileNames() const override;
};
