[Variables]
Width=170
Height=20
BarHeight=2
Transparent=0,0,0,1
Font=Roboto Mono Italic
FontSize=12

; Include whichever color scheme you want here.
@include=Colors White.inc
; @include=Colors Black.inc

[sBg]
SolidColor=#Transparent#
W=#Width#
H=#Height#
X=0
Y=0

[sLabel]
FontColor=#ColorLabel#
FontSize=#FontSize#
FontFace=#Font#
StringAlign=Left
AntiAlias=1
W=#Width#
X=0r
Y=-4r

[sValue]
FontColor=#ColorValue#
FontSize=#FontSize#
FontFace=#Font#
StringAlign=Right
AntiAlias=1
W=#Width#
X=0R
Y=0r

[sBar]
BarColor=#ColorBarFg#
SolidColor=#ColorBarBg#
BarOrientation=Horizontal
W=#Width#
H=#BarHeight#
X=-#Width#r
Y=2R
