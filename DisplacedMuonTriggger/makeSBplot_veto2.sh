#########################################################
#                                                       #
#  Author: Andres Florez, Universidad de los Andes, CO  #
#                                                       #
#########################################################

#!/bin/bash
# These input parameters are going to be passed to the 
# script from the submit_condor_jobs.cmd script, 
# which takes the input from the run_code.sh 
 

date

# You need to set the enviroment to get ROOT 
# You need to modify the lines below to point to your
# CMSSW area. 
#Also, please read the carefully the comments below.

# "cd" to the are where you have installed your CMSSW release, e.g:
#cd /uscms_data/d2/florez/TNT_Maker_CMSSW_8_0_10/CMSSW_8_0_10/src/ 
cmsswdir=/uscms_data/d3/tahuang/DisplacedMuonTrigger/CMSSW_6_2_0_SLHC28_patch1/src/
cd $cmsswdir
source /cvmfs/cms.cern.ch/cmsset_default.sh
#source /cvmfs/cms.cern.ch/cmsset_default.csh #csh does not work here, do not know why?

cmsenv
cp /uscms_data/d3/tahuang/DisplacedMuonTrigger/CMSSW_6_2_0_SLHC28_patch1/src/makeplots/Submit_Condor/*log  ${_CONDOR_SCRATCH_DIR}
cp /uscms_data/d3/tahuang/DisplacedMuonTrigger/CMSSW_6_2_0_SLHC28_patch1/src/makeplots/Submit_Condor/*.py  ${_CONDOR_SCRATCH_DIR}
#cp $condor_submit_dir/DisplacedMuon_Efficiency_GEMCSC_module.py ${_CONDOR_SCRATCH_DIR}
#cd $condor_submit_dir
#mkdir $outputdir1
#mkdir $outputdir2
#eval `scram runtime -sh` # equivalent to cmsenv
echo $_CONDOR_SCRATCH_DIR
cd ${_CONDOR_SCRATCH_DIR}
ls ${_CONDOR_SCRATCH_DIR}
echo 'PWD'$PWD
echo 'ROOTSYS '$ROOTSYS
echo 'list condor_submit_dir '$condor_submit_dir
ls $condor_submit_dir
# Copy the directory where you have the compiled code, e.g.:

# cp -r /uscms_data/d2/florez/TagAndProbe_BSM3G_TNT_Analyzer/CMSSW_7_4_1/src/Fermilab_TauHAT2015/muonToTauFakeRate . 
#cp -r /uscms_data/d2/florez/TNT_Maker_CMSSW_8_0_10/CMSSW_8_0_10/src/Analyzer .
#cp /uscms_data/d3/tahuang/DisplacedMuonTrigger/CMSSW_6_2_0_SLHC28_patch1/src/makeplots/Submit_Condor/DisplacedMuon_Efficiency_GEMCSC_module.py  .
#cp $3/DisplacedMuon_Efficiency_GEMCSC_module.py  .
#cp /uscms_data/d3/tahuang/CMSSW_6_2_0_SLHC28_patch1/src/GEMCode/GEMValidation/scripts/Submit_Condor/DisplacedMuon_Efficiency_GEMCSC_combined.py  .
#sed -i "s/Profile\_Ellipse\_TESTOUTPUT/$outputdir1/g" ellipseCut_DDY_vs_DPhi_v3.py
#sed -i "s/Hybrid\_Ellipse\_TESTOUTPUT/$outputdir2/g" ellipseCut_DDY_vs_DPhi_v3.py
# "cd" in to the analysos code directory, e.g:
# cd muonToTauFakeRate
#outputdir1=Direction_PT$1_0925
outputdir1=SBPlots_displacedMuon_all
python SignalAndRate_veto2.py $outputdir1

zip -r $1 $outputdir1 *log SB*.root
#zip -r condoroutput_hybrid_2_Pt$1_BGPt$2.zip $outputdir2
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
#xrdcp $_CONDOR_SCRATCH_DIR/muonToTauFakeRate/$outputfile  root://cmseos.fnal.gov//store/user/tahuang/../$outputdir

# YOU NEED TO MAKE SURE TO CHANGE "USERNAME" BY YOUR USERNAME AND YOU NEED TO MAKE THE "YOUR_OUTPUT_DIRECTORY" and "$outputdir"
# in your EOS area, e.g: make -r /eos/uscms/store/user/USERNAME/YOUR_OUTPUT_DIRECTORY/Ntuples_DYtoLL_Spring15
# Notice the $outputdir should matche the name of the list you are passing to the code, in this case "Ntuples_DYtoLL_Spring15"
#xrdcp $_CONDOR_SCRATCH_DIR/* root://cmseos.fnal.gov//store/user/tahuang/CondorOutput/
#cp -r $_CONDOR_SCRATCH_DIR/* $condor_submit_dir
#xrdcp $_CONDOR_SCRATCH_DIR/*.log $condor_submit_dir/

cd ${_CONDOR_SCRATCH_DIR}
rm -rf *.root
echo "List after moving/removing everything"
ls ${_CONDOR_SCRATCH_DIR}

date
