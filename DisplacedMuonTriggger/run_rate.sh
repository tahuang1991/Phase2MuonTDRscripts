#########################################################
#                                                       #
#  Author: Andres Florez, Universidad de los Andes, CO  #
#                                                       #
#########################################################
#this is csh version
#old input for condor configuration
#Transfer_Input_Files = /eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSCAna_ctau0_Pt2_50_0925_v2/160926_194628/0000/combined/out_ana_prompt.root,/eos/uscms/store/user/tahuang/DarkSUSY_MH-125_MGammaD-20000_ctau1000_14TeV_madgraph-pythia6-tauola/GEMCSCAna_DarkSUSY_ctau1000_0925_v2/160926_194711/0000/combined/out_ana_displaced.root 
# The input list is passed from the run_samples_list.sh script
# Please take a look to the run_samples_list.sh for details
set pythonfile = DisplacedMuon_Efficiency_GEMCSC_rate_v3_trainingwithRate.py
set runfile = makeplotrate.sh
#set condoroutput = condor_20170303_rate_fraction90_95_99_eta12to16
set condoroutput = condor_20190304_rate_fraction90_95_99_withGE21_forThesis
set condorlog = condorout
#set Pts = (2 3 4 5 6 7 8 10 12 14 16 18 20 25 30)
#set Pts = (4 5 6 7 8 9 10 12 15 20 30 40)
set Pts = (5 7 10 12 15 20 30)
set fractions = (76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96)
#set Pts_BG = (4 5 5 5 6 7 7 9 10 12 20 20)
#set Pts_BG = (6 9 14 19)
#set Pts_BG = (5 5 5 7 9 11 12)
#set Pts = (10)
#set Pts_BG = (5)
set counter = 0

# Make a directory with the same name of the 
# input file process you will run over
if (! -d $condoroutput) then
	mkdir $condoroutput 
endif
cp submit_condor_jobs_rate.cmd $condoroutput
cp $runfile $condoroutput
cp $pythonfile $condoroutput
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
    foreach frac ($fractions)
      echo counter $counter, Pt1 $pt1 , frac, $frac, submitdir , $submitdir
      cp submit_condor_jobs_rate.cmd submit_condor_jobs_copy.cmd
      # changes the the flag FNAME by one of the input 
      # file names in the list
      sed -i "s/PT1/$pt1/g" submit_condor_jobs_copy.cmd
      sed -i "s/fraction/$frac/g" submit_condor_jobs_copy.cmd
#sed -i "s/PT2/$pt2/g" submit_condor_jobs_copy.cmd
#sed -i "s/SubmitDir/$submitdir/g" submit_condor_jobs_copy.cmd
      #sed -i "s/arguments123/$pt1 $pt2 $submitdir/g" submit_condor_jobs_copy.cmd
      cat submit_condor_jobs_copy.cmd
      condor_submit submit_condor_jobs_copy.cmd
    end 
#shift Pts_BG
#done
end
