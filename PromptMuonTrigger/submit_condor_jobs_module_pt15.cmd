universe = vanilla
Executable=makeplotmodule.sh
Should_Transfer_Files = YES
Transfer_Input_Files = /eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt2_50_1M/GEMCSC_Ana_ctau0_Pt2_50_PU140_20170401/combined/out_ana_prompt.root,/eos/uscms/store/user/tahuang/SLHC23_patch1_2023Muon_gen_sim_Pt15_100k/GEMCSC_Ana_ctau0_Pt15_PU0_20170222/170222_172854/0000/combined/out_ana_fixedpt.root
Transfer_Output_Files = condoroutput_hybrid_PtPT1_BGPtPT2.zip
WhenToTransferOutput  = ON_EXIT_OR_EVICT
Output = condorout/condor_out_$(Process)_$(Cluster).stdout
Error  = condorout/condor_out_$(Process)_$(Cluster).stderr
Log    = condorout/condor_out_$(Process)_$(Cluster).log
Notification    = Complete 
notify_user = taohuang@email.tamu.edu
Arguments = PT1 PT2 $ENV(PWD)
use_x509userproxy = true
Queue 1
