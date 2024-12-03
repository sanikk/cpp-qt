#include "scenario_controls.h"


ScenarioControls::ScenarioControls() {
    QVBoxLayout *controls_layout = new QVBoxLayout;
    QPushButton *scenario_file_button = new QPushButton{"Choose a scenario file"};
    controls_layout->addWidget(scenario_file_button);
    // connect();
    QLabel *chosen_map_label = new QLabel{"Pick a scenario file first"};
    controls_layout->addWidget(chosen_map_label);
    setLayout(controls_layout);
}

void setScenarioFile() {
    
}
