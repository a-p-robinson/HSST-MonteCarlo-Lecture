void analyse2(){

  TFile *_file0 = TFile::Open("output.root");

  Singles->Draw("globalPosY:globalPosZ>>h1(125,-250,250,125,-250,250)","headID==0 & comptonPhantom==0");
  Singles->Draw("globalPosY:globalPosZ>>h2(125,-250,250,125,-250,250)","headID==1&& comptonPhantom==0");
  Singles->Draw("globalPosY:globalPosZ>>h3(125,-250,250,125,-250,250)","headID==0 & comptonPhantom>0");
  Singles->Draw("globalPosY:globalPosZ>>h4(125,-250,250,125,-250,250)","headID==1&& comptonPhantom>0");
  
  c1->Close();
  TCanvas *c1 = new TCanvas("c1","c1",900,750);
  c1->Divide(2,2);
  c1->cd(1);
  h1->Draw("COLZ");
  c1->cd(2);
  h2->Draw("COLZ");
  c1->cd(3);
  h3->Draw("COLZ");
  c1->cd(4);
  h4->Draw("COLZ");

  
}
