board = {
    '1': ' ', '2': ' ', '3': ' ',
    '4': ' ', '5': ' ', '6': ' ',
    '7': ' ', '8': ' ', '9': ' '
}

class text:
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    DARKCYAN = '\033[36m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    GREEN = '\033[92m'
    END = '\033[0m'

def printBoard(board):
    print("\n")
    print(board['1'] + " | " + board['2'] + " | " + board['3'])
    print('- + - + -')
    print(board['4'] + " | " + board['5'] + " | " + board['6'])
    print('- + - + -')
    print(board['7'] + " | " + board['8'] + " | " + board['9'])
    print('- + - + -')

def Begins():
    player = 'X'
    count = 0

    print("\n\n\t\t\t\t🎍🎍🎍" + text.BOLD + text.UNDERLINE + text.DARKCYAN +
          "Welcome to @TicTacToe" + text.END + text.END + text.END + "🎍🎍🎍\t\t\t\t\t")
    for i in range(100):
        printBoard(board)
        move = input("\nNow, the player comes to player " + text.BOLD + text.YELLOW +
                     player + text.END + " What position would you choose? :  ")

        # move = input()

        if board[move] == ' ':
            board[move] = player
            count += 1
        else:
            print(
                text.RED + "Oops! That pie is being eaten! Choose another one 😔" + text.END)
            continue

        if count >= 5:
            if board['7'] == board['8'] == board['9'] != ' ':  # across the top
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['4'] == board['5'] == board['6'] != ' ':  # across the middle
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['1'] == board['2'] == board['3'] != ' ':  # across the bottom
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['1'] == board['4'] == board['7'] != ' ':  # down the left side
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['2'] == board['5'] == board['8'] != ' ':  # down thse middle
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['3'] == board['6'] == board['9'] != ' ':  # down the right side
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['7'] == board['5'] == board['3'] != ' ':  # diagonal
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break
            elif board['1'] == board['5'] == board['9'] != ' ':  # diagonal
                printBoard(board)
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                print("\n" + text.GREEN +
                      "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
                print("\t"+"🥳🥳🥳 Player " +player + " Won. 🥳🥳🥳")
                print(text.YELLOW +
                      "--------------------------------------------" + text.END)
                break

        if count == 9:
            print(text.YELLOW +
                  "--------------------------------------------" + text.END)
            print("\n" + text.GREEN + "\t\t🎉Game Over🎉\t\t\t" + text.END+".\n")
            print("🥳 It's a Tie 🥳")
            print(text.YELLOW +
                  "--------------------------------------------" + text.END)
            break

        # Now we have to change the player after every move.
        if player == 'X':
            player = 'O'
        else:
            player = 'X'

if __name__ == "__main__":
    Begins()
