void analyse(){

  TFile *_file0 = TFile::Open("output.root");

  Singles->Draw("globalPosY:globalPosZ>>h1(125,-250,250,125,-250,250)","headID==0");
  Singles->Draw("globalPosY:globalPosZ>>h2(125,-250,250,125,-250,250)","headID==1");
  
  c1->Close();
  TCanvas *c1 = new TCanvas("c1","c1",1300,650);
  c1->Divide(2,1);
  c1->cd(1);
  h1->Draw("COLZ");
  c1->cd(2);
  h2->Draw("COLZ");

  
}
