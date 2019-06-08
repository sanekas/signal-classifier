#include "headers/dataset_provider.h"

TDataSetProvider::TDataSetProvider(const vector<string> &ValidDataSetsFileNames) : ValidDataSetsFileNames(
        ValidDataSetsFileNames) {}

bool TDataSetProvider::HasNext() {
    return CurrentIndex < ValidDataSetsFileNames.size();
}

OpenNN::DataSet TDataSetProvider::Next() {
    if (HasNext()) {
        OpenNN::DataSet ds(ValidDataSetsFileNames[CurrentIndex], "Comma");
        CurrentIndex += 1;
        return ds;
    }
    throw out_of_range("No more datasets available");
}

const vector<string> &TDataSetProvider::GetValidDataSetsFileNames() const {
    return ValidDataSetsFileNames;
}
