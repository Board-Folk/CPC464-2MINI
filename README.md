# CPC464-2MINI

A Mini CPC464

** Work In Progress **

![Build v5.2 Board with Edge Connector, PS/2 Interface and MINIDDI](https://github.com/Board-Folk/CPC464-2MINI/blob/main/Photos/v5.2_miniddi_ps2_edge_small.png)

A miniaturised version of Amstrad CPC464 second release with extensions. The main intention to try replace as much DIP with SMD as possible and have it as small as reasonably possible, with a standard board footprint that can later fit a 3D printed case that doesn't change between revisions. Latest versions, with everything on them, function as a 6128. This project is very much a private hobby project for now and is for fun and elements may lack any valid reason. It's been uploaded because of general interest.

More of the project may be dropped in here over time, kind of a place to sort out what's happened if you like, and what's working. There have been that many revisions/expansions it's been getting hard to keep track so it's nice to have a place. Things may be flagged as broken or untested where cautiously uploaded.

## Revisions

The current version of the main board is v5.3, which uses the AMSGateArray Xilinx based gate array replacement linked to in the links section below. Versions v4 and before require an original Amstrad 40010 or 40007 gate array (with adapter) for operation. Use of a 40007 somewhat impares operation especially regarding memory and other expansion compatiblity. Please see the readme file in each revisions folder for version specific information.

## Some Main Points

* Regulated 5V operation (centre terminal positive).
* The main board supports a full size original CPC464 Keyboard, **not** the later ones with the flat ribbon cables. An alternative PS/2 interface, which I expect most people will want to use is in the expansions folder.
* All releases still use 4164 RAM chips. Attempts at replacing these have so far failed due to the dual data bus (separate in and out pins are needed). Any help appreciated on this front, I can send schematics of my best guess so far which didn't work.
* All resistors and ceramic capacitors are 0805.
* Later revisions use PLCC32 instead of DIP28 for ROM due to space constraints.
* The v5 series board now also only supports the AY-3-8910 sound chip. Some earlier board supported the 8912, some both, the 8910 is much more readily available, also significantly cheaper. To note, you **can't** use an AY-3-8912 emulation board (well none that I've seen) with an Amstrad, they don't do the IO functions needed only sound.
* Some revisions of the board use a QFP44 Z80 not DIP40, including the latest revision, please check.
* Tape support changed for v5 on a different header needing an expansion card which hasn't been finished yet. Previous versions have a header compatible with the original 464 tape drive, and an adapter board for 3.5mm mono audio connections for a regular tape recorder/tapuino etc.
* There was a Mini-ITX version completed which included the disk interface (basically like a 6128), based on the pre-v5 boards in the Archive folder.
* As with original Amstrad CPCs of this generation, if you use the often more common A version AY-3 chip, e.g. AY-3-8910A you will need the SIP9 10K pullup resistor NR1 or your keyboard and joystick will not work correctly.

## Expansions

Expansion boards will be added over time. I'll try to place a big note in each readme which boards have not been tested. You'll probably want the Edge Connector, MINIDDI and PS/2 interfaces.

Internal expansion boards stack vertically over a 2x25 pin header. Be warned, the rows for this are inverted from common secondary 6128 expansion cards that may already exist, though they typically need expansion adapter boards anyway for which there is one for this board. As things are at the moment each expansion card presents two headers for this to allow more options for stacking if you can't find the right socket/headers to stack directly. The primary expansions are:

* PS/2

An ATMEGA328/MT8816 based PS/2 adapter interface that mounts on the left of the board so you don't need an original keyboard.

* MINIEdge Edge Connector

It was decreed that the main board wasn't going to include the original Amstrad edge connector as intended the expansions would be all neat and internal. The edge connector board solders on to the expansion connector on the base to provide the edge connector for traditional CPC expansions. This also has the virtue that the main board doesn't need ENIG, only this.

* MINIDDI

A version of the DDI-1 interface modified with the feelings of a 6128 and PPC640 to providing a 3.5" disk or Gotek drive interface. There's an adapter board for 3" drives.

## Credits

Many thanks to Rob Taylor @peepouk and Chrissy @chris_jh with whom this project started, Richard Fry, Ian Stocks and the rest of the Board Folk Team. 
Special thanks to Noel Llopis for his amazing test ROM which has been invaluable for fixing buggy boards along the way.

## Links

  [AMSGateArray Gate Replacement Project](https://github.com/codedchip/AMSGateArray)<br>
  [Noel's Amstrad Diagnostics Test Suite](https://github.com/llopis/amstrad-diagnostics)

** More photos to follow **
