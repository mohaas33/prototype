ln -svfb /sphenix/data/data02/TPC/fnal_June2019/beam/tpc_beam_00000288-0000.evt ./
ln -svfb /sphenix/data/data02/TPC/fnal_June2019/beam/tpc_beam_00000292-0000.evt ./
ln -svfb /sphenix/data/data02/TPC/fnal_June2019/beam/tpc_beam_00000293-0000.evt ./
ln -svfb /sphenix/data/data02/TPC/fnal_June2019/beam/tpc_beam_00000294-0000.evt ./
ln -svfb /sphenix/data/data02/TPC/fnal_June2019/beam/tpc_beam_00000295-0000.evt ./

root -b -q '/sphenix/u/shulga/prototype/macros/tpc2019/Fun4All_TestBeam_TPC.C(100,0,"tpc_beam_00000288-0000.evt")'
root -b -q '/sphenix/u/shulga/prototype/macros/tpc2019/Fun4All_TestBeam_TPC.C(100,0,"tpc_beam_00000292-0000.evt")'
root -b -q '/sphenix/u/shulga/prototype/macros/tpc2019/Fun4All_TestBeam_TPC.C(100,0,"tpc_beam_00000293-0000.evt")'
root -b -q '/sphenix/u/shulga/prototype/macros/tpc2019/Fun4All_TestBeam_TPC.C(100,0,"tpc_beam_00000294-0000.evt")'
root -b -q '/sphenix/u/shulga/prototype/macros/tpc2019/Fun4All_TestBeam_TPC.C(100,0,"tpc_beam_00000295-0000.evt")'
