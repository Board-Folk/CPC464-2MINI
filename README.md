# CPC464-2MINI

A Mini CPC464

** Work In Progress **

A miniaturised version of Amstrad CPC464 second release with extensions. The main intention to replace everything DIP with SMD as small as reasonably possible. Latest versions, with everything on it, it functions as a 6128. This project is very much a private hobby project at this stage. It's been uploaded because of general interest.

More of the project will be dropped in over time, kind of a place to sort out what's happened if you like, and what's working. There have been that many revisions/expansions - it's been getting hard to keep track.

## Revisions

The current version of the main board is v5.3, which uses the Xilinx based gate array replacement linked to in the links section below. Versions v4 and previous require an original Amstrad 40010 or 40007 gate array (with adapter) for operation. Use of a 40007 somewhat impares operation especially regarding memory and other expansion compatiblity.

## Main Points

* Regulated 5V operation (centre terminal positive).
* The main board supports a full size original CPC464 Keyboard, not the later ones with the ribbon cables. An alternative PS/2 interface, which I expect most people will want to use is in the expansions folder.
* All releases still use 4164 RAM chips. Attempts at replacing these have so far failed due to the dual data bus (separate in and out pins are needed). Any help appreciated on this front.
* All resistors and ceramic capacitors are 0805.
* Later revisions use PLCC32 instead of DIP28 for ROM due to space constraints.
* The v5 series board now also only supports the AY-3-8910 sound chip. Some board supported the 8912, some both, the 8910 is much more readily available, also significantly cheaper.
* Some revisions of the board use a QFP44 Z80 including the latest.
* Tape support changed for v5 on a different header needing an expansion card which hasn't been finished yet. Previous versions have a header compatible with the original 464 tape drive, and an adapter board for 3.5mm mono audio connections for a regular tape recorder/tapuino etc.
* There was a Mini-ITX version completed which included the disk interface (basically like a 6128), based on the pre-v5 boards.

## Expansions

Expansion boards will be added over time. I'll try to place a big note in each readme which boards have not been tested where they've not. You'll probably want the edge connector, MINIDDI and PS/2 interfaces.

Internal expansion boards stack vertically over a 50 pin IDC. Be warned, the rows for this are inverted from common secondary 6128 expansion cards that may already exist. As things are at the moment each expansion card presents two headers for this to allow more options for stacking if you can't find the right socket/headers to stack directly.

* Edge Connector

It was decreed that the main board wasn't going to include the original Amstrad edge connector as intended the expansions would be all neat and internal. The edge connector board solders on to the expansion connector on the base to provide the edge connector for traditional CPC expansions. This also has the virtue that the main board doesn't need ENIG, only this.

* MINIDDI

A version of the DDI-1 interface modified with the feelings of a 6128 and PPC640 to providing a 3.5" disk or Gotek drive interface. There's an adapter board for 3" drives.

* PS/2

An ATMEGA328 based PS/2 adapter interface that mounts on the left of the board so you don't need an original keyboard.

## Credits

Many thanks to Rob Taylor @peepouk and Chrissy @chris_jh with whom this project started and the rest of the Board Folk Team.
Special thanks to Noel Llopis for his amazing test ROM which has been invaluable for fixing buggy boards along the way.

## Links

  [AMSGateArray Gate Replacement Project](https://github.com/codedchip/AMSGateArray)<br>
  [Noel's Amstrad Diagnostics Test Suite](https://github.com/llopis/amstrad-diagnostics)
