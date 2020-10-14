; >>>Immense BARS >>> @Resources >>> !Configuration >>> Styles.inc

; This document contains nearly all the information of the layout of all skins.
; Feel free to make some changes!


;=====================================================
;[Bar and Histogramm/Line Meters]=====================
;=====================================================

;===First line========================================
[XGraphBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
H=#GraphHeight#
W=#GraphWidth#

[XHistogram]
Autoscale=#HistogramAutoScale#
PrimaryColor=#HistogramColor#
GraphStart=#HistogramGraphStart#
GraphOrientation=#HistogramGraphOrientation#
Flip=#HistogramFlip#
AntiAlias=1
Y=(#GraphHeight# / 2 )
H=(#GraphHeight# / 2 )
W=#GraphWidth#

[XLine]
Autoscale=#LineAutoScale#
LineColor=#LineColor#
GraphStart=#LineGraphStart#
GraphOrientation=#LineGraphOrientation#
Flip=#LineFlip#
LineWidth=#LineWidth#
HorizontalLines=#LineHorizontalLines#
HorizontalLineColor=#LineHorizontalLineColor#
AntiAlias=1
Y=(#GraphHeight# / 2 )
H=(#GraphHeight# / 2 )
W=#GraphWidth#

[XLabel]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#LabelFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
Y=(#GraphHeight# / 4)
;===Comment the next line (';') and uncomment the 2 lines below to enable a CenterCenter Align!
StringAlign=LeftCenter
;StringAlign=CenterCenter
;X=(#GraphWidth# / 2)

[XSeperator]
SolidColor=#SeperatorColor#
Y=((#GraphHeight# / 2 ) - (#SeperatorHeight# / 2))
W=#GraphWidth#
H=#SeperatorHeight#

[XBarBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
X=(#GraphWidth# + #GapHorizontal#)
H=#BarHeight#
W=#BarWidth#

[XBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
X=r
H=#BarHeight#
W=#BarWidth#

[XValue]
NumOfDecimals=#Bar.GraphNumberDecimals#
AntiAlias=1
FontFace=#ValueFontFace#
FontColor=#ValueFontColor#
FontSize=#ValueFontSize#
StringStyle=#ValueStringStyle#
StringCase=#ValueStringCase#
StringEffect=#ValueStringEffect#
FontEffectColor=#ValueFontEffectColor#
StringAlign=CenterCenter
X=(#BarWidth# / 2)r
Y=(#BarHeight# / 2)r

;===Second line======================================
[XGraphBackground2]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
Y=(#GraphHeight# + #GapVertical#)
H=#GraphHeight#
W=#GraphWidth#

[XHistogram2]
Autoscale=#HistogramAutoScale#
PrimaryColor=#HistogramColor#
GraphStart=#HistogramGraphStart#
GraphOrientation=#HistogramGraphOrientation#
Flip=#HistogramFlip#
AntiAlias=1
Y=((#GraphHeight# + #GapVertical#) + (#GraphHeight# / 2 ))
H=(#GraphHeight# / 2 )
W=#GraphWidth#

[XLine2]
Autoscale=#LineAutoScale#
LineColor=#LineColor#
GraphStart=#LineGraphStart#
GraphOrientation=#LineGraphOrientation#
Flip=#LineFlip#
LineWidth=#LineWidth#
HorizontalLines=#LineHorizontalLines#
HorizontalLineColor=#LineHorizontalLineColor#
AntiAlias=1
Y=r
H=(#GraphHeight# / 2 )
W=#GraphWidth#

[XLabel2]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#LabelFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
Y=((#GraphHeight# + #GapVertical#) + (#GraphHeight# / 4 ))
;===Comment the next line (';') and uncomment the 2 lines below to enable a CenterCenter Align!
StringAlign=LeftCenter
;StringAlign=CenterCenter
;X=(#GraphWidth# / 2)

[XSeperator2]
SolidColor=#SeperatorColor#
Y=((#GraphHeight# + #GapVertical#) + (#GraphHeight# / 2 ))
W=#GraphWidth#
H=#SeperatorHeight#

[XBarBackground2]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
X=(#GraphWidth# + #GapHorizontal#)
Y=(#BarHeight# + #GapVertical#)
H=#BarHeight#
W=#BarWidth#


[XBar2]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
X=r
Y=r
H=#BarHeight#
W=#BarWidth#

[XValue2]
AutoScale=1k
NumOfDecimals=#Bar.GraphNumberDecimals#
AntiAlias=1
FontFace=#ValueFontFace#
FontColor=#ValueFontColor#
FontSize=#ValueFontSize#
StringStyle=#ValueStringStyle#
StringCase=#ValueStringCase#
StringEffect=#ValueStringEffect#
FontEffectColor=#ValueFontEffectColor#
StringAlign=CenterCenter
X=(#BarWidth# / 2)r
Y=((#BarHeight# + #GapVertical#) + (#BarHeight# / 2))

;===Medium bars=======================================
[XMediumBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
H=#MediumBarHeight#
W=#MediumBarWidth#

[XMediumBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
H=#MediumBarHeight#
W=#MediumBarWidth#

[XMediumHistogram]
Autoscale=#HistogramAutoScale#
PrimaryColor=#HistogramColor#
GraphStart=#HistogramGraphStart#
GraphOrientation=#HistogramGraphOrientation#
AntiAlias=1
H=#MediumBarHeight#
W=#MediumBarWidth#

[XMediumLine]
Autoscale=#LineAutoScale#
LineColor=#LineColor#
GraphStart=#LineGraphStart#
GraphOrientation=#LineGraphOrientation#
LineWidth=#LineWidth#
HorizontalLines=#LineHorizontalLines#
HorizontalLineColor=#LineHorizontalLineColor#
AntiAlias=1
H=#MediumBarHeight#
W=#MediumBarWidth#

;===Small bars========================================
[XSmallBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
H=#SmallBarHeight#
W=#SmallBarWidth#

[XSmallBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
H=#SmallBarHeight#
W=#SmallBarWidth#

[XSmallHistogram]
Autoscale=#HistogramAutoScale#
PrimaryColor=#HistogramColor#
GraphStart=#HistogramGraphStart#
GraphOrientation=#HistogramGraphOrientation#
AntiAlias=1
H=#SmallBarHeight#
W=#SmallBarWidth#

[XSmallLine]
Autoscale=#LineAutoScale#
LineColor=#LineColor#
GraphStart=#LineGraphStart#
GraphOrientation=#LineGraphOrientation#
LineWidth=#LineWidth#
HorizontalLines=#LineHorizontalLines#
HorizontalLineColor=#LineHorizontalLineColor#
AntiAlias=1
H=#SmallBarHeight#
W=#SmallBarWidth#

;===Microbars=========================================
[XMicroBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
H=#MicroBarHeight#
W=#MicroBarWidth#

[XMicroBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
H=#MicroBarHeight#
W=#MicroBarWidth#

[XMicroHistogram]
Autoscale=#HistogramAutoScale#
PrimaryColor=#HistogramColor#
GraphStart=#HistogramGraphStart#
GraphOrientation=#HistogramGraphOrientation#
AntiAlias=1
H=#MicroBarHeight#
W=#MicroBarWidth#

[XMicroLine]
Autoscale=#LineAutoScale#
LineColor=#LineColor#
GraphStart=#LineGraphStart#
GraphOrientation=#LineGraphOrientation#
LineWidth=#LineWidth#
HorizontalLines=#LineHorizontalLines#
HorizontalLineColor=#LineHorizontalLineColor#
AntiAlias=1
H=#MicroBarHeight#
W=#MicroBarWidth#

;===Nanobars=========================================
[XNanoBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
H=#NanoBarHeight#
W=#NanoBarWidth#

[XNanoBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
H=#NanoBarHeight#
W=#NanoBarWidth#

[XNanoHistogram]
Autoscale=#HistogramAutoScale#
PrimaryColor=#HistogramColor#
GraphStart=#HistogramGraphStart#
GraphOrientation=#HistogramGraphOrientation#
AntiAlias=1
H=#NanoBarHeight#
W=#NanoBarWidth#

[XNanoLine]
Autoscale=#LineAutoScale#
LineColor=#LineColor#
GraphStart=#LineGraphStart#
GraphOrientation=#LineGraphOrientation#
LineWidth=#LineWidth#
HorizontalLines=#LineHorizontalLines#
HorizontalLineColor=#LineHorizontalLineColor#
AntiAlias=1
H=#NanoBarHeight#
W=#NanoBarWidth#

;=====================================================
;[Musicplayer]========================================
;=====================================================

[XArtwork]
AntiAlias=1
PreserveAspectRatio=1
BevelType=#BevelType#
W=#ArtworkWidth#
H=#ArtworkHeight#

[XProgressBarBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
X=(#ArtworkWidth#  + #GapHorizontal#)
Y=(#ArtworkHeight# * 0.5 - #ProgressBarHeight# * 0.5)
H=#ProgressBarHeight#
W=#ProgressBarWidth#

[XProgressBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
X=r
Y=r
H=#ProgressBarHeight#
W=#ProgressBarWidth#

[XProgress]
AntiAlias=1
FontFace=#ValueFontFace#
FontColor=#ValueFontColor#
FontSize=#ValueFontSize#
StringStyle=#ValueStringStyle#
StringCase=#ValueStringCase#
StringEffect=#ValueStringEffect#
FontEffectColor=#ValueFontEffectColor#
StringAlign=CenterCenter
X=(#ArtworkWidth#  + #GapHorizontal# + #ProgressBarWidth# * 0.5)
Y=(#ArtworkHeight# * 0.5)

[XArtistValue]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#MusicFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
StringAlign=LeftCenter
ClipString=1
X=(#ArtworkWidth#  + #GapHorizontal#)
Y=((#ArtworkHeight# - #ProgressBarHeight#) * 0.25)
W=(#ProgressBarWidth# * 0.5 - 5)
H=((#ArtworkHeight# - #ProgressBarHeight#) * 0.5)

[XAlbumValue]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#MusicFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
StringAlign=RightCenter
ClipString=1
X=(#ArtworkWidth#  + #GapHorizontal# + #ProgressBarWidth#)
Y=((#ArtworkHeight# - #ProgressBarHeight#) * 0.25)
W=(#ProgressBarWidth# * 0.5 - 5)
H=((#ArtworkHeight# - #ProgressBarHeight#) * 0.5)

[XTitleValue]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#MusicFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
StringAlign=LeftCenter
ClipString=1
X=(#ArtworkWidth#  + #GapHorizontal#)
Y=((#ArtworkHeight# - #ProgressBarHeight#) * 1.5)
W=(#ProgressBarWidth# * 0.75 - 5)
H=((#ArtworkHeight# - #ProgressBarHeight#) * 0.5)

;=====================================================
;[Clock]==============================================
;=====================================================

[XClockBarBackground]
SolidColor=#BackgroundColor#
BevelType=#BevelType#
H=#BarHeight#
W=#BarWidth#

[XClockBar]
BarOrientation=#BarOrientation#
BarColor=#BarColor#
Flip=#BarFlip#
H=#BarHeight#
W=#BarWidth#

[XClockValue]
AntiAlias=1
FontFace=#ValueFontFace#
FontColor=#ValueFontColor#
FontSize=(#ValueFontSize# + 4)
StringStyle=#ValueStringStyle#
StringCase=#ValueStringCase#
StringEffect=#ValueStringEffect#
FontEffectColor=#ValueFontEffectColor#
StringAlign=CenterCenter
X=(#BarWidth# * 0.5)

;=====================================================
;[Notes]==============================================
;=====================================================

[XHeader]
SolidColor=#BarColor#
BevelType=#BevelType#
W=#HeaderWidth#
H=#HeaderHeight#

[XHeaderCaption]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#LabelFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
StringAlign=CenterCenter
Y=(#HeaderHeight# * 0.5)

[XNote]
AntiAlias=1
FontFace=#LabelFontFace#
FontColor=#LabelFontColor#
FontSize=#NoteFontSize#
StringStyle=#LabelStringStyle#
StringCase=#LabelStringCase#
StringEffect=#LabelStringEffect#
FontEffectColor=#LabelFontEffectColor#
ClipString=1
SolidColor=0,0,0,1
Y=(#HeaderHeight# + #GapVertical#)
W=#BarWidth#
H=#NotesMaxHeight#



