/**
 * @file welcome.cpp
 *
 * @brief Gazebo Welcome Pluggin
 *
 * @ingroup project1_ahmad
 *
 * @author Ahmad Kalaaji
 * Contact: kalaajiahmad@outlook.com
 *
 * Credits: Code Snippet Provided by Udacity's nano degree Program
 */

#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              //Print at Launch
              printf("----------------------------------------------------------------------------------\n");
              printf("| ## ## ## ####### ##     ####### ####### ######## #######      ###### #######   |\n");
              printf("| ## ## ## ##      ##     ##      ##   ## ## ## ## ##             ##   ##   ##   |\n");
              printf("| ## ## ## ####### ##     ##      ##   ## ## ## ## #######        ##   ##   ##   |\n");
              printf("| ## ## ## ##      ##     ##      ##   ## ## ## ## ##             ##   ##   ##   |\n");
              printf("| ######## ####### ###### ####### ####### ## ## ## #######        ##   #######   |\n");
              printf("|                                                                                |\n");
              printf("| ######## ##   ## ######## ######## #######  ##                                 |\n");
              printf("| ##    ## ##   ## ## ## ## ##    ## ##   ##   #                                 |\n");
              printf("| ######## ####### ## ## ## ######## ##   ###    ######                          |\n");
              printf("| ##    ## ##   ## ## ## ## ##    ## ##   ##     #####                           |\n");
              printf("| ##    ## ##   ## ## ## ## ##    ## ######      ######                          |\n");
              printf("|                                                                                |\n");
              printf("| ## ## ## ####### #######  ##     #######        ##                             |\n");
              printf("| ## ## ## ##   ## ##   ##  ##     ##   ##        ##                             |\n");
              printf("| ## ## ## ##   ## #######  ##     ##   ###       ##                             |\n");
              printf("| ## ## ## ##   ## ##   ##  ##     ##   ##       #  #                            |\n");
              printf("| ######## ####### ##    ## ###### ######         ##                             |\n");
              printf("----------------------------------------------------------------------------------\n");
              printf("\n");
              printf("Welcome to Ahmad’s World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
