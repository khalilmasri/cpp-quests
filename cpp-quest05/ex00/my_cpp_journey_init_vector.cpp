#include <iostream>
#include <string.h>
#include <vector>

std::vector<std::string> my_cpp_journey_init_vector(){
    
    std::vector<std::string> lake = {"Baikal -- Russia", "Tanganyika -- Burundi/Democratic Republic of the Congo/Tanzania/Zambia", "Caspian Sea -- Azerbaijan/Iran/Kazakhstan/Russia/Turkmenistan", "Vostok -- Antarctica", "O'Higgins-San Martin -- Argentina/Chile", "Malawi -- Malawi/Mozambique/Tanzania", "Issyk Kul -- Kyrgyzstan", "Great Slave -- Canada", "Crater -- United States"};
    lake.push_back("Matano -- Indonesia");
    lake.insert(lake.end(), {"General Carrera-Buenos Aires -- Argentina/Chile", "Hornindalsvatnet -- Norway", "Quesnel -- Canada", "Toba -- Indonesia", "Sarez -- Tajikistan", "Tahoe -- United States", "Argentino -- Argentina", "Kivu -- Democratic Republic of the Congo/Rwanda", "Salsvatnet -- Norway", "Nahuel Huapi -- Argentina"});

    return lake;
};

