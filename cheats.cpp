#include "cheats.hpp"

namespace CTRPluginFramework
{
   void cheat(MenuEntry *entry)
    {
        if(Controller::IsKeyDown(Key::DPadUp) && Controller::IsKeyDown(Key::B))
        {
            float value;
            Process::ReadFloat(0xBFB08E8, value);
            Process::WriteFloat(0xBFB08E8, value - 8);
        }
        if(Controller::IsKeyDown(Key::DPadDown) && Controller::IsKeyDown(Key::B))
        {
            float value;
            Process::ReadFloat(0xBFB08E8, value);
            Process::WriteFloat(0xBFB08E8, value + 8);
        }
        if(Controller::IsKeyDown(Key::DPadRight) && Controller::IsKeyDown(Key::B))
        {
            float value;
            Process::ReadFloat(0xBFB08E0, value);
            Process::WriteFloat(0xBFB08E0, value + 8);
        }
        if(Controller::IsKeyDown(Key::DPadLeft) && Controller::IsKeyDown(Key::B))
        {
            float value;
            Process::ReadFloat(0xBFB08E0, value);
            Process::WriteFloat(0xBFB08E0, value - 8);
        }
    }
    void ntr(MenuEntry *entry)
        {
            u32 offset;
            Process::Write32(offset + 0x0509AC0, 0xE1A00000);
        }
    void mane(MenuEntry *entry)
       {
            u32 A;
            Keyboard key("鬼玉所持数変更(10進数)");
            key.IsHexadecimal(false);
            key.Open(A);
            Process::Write32(0xBECBF2C, A);
       }
    void ball(MenuEntry *entry)
    {
        u32 offset;
        Process::Write32(0xC1C5924, 0x200);
    }
    void holl(MenuEntry *entry)
    {
        u32 offset;
        Process::Write32(0xC1C5920, 0x270F);
    }
    void jell(MenuEntry *entry)
    {
        u32 offset;
        Process::Write32(offset + 0xBED84FC , 0x4467E328);
        Process::Write32(offset + 0xBED8508 , 0x4467E328);
        Process::Write32(offset + 0xBED8514 , 0x4467E328);
        Process::Write32(offset + 0xBED8520 , 0x4467E328);
        Process::Write32(offset + 0xBED8500 , 0x00006301);
        Process::Write32(offset + 0xBED850C , 0x00006301);
        Process::Write32(offset + 0xBED8518 , 0x00006301);
        Process::Write32(offset + 0xBED8524 , 0x00006301);
    }
    void pro(MenuEntry *entry)
   {
    u16 A;
    u16 B;
    u16 C;
    u16 D;
    u16 E;
    u16 F;
    u16 G;
    u16 H;
    u16 I;
    u16 J;
    u16 K;
    u16 L;
    u16 M;
    u16 N;
    u16 O;
    u16 P;
    u16 Q;
    Keyboard key("プロフィールの文字変更(16進数)");
    key.Open(A);
    key.Open(B);
    key.Open(C);
    key.Open(D);
    key.Open(E);
    key.Open(F);
    key.Open(G);
    key.Open(H);
    key.Open(I);
    key.Open(J);
    key.Open(K);
    key.Open(L);
    key.Open(M);
    key.Open(O);
    key.Open(P);
    key.Open(Q);
    Process::Write16(0x10BED5B60 , A);
    Process::Write16(0x10BED5B62 , B);
    Process::Write16(0x10BED5B64 , C);
    Process::Write16(0x10BED5B66 , D);
    Process::Write16(0x10BED5B68 , E);
    Process::Write16(0x10BED5B6A , F);
    Process::Write16(0x10BED5B6C , G);
    Process::Write16(0x10BED5B6E , H);
    Process::Write16(0x10BED5B70 , I);
    Process::Write16(0x10BED5B72 , J);
    Process::Write16(0x10BED5B74 , K);
    Process::Write16(0x10BED5B76 , L);
    Process::Write16(0x10BED5B78 , M);
    Process::Write16(0x10BED5B7A , O);
    Process::Write16(0x10BED5B7C , P);
    Process::Write16(0x10BED5B7E , Q);
   }
   void otakara(MenuEntry *entry)
   {
    u16 A;
    u16 B;
    u16 C;
    u16 D;
    u16 E;
    u16 F;
    u16 G;
    u16 H;
    Keyboard key("お宝ハック(16進数)");
    key.Open(A);
    key.Open(B);
    key.Open(C);
    key.Open(D);
    key.Open(E);
    key.Open(F);
    key.Open(G);
    key.Open(H);
    Process::Write16(0xBED84FC , A);
    Process::Write16(0xBED84FE , B);
    Process::Write16(0xBED8508 , C);
    Process::Write16(0xBED850A , D);
    Process::Write16(0xBED8514 , E);
    Process::Write16(0xBED8516 , F);
    Process::Write16(0xBED8520 , G);
    Process::Write16(0xBED8522 , H);
   }
}