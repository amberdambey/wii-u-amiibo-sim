# wii-u-amiibo-sim
Emulate Wii U Amiibo files

Screenshots
-----------

Default menu

![Screen Shot 2022-06-24 at 07 22 50](https://user-images.githubusercontent.com/99459304/175553408-32685b7f-e5d5-43e6-97c3-7ffa3425f433.png)

In-game quick menu (L+Select+Down)

![Screen Shot 2022-06-24 at 07 23 40](https://user-images.githubusercontent.com/99459304/175553607-bd7c04f0-1313-4390-8712-d9eae1c06c0b.png)

Working in-game

![Screen Shot 2022-06-24 at 07 39 44](https://user-images.githubusercontent.com/99459304/175553830-3113daeb-be7a-4a10-bb6b-7603e8699e92.png)

Features
--------

- Amiibo BIN emulation
- File browser with UI
- Icon previews
- NFC tag dumping
- Stable nn_nfp.rpl patching
- Edit custom mii/nickname settings
- In-game menu
- Hold the left stick click to emulate touching amiibo to the Wii U gamepad
- Reset Amiibo game data/edit nickname while in a game
- Map multiple Amiibos to different buttons (useful for Animal Crossing: Amiibo Festival)

Usage
-----

To get a BIN file from an Amiibo, you'll either need to [download one from here](https://hax0kartik.github.io/amiibo-generator) or dump one you already own. Place them in the /wiiu/apps/amiibosim/amiibo/ folder on your sd card to use them. Also if you've downloaded it from the above link, the preview will download from internet and show. If you see exception of type dsi occured in the L+sel+down menu of a game when a preview is displayed, hold power on the console, and in the initial menu you can disable previews by pressing the minus (-) button on the gamepad. This is the most likely cause of a crash.

To dump an Amiibo into a BIN file, just open the menu (you can't do this in a game!) and touch it to the gamepad. When the screen changes, press A to extract it to "DumpNNN.bin" (NNN increases by 1 each dump) in the current browsed folder. Data is automatically decrypted. Make sure to keep the Amiibo in place for at least 20 seconds during dumping to prevent corruption.

To edit the nickname or mii of a real Amiibo (before dumping), touch it to the gamepad and press X. To edit the nickname, press X again and the on screen keyboard will appear. To edit the mii, press Y and a list of your console's mii names will appear (no previews, just text). Select one with the d-pad and A. Or press Y to save this mii to your mii maker. When applying changes, press A and keep the Amiibo on the gamepad until writing is complete. Or press B at any time to cancel.

In the selection menu, you may select up to six amiibo bins to emulate. This is due to RAM limitations. Even without the fancy OS Screen framebuffer gui with custom font, i'm still limited to 6 bins loaded at once. (The font renderer uses relatively little memory). If an item is orange, it is in the list of amiibo you want to emulate. Press A to toggle an item orange (not in list) or white (in list). If you have it selected (move selection with d-pad, NOT THE STICK), it will appear blue (not in list) or pink (in list). Whichever item is selected will be the default to emulate when L3 is pressed. If the selection is not in the list, nothing will happen when L3 is pressed.

In the game menu (L+sel+dn), you may select another figure to emulate when L3 is pressed. To bind the figure to another button, press L3 while selecting it, then press the button you want to use instead. Up to 4 can be mapped to buttons at once. It will appear red (gray when selected) to indicate that it is assigned to a button. Press A while selecting it to reset it back to L3 and return to the game. Press Y to disable mapping the selection to L3 and return to the game. Please note that you cannot dump amiibo while in the game. Also all files with the .bin extension in the last browsed folder will appear in the in-game menu and cannot be selected.

Compatibility
-------------

?: Untested

3: Works

2: Partially works (might not save correctly, or some Amiibos might not be compatible)

1: Doesn't work

---

2: Super Smash Bros. for Wii U
Notes: When training the Amiibo, it always resets to Level 1 when opening the menu and closing it. Also, the specified nickname is not displayed in-game.

1: Mario Kart 8
Notes: Every Amiibo figure will show the "not compatible" message.

?: Captain Toad: Treasure Tracker

3: Mario Party 10

3: Yoshi's Woolly World

?: Hyrule Warriors

3: The Legend of Zelda: Breath of the Wild

1: Star Fox Zero
Notes: No Amiibo is recognized.

3: Animal Crossing: Amiibo Festival

2: Splatoon
Notes: Amiibo is recognized in-game, but you can't unlock any content with it
