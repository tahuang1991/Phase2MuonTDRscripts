universe = vanilla
Executable=makeSBplot.sh
Should_Transfer_Files = YES
Transfer_Input_Files = /eos/uscms/store/user/tahuang/DisplacedMuonTriggerSample/DarkSUSY/out_ana_displaced.root,/uscms_data/d3/tahuang/DisplacedMuonTrigger/CMSSW_6_2_0_SLHC28_patch1/src/makeplots/Submit_Condor/RateTree.root
Transfer_Output_Files = condoroutput_$(Process)_$(Cluster).zip
WhenToTransferOutput  = ON_EXIT_OR_EVICT
Output = condorout/condor_out_$(Process)_$(Cluster).stdout
Error  = condorout/condor_out_$(Process)_$(Cluster).stderr
Log    = condorout/condor_out_$(Process)_$(Cluster).log
Notification    = Complete 
notify_user = taohuang@email.tamu.edu
Arguments = condoroutput_$(Process)_$(Cluster).zip
use_x509userproxy = true
Queue 1
