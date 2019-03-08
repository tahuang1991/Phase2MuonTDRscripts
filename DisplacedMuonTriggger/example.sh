#########################################################
#                                                       #
#  Author: Andres Florez, Universidad de los Andes, CO  #
#                                                       #
#########################################################

#!/bin/bash
# These input parameters are going to be passed to the 
# script from the submit_condor_jobs.cmd script, 
# which takes the input from the run_code.sh 
 
fname=$1
outputfile=$2
outputdir=$3

date

# You need to set the enviroment to get ROOT 
# You need to modify the lines below to point to your
# CMSSW area. 
#Also, please read the carefully the comments below.

# "cd" to the are where you have installed your CMSSW release, e.g:
cd /uscms_data/d3/tahuang/CMSSW_6_2_0_SLHC28_patch1/src/
#source /cvmfs/cms.cern.ch/cmsset_default.csh
source /cvmfs/cms.cern.ch/cmsset_default.csh
cmsenv
eval `scram runtime -csh`
echo $_CONDOR_SCRATCH_DIR
cd ${_CONDOR_SCRATCH_DIR}

# Copy the directory where you have the compiled code, e.g.:
cp -r /uscms_data/d3/tahuang/CMSSW_6_2_0_SLHC28_patch1/src/GEMCode/ .

# "cd" in to the analysos code directory, e.g:
# cd muonToTauFakeRate
cd GEMCode
#cmsRun whatever_your_config.py
echo "LIST BEFORE MOVING"
ls ${_CONDOR_SCRATCH_DIR}

# Also, and very important: You need to create directories in eos
# with matching names to those is the lists (Ntuples_DYtoLL_Spring15)
# The reason why I am sending the output to EOS is because someone told me at fermilab 
# that when submmiting a large number of jobs we can saturate the EOS system by 
# copying files directly and no with the xrdcp convention, which I think 
# it allows the system handle jobs according to how busy it is....
# if you can to copy the files directly, you can modify the line below
# but you get yell at, I warned you :) 

#Copy the output to your EOS area, e.g:
#xrdcp $_CONDOR_SCRATCH_DIR/muonToTauFakeRate/$outputfile  root://cmseos.fnal.gov//store/user/florez/TNT_Analyzer_Condor/$outputdir

# YOU NEED TO MAKE SURE TO CHANGE "USERNAME" BY YOUR USERNAME AND YOU NEED TO MAKE THE "YOUR_OUTPUT_DIRECTORY" and "$outputdir"
# in your EOS area, e.g: make -r /eos/uscms/store/user/USERNAME/YOUR_OUTPUT_DIRECTORY/
# Notice the $outputdir should matche the name of the list you are passing to the code, in this case "Ntuples_DYtoLL_Spring15"
#xrdcp $_CONDOR_SCRATCH_DIR/Analyzer/$outputfile root://cmseos.fnal.gov//store/user/tahuang/sub_designed_dir
xrdcp $_CONDOR_SCRATCH_DIR/$your_output $your_local_destination

cd ${_CONDOR_SCRATCH_DIR}

#clear up 
rm -rf GEMCode

echo "List after moving/removing everything"
ls ${_CONDOR_SCRATCH_DIR}

date
