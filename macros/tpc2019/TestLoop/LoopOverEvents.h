//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 20 02:35:29 2020 by ROOT version 6.16/00
// from TTree eventT/TPC FEE per-event Tree
// found on file: ../tpc_beam_00000288-0000.evt_TpcPrototypeUnpacker.root
//////////////////////////////////////////////////////////

#ifndef LoopOverEvents_h
#define LoopOverEvents_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TObject.h"
#include "TClonesArray.h"

class LoopOverEvents {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxClusters = 131;

   // Declaration of leaf types
 //TpcPrototypeUnpacker::EventHeader *evthdr;
   UInt_t          fUniqueID;
   UInt_t          fBits;
   Int_t           run;
   Int_t           event;
   UInt_t          bx_counter;
   Bool_t          bx_counter_consistent;
   Int_t           xray_x;
   Int_t           xray_y;
   Int_t           nClusters;
   Int_t           Clusters_;
   UInt_t          Clusters_fUniqueID[kMaxClusters];   //[Clusters_]
   UInt_t          Clusters_fBits[kMaxClusters];   //[Clusters_]
   Int_t           Clusters_clusterID[kMaxClusters];   //[Clusters_]
   set<int>        Clusters_pad_radials[kMaxClusters];
   set<int>        Clusters_pad_azimuths[kMaxClusters];
   set<int>        Clusters_samples[kMaxClusters];
   map<int,vector<double> > Clusters_pad_radial_samples[kMaxClusters];
   map<int,vector<double> > Clusters_pad_azimuth_samples[kMaxClusters];
   vector<int>     Clusters_pad_radial_samples_n[kMaxClusters];
   vector<int>     Clusters_pad_azimuth_samples_n[kMaxClusters];
   vector<vector<double> > Clusters_pad_radial_samples_v[kMaxClusters];
   vector<vector<double> > Clusters_pad_azimuth_samples_v[kMaxClusters];
   vector<double>  Clusters_sum_samples[kMaxClusters];
   Int_t           Clusters_min_sample[kMaxClusters];   //[Clusters_]
   Int_t           Clusters_max_sample[kMaxClusters];   //[Clusters_]
   Int_t           Clusters_min_pad_azimuth[kMaxClusters];   //[Clusters_]
   Int_t           Clusters_max_pad_azimuth[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_peak[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_peak_sample[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_pedstal[kMaxClusters];   //[Clusters_]
   map<int,double> Clusters_pad_azimuth_peaks[kMaxClusters];
   Int_t           Clusters_avg_pad_radial[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_avg_pad_azimuth[kMaxClusters];   //[Clusters_]
   Int_t           Clusters_size_pad_radial[kMaxClusters];   //[Clusters_]
   Int_t           Clusters_size_pad_azimuth[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_avg_pos_x[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_avg_pos_y[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_avg_pos_z[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_delta_azimuth_bin[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_delta_z[kMaxClusters];   //[Clusters_]
   Double_t        Clusters_delta_z_cp[kMaxClusters];   //[Clusters_]

   // List of branches
   TBranch        *b_evthdr_fUniqueID;   //!
   TBranch        *b_evthdr_fBits;   //!
   TBranch        *b_evthdr_run;   //!
   TBranch        *b_evthdr_event;   //!
   TBranch        *b_evthdr_bx_counter;   //!
   TBranch        *b_evthdr_bx_counter_consistent;   //!
   TBranch        *b_evthdr_xray_x;   //!
   TBranch        *b_evthdr_xray_y;   //!
   TBranch        *b_nClusters;   //!
   TBranch        *b_Clusters_;   //!
   TBranch        *b_Clusters_fUniqueID;   //!
   TBranch        *b_Clusters_fBits;   //!
   TBranch        *b_Clusters_clusterID;   //!
   TBranch        *b_Clusters_pad_radials;   //!
   TBranch        *b_Clusters_pad_azimuths;   //!
   TBranch        *b_Clusters_samples;   //!
   TBranch        *b_Clusters_pad_radial_samples;   //!
   TBranch        *b_Clusters_pad_azimuth_samples;   //!
   TBranch        *b_Clusters_pad_radial_samples_n;   //!
   TBranch        *b_Clusters_pad_azimuth_samples_n;   //!
   TBranch        *b_Clusters_pad_radial_samples_v;   //!
   TBranch        *b_Clusters_pad_azimuth_samples_v;   //!
   TBranch        *b_Clusters_sum_samples;   //!
   TBranch        *b_Clusters_min_sample;   //!
   TBranch        *b_Clusters_max_sample;   //!
   TBranch        *b_Clusters_min_pad_azimuth;   //!
   TBranch        *b_Clusters_max_pad_azimuth;   //!
   TBranch        *b_Clusters_peak;   //!
   TBranch        *b_Clusters_peak_sample;   //!
   TBranch        *b_Clusters_pedstal;   //!
   TBranch        *b_Clusters_pad_azimuth_peaks;   //!
   TBranch        *b_Clusters_avg_pad_radial;   //!
   TBranch        *b_Clusters_avg_pad_azimuth;   //!
   TBranch        *b_Clusters_size_pad_radial;   //!
   TBranch        *b_Clusters_size_pad_azimuth;   //!
   TBranch        *b_Clusters_avg_pos_x;   //!
   TBranch        *b_Clusters_avg_pos_y;   //!
   TBranch        *b_Clusters_avg_pos_z;   //!
   TBranch        *b_Clusters_delta_azimuth_bin;   //!
   TBranch        *b_Clusters_delta_z;   //!
   TBranch        *b_Clusters_delta_z_cp;   //!

   LoopOverEvents(TTree *tree=0);
   virtual ~LoopOverEvents();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef LoopOverEvents_cxx
LoopOverEvents::LoopOverEvents(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../tpc_beam_00000288-0000.evt_TpcPrototypeUnpacker.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../tpc_beam_00000288-0000.evt_TpcPrototypeUnpacker.root");
      }
      f->GetObject("eventT",tree);

   }
   Init(tree);
}

LoopOverEvents::~LoopOverEvents()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t LoopOverEvents::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t LoopOverEvents::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void LoopOverEvents::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("fUniqueID", &fUniqueID, &b_evthdr_fUniqueID);
   fChain->SetBranchAddress("fBits", &fBits, &b_evthdr_fBits);
   fChain->SetBranchAddress("run", &run, &b_evthdr_run);
   fChain->SetBranchAddress("event", &event, &b_evthdr_event);
   fChain->SetBranchAddress("bx_counter", &bx_counter, &b_evthdr_bx_counter);
   fChain->SetBranchAddress("bx_counter_consistent", &bx_counter_consistent, &b_evthdr_bx_counter_consistent);
   fChain->SetBranchAddress("xray_x", &xray_x, &b_evthdr_xray_x);
   fChain->SetBranchAddress("xray_y", &xray_y, &b_evthdr_xray_y);
   fChain->SetBranchAddress("nClusters", &nClusters, &b_nClusters);
   fChain->SetBranchAddress("Clusters", &Clusters_, &b_Clusters_);
   fChain->SetBranchAddress("Clusters.fUniqueID", Clusters_fUniqueID, &b_Clusters_fUniqueID);
   fChain->SetBranchAddress("Clusters.fBits", Clusters_fBits, &b_Clusters_fBits);
   fChain->SetBranchAddress("Clusters.clusterID", Clusters_clusterID, &b_Clusters_clusterID);
   fChain->SetBranchAddress("Clusters.pad_radials", Clusters_pad_radials, &b_Clusters_pad_radials);
   fChain->SetBranchAddress("Clusters.pad_azimuths", Clusters_pad_azimuths, &b_Clusters_pad_azimuths);
   fChain->SetBranchAddress("Clusters.samples", Clusters_samples, &b_Clusters_samples);
   fChain->SetBranchAddress("Clusters.pad_radial_samples", Clusters_pad_radial_samples, &b_Clusters_pad_radial_samples);
   fChain->SetBranchAddress("Clusters.pad_azimuth_samples", Clusters_pad_azimuth_samples, &b_Clusters_pad_azimuth_samples);
   fChain->SetBranchAddress("Clusters.pad_radial_samples_n", Clusters_pad_radial_samples_n, &b_Clusters_pad_radial_samples_n);
   fChain->SetBranchAddress("Clusters.pad_azimuth_samples_n", Clusters_pad_azimuth_samples_n, &b_Clusters_pad_azimuth_samples_n);
   fChain->SetBranchAddress("Clusters.pad_radial_samples_v", Clusters_pad_radial_samples_v, &b_Clusters_pad_radial_samples_v);
   fChain->SetBranchAddress("Clusters.pad_azimuth_samples_v", Clusters_pad_azimuth_samples_v, &b_Clusters_pad_azimuth_samples_v);
   fChain->SetBranchAddress("Clusters.sum_samples", Clusters_sum_samples, &b_Clusters_sum_samples);
   fChain->SetBranchAddress("Clusters.min_sample", Clusters_min_sample, &b_Clusters_min_sample);
   fChain->SetBranchAddress("Clusters.max_sample", Clusters_max_sample, &b_Clusters_max_sample);
   fChain->SetBranchAddress("Clusters.min_pad_azimuth", Clusters_min_pad_azimuth, &b_Clusters_min_pad_azimuth);
   fChain->SetBranchAddress("Clusters.max_pad_azimuth", Clusters_max_pad_azimuth, &b_Clusters_max_pad_azimuth);
   fChain->SetBranchAddress("Clusters.peak", Clusters_peak, &b_Clusters_peak);
   fChain->SetBranchAddress("Clusters.peak_sample", Clusters_peak_sample, &b_Clusters_peak_sample);
   fChain->SetBranchAddress("Clusters.pedstal", Clusters_pedstal, &b_Clusters_pedstal);
   fChain->SetBranchAddress("Clusters.pad_azimuth_peaks", Clusters_pad_azimuth_peaks, &b_Clusters_pad_azimuth_peaks);
   fChain->SetBranchAddress("Clusters.avg_pad_radial", Clusters_avg_pad_radial, &b_Clusters_avg_pad_radial);
   fChain->SetBranchAddress("Clusters.avg_pad_azimuth", Clusters_avg_pad_azimuth, &b_Clusters_avg_pad_azimuth);
   fChain->SetBranchAddress("Clusters.size_pad_radial", Clusters_size_pad_radial, &b_Clusters_size_pad_radial);
   fChain->SetBranchAddress("Clusters.size_pad_azimuth", Clusters_size_pad_azimuth, &b_Clusters_size_pad_azimuth);
   fChain->SetBranchAddress("Clusters.avg_pos_x", Clusters_avg_pos_x, &b_Clusters_avg_pos_x);
   fChain->SetBranchAddress("Clusters.avg_pos_y", Clusters_avg_pos_y, &b_Clusters_avg_pos_y);
   fChain->SetBranchAddress("Clusters.avg_pos_z", Clusters_avg_pos_z, &b_Clusters_avg_pos_z);
   fChain->SetBranchAddress("Clusters.delta_azimuth_bin", Clusters_delta_azimuth_bin, &b_Clusters_delta_azimuth_bin);
   fChain->SetBranchAddress("Clusters.delta_z", Clusters_delta_z, &b_Clusters_delta_z);
   fChain->SetBranchAddress("Clusters.delta_z_cp", Clusters_delta_z_cp, &b_Clusters_delta_z_cp);
   Notify();
}

Bool_t LoopOverEvents::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void LoopOverEvents::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t LoopOverEvents::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef LoopOverEvents_cxx
