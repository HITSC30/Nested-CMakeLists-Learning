In this case, we can see a simple case which contains a Well-structured project.<br>
It contains src( in this project, we have three folder to contains different files), include(it has the same function like src) and a test file which is common needed for a complex project.
It also provites launch.json and tasks.json and settings.json. CMakeLists works as a worker, it just attentions do things. The launch.json works as a leader, it determines what we want get and want we should do.<br>
The tasks.json has a role as supporter, it not only tell CMakeLists to do what, but also build somethings for CMakeLists to finish the tasks.Settings.json provieds some help, like clangd jump and debug.<br>
