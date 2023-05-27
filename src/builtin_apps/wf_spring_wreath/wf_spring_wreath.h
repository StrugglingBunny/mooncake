/**
 * @file wf_spring_wreath.h
 * @author Forairaaaaa
 * @brief 
 * @version 0.1
 * @date 2023-05-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#pragma once
#include "../../app/app.h"
#include <lvgl.h>


namespace MOONCAKE {
    namespace BUILTIN_APP {



        class WF_Spring_Wreath : public APP_BASE {
            private:


            public:
                WF_Spring_Wreath() = default;
                ~WF_Spring_Wreath() = default;


                /**
                 * @brief Lifecycle callbacks for derived to override
                 * 
                 */
                /* Setup App configs, called when App "install()" */
                void onSetup();

                /* Life cycle */
                void onCreate();
                void onResume();
                void onRunning();
                void onRunningBG();
                void onPause();
                void onDestroy();
            
        };







    }
}