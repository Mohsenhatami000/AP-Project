qt_add_executable(ClientApp
    main.cpp
)

target_link_libraries(ClientApp
    PRIVATE
        Qt6::Widgets
        Qt6::Network
        Core
)
