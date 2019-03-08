#########################################################
#                                                       #
#  Author: Andres Florez, Universidad de los Andes, CO  #
#                                                       #
#########################################################
#this is csh version
# The input list is passed from the run_samples_list.sh script
# Please take a look to the run_samples_list.sh for details
set runfile = makeplotellipes.sh
set condoroutput = condor_0928
set condorlog = condorout
set Pts = (5 7 10 15 20)
set Pts_BG = (3 5 5 7 9)
set counter = 0

# Make a directory with the same name of the 
# input file process you will run over
if (! -d $condoroutput) then
	mkdir $condoroutput 
endif
cp submit_condor_jobs.cmd $condoroutput
cp $runfile $condoroutput
cd $condoroutput
set submitdir = $PWD

if (! -d $condorlog) then
	mkdir $condorlog 
endif
# for loop to interate over the file samples in the list
# please take a look to the example list I have provided
# in GIT. It is imporant to use the same convention 
# to access the files "root\://cmseos.fnal.gov//"
# We can saturate the eos sever in we try to access 
# the files directly. 

#for ((counter=0; counter<${#Pts[*]}; counter++)) ; do
#counter=`expr $counter + 1`
foreach pt1 ($Pts)
  set pt2 = ($Pts_BG[1])
  echo counter $counter, Pt1 $pt1 , PT2 $pt2
  cp submit_condor_jobs.cmd submit_condor_jobs_copy.cmd
  # changes the the flag FNAME by one of the input 
  # file names in the list
  sed -i "s/PT1/$pt1/g" submit_condor_jobs_copy.cmd
  sed -i "s/PT2/$pt2/g" submit_condor_jobs_copy.cmd
  sed -i "s/submit/$pt2/g" submit_condor_jobs_copy.cmd
  condor_submit submit_condor_jobs_copy.cmd
  shift Pts_BG
#done
end
