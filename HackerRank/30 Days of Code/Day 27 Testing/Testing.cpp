class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> vec {};
        return vec;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int> vec {1, 2, 3, 4, 5};
        return vec;
    }

    static int get_expected_result() {
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int> vec {1, 3, 1};
        return vec;
    }

    static int get_expected_result() {
        return 0;
    }

};