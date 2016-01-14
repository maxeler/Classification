function(actionBar, ide) {
    
    actionBar.make = function(location, image, target) {
        ide.openOutput();

        // return if still making
        if(actionBar.executing) {
            return;
        }

        actionBar.executing = true;

        ide.output.content = '';

        actionBar.project.run(
	    "/bin/bash -c 'make -C " + location + " " + target + " MAXCOMPILER_BUILD_CONF=\"build.root_dir=/tmp;build.copy_results_to=$PWD/" + location + "/results\"'",
            image,
            (message) => {  // onmessage
                ide.output.content +=  message.output;
            },
            () => {  // oncomplete
                actionBar.executing = false;
                ide.output.content += 'Starting generating graphs...\n';

                // generate graph from every .pxg file in CPUCode/results  
                actionBar.project.run(
		    "/bin/bash -c 'mkdir Graphs; for file in APP/CPUCode/results/*.pxg; do java -jar $PXG_TO_PNG $file Graphs/$(basename $file | cut -d. -f1).png; done'",
		    image,
		    (message) => {},
		    () => {
                        ide.output.content += 'Graphs generated';
                        actionBar.project.refreshProject();
		    });
		actionBar.project.refreshProject();
		
	    });
    };
}
