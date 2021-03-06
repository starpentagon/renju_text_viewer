cmake_minimum_required(VERSION 3.5.1)

# プロジェクト名
set(project_name renju_viewer)
project(${project_name} CXX)

# ccache
find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif(CCACHE_FOUND)

# コンパイルオプション
add_definitions("-Wall -std=c++14")

# インクルードパス
include_directories(${CMAKE_SOURCE_DIR}/realcore/src/include)

# ライブラリパス
link_directories($ENV{BOOST_DIR}/lib)

# ソースファイル
add_executable(
    ${project_name}
    ../realcore/src/Move.cc
    ../realcore/src/MoveList.cc
    ../realcore/src/LineNeighborhood.cc
    ../realcore/src/OpenState.cc
    ../realcore/src/BoardOpenState.cc
    ../realcore/src/BitBoard.cc
    ../src/ren_viewer.cc
)

# ライブラリ
target_link_libraries(${project_name} boost_program_options)

