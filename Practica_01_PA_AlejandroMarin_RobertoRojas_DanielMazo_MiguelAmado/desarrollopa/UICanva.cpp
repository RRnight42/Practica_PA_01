#include "UICanva.h"

void UICanva::Render() {


    heart1->Render();
    heart2->Render();
    heart3->Render();
          
    coinUI->Render();
    coinsText->Render();

    if (activePowerUp == nullptr) {}
    else { this->activePowerUp->Render(); }

   


}
void UICanva::InitUI() {
 

    //posiciones en el canva
    coinsText->SetPosition(this->GetPosition() + Vector3D(13,9.5,0));
    heart1->SetPosition(this->GetPosition() + Vector3D(2, 2, 0));
    heart2->SetPosition(this->GetPosition() + Vector3D(2, 2, 0));
    heart3->SetPosition(this->GetPosition() + Vector3D(2, 2, 0));
    coinUI->SetPosition(this->GetPosition() + Vector3D(2, 2, 0));

    // aqui CONFIGURAMOS TODO EL CANVA



    loader.LoadModel("");
    loader.SetScale(2);
    *coinUI = loader.GetModel();




   

    


}


void UICanva::UpdateHeartsUI(const int& currentLive) {


    if (currentLive == 3) {   
        heart1->SetColor(Color(1, 0, 0, 1));
        heart2->SetColor(Color(1, 0, 0, 1));
        heart3->SetColor(Color(1, 0, 0, 1));   
    }else if (currentLive == 2) {
        heart1->SetColor(Color(1, 0, 0, 1));
        heart2->SetColor(Color(1, 0, 0, 1));
        heart3->SetColor(Color(1, 0, 0, 0));
    }else if (currentLive == 1) {
        heart1->SetColor(Color(1, 0, 0, 1));
        heart2->SetColor(Color(1, 0, 0, 0));
        heart3->SetColor(Color(1, 0, 0, 0));

    }else if (currentLive == 0) {
        heart1->SetColor(Color(1, 0, 0, 0));
        heart2->SetColor(Color(1, 0, 0, 0));
        heart3->SetColor(Color(1, 0, 0, 0));
    }
   


}


void UICanva::SetActivePowerUpUI(const int& power) {

    switch (power) {

    case 0:
        this->activePowerUp = nullptr;
        break;

    case 1:
        this->activePowerUp = rayPowerUpUI;
        break;

    case 2:
        this->activePowerUp = shieldPowerUpUI;
        break;

    case 3:
        this->activePowerUp = speedPowerUpUI;
        break;

    }
}


Solid* UICanva::Clone() {


    return new UICanva(*this);


}