#include <iostream>
#include <string>

#include <boost/program_options.hpp>

#include "MoveList.h"
#include "Board.h"

using namespace std;
using namespace boost::program_options;
using namespace realcore;

int main(int argc, char* argv[])
{
  // オプション設定
  options_description option;

  option.add_options()
    ("string,s", value<string>()->default_value(""), "[a-o]形式のテキスト")
    ("help,h", "ヘルプを表示");
  
  variables_map arg_map;
  store(parse_command_line(argc, argv, option), arg_map);

  if(arg_map.count("help")){
    cout << "Usage: " << argv[0] << " [options]" << endl;
    cout << option;
    cout << endl;

    return 0;
  }

  const string board_string = arg_map["string"].as<string>();
  
  MoveList move_list;
  const bool is_parse_success = GetMoveList(board_string, &move_list);

  if(!is_parse_success)
  {
    cerr << "Failed to parse the string: " << board_string << endl;
    return 1;
  }

  Board board(move_list);
  cout << board.str() << endl;
}
