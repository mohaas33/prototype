#define LoopOverEvents_cxx
#include "LoopOverEvents.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


#include <vector>

#include <iostream>

using namespace std;


void LoopOverEvents::Loop()
{
//   In a ROOT session, you can do:
//      root> .L LoopOverEvents.C
//      root> LoopOverEvents t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      for(int c=0;c<Clusters_;c++){
         cout<<Clusters_pad_radial_samples_n[c].size()<<"\t";
         cout<<Clusters_pad_azimuth_samples_n[c].size()<<"\t";
         cout<<Clusters_delta_z[c]<<"\t";
         cout<<Clusters_delta_z_cp[c]<<"\t";
         
         set<int>::iterator it = Clusters_pad_radials[c].begin();
         for(;it!=Clusters_pad_radials[c].end();it++){
            cout<<*it<<endl;
         } 
         for(int i=0;i< Clusters_pad_radial_samples_n[c].size();i++){
            cout<<Clusters_pad_radial_samples_n[c][i]<<endl;
         }
        //cout<<Clusters_pad_radial_samples_v[c].size()<<endl;
        //cout<<Clusters_pad_radial_samples_n[c].size()<<endl;

        for(int i=0;i< Clusters_pad_radial_samples_v[c].size();i++){
          //cout<<Clusters_pad_radial_samples_v[c].size()<<endl;
          for(int j=0;j<Clusters_pad_radial_samples_v[c].at(i).size();j++){
            //cout<<Clusters_pad_radial_samples_v[c].at(i).at(j)<<endl;
          }//j
        }//i
      }//c

   }
}
