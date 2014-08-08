task :default => [:build]

desc "Build it"
task :build do
    sh "uic krwindow.ui > ui_krwindow.h"
    sh "cd build && make"
end
