# ZX Spectrum USB!

This keyboard firmware allows modern hardware to replicate a classic ZX Spectrum, for use in emulators.

* Keyboard Maintainer: [Paul Wilkinson](https://github.com/paulmw)
* Hardware Supported: Arduino Pro Micro
* Hardware Availability: PCB TBD

Make example for this keyboard (after setting up your build environment):

    make zx:default

Flashing example for this keyboard:

    make zx:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

The original 16K / 48K ZX Spectrum uses a [5x8 matrix](https://mrpjevans.com/content/images/2018/11/key_spec.gif), without diodes to prevent ghosting.

See the [Pro Micro Hookup Guide](https://golem.hu/pic/pro_micro_pinout.jpg)

The following connections are required:

    KB1 -> Pro Micro

	1 -> 5 (C6)
	2 -> 6 (D7)
	3 -> 7 (E6)
	4 -> 8 (B4)
	5 -> 9 (B5)

    KB2 -> Pro Micro

	1 -> 10 (B6)
	2 -> 16 (B2)
	3 -> 14 (B3)
	4 -> 15 (B1)
	5 -> 18 (F7)
	6 -> 19 (F6)
	7 -> 20 (F5)
	8 -> 21 (F4)

