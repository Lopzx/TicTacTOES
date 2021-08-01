#include "ProtoSemuaFunction.h"

// Author: Lopzx
void bot_main(int*& board){
    //Ngecek secara vertikal dan horizontal
    //Mengecek Apakah Player Akan Menang
    //Jika sudah 2 baris X ,mencegah player menang
    for(int i = 0; i < 3; i++){
        if(board[i*3+1] == 'X'){
            if(board[i*3] == 'X' && board[i*3+2] != 'Y'){
                board[i*3+2] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }else if(board[i*3+2] == 'X' && board[i*3] != 'Y'){
                board[i*3] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
        if(board[i+3] == 'X'){
            if(board[i] == 'X' && board[i+6] != 'Y'){
                board[i+6] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }else if(board[i+6] == 'X' && board[i] != 'Y'){
                board[i] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
        if(board[i*3+1] != 'X' && board[i*3+1] != 'Y'){
            if(board[i*3] == 'X' && board[i*3+2] == 'X'){
                board[i*3+1] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
        if(board[i+3] != 'X' && board[i+3] != 'Y'){
            if(board[i] == 'X' && board[i+6] == 'X'){
                board[i+3] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
    }

    if(board[4] == 'X'){
        for(int i = 0,temp = 4; i < 4; i++,temp--){
            (2*temp == 4)? temp--: temp;
            (i*2 == 4)? i++:i;
            if(board[i*2] == 'X' && board[2*temp] != 'Y'){
                board[2*temp] = 'Y';
                user.giliranY--;
                return;
            }
        }
    }

    //Memilih Jalur
    

}

