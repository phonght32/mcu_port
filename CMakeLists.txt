if(ESP_PLATFORM)
    set(includes 
        ".")

    idf_component_register(INCLUDE_DIRS ${includes})
endif()
