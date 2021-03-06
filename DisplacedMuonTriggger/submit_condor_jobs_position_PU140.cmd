universe = vanilla
Executable=makeplotposition_PU140.sh
Transfer_Input_Files = /eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSCAna_ctau0_Pt2_50_PU140_1005/161010_150344/0000/combined/out_ana_prompt.root,/eos/uscms/store/user/tahuang/DarkSUSY_MH-125_MGammaD-20000_ctau1000_14TeV_madgraph-pythia6-tauola/GEMCSCAna_DarkSUSY_ctau1000_PU140_1010/161011_050807/0000/combined/out_ana_displaced.root
Should_Transfer_Files = YES
Transfer_Output_Files = condoroutput_position_PtPT1.zip
WhenToTransferOutput  = ON_EXIT_OR_EVICT
Output = condorout/condor_out_$(Process)_$(Cluster).stdout
Error  = condorout/condor_out_$(Process)_$(Cluster).stderr
Log    = condorout/condor_out_$(Process)_$(Cluster).log
Notification    = Complete 
notify_user = taohuang@email.tamu.edu
Arguments = PT1 $ENV(PWD)
use_x509userproxy = true
Queue 1
