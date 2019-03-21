void analyse(){

  TFile *_file0 = TFile::Open("output.root");

  Singles->Draw("globalPosY:globalPosZ>>h1(500,-250,250,500,-250,250)");
  c1->Close();
  TCanvas *c1 = new TCanvas("c1","c1",750,750);
  h1->Draw("COLZ");



  
}
