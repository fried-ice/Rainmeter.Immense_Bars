; >>>Immense BARS >>> Network >>> Network.inc

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureNetIn]
Measure=NetIn
MaxValue=#NetIn#
Interface=#NetworkInterface#

[MeasureNetOut]
Measure=NetOut
MaxValue=#NetOut#
Interface=#NetworkInterface#

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

;===Network in========================================
[NetInGraphInBackground]
Meter=Image
MeterStyle=XGraphBackground

[NetInHistogram]
Meter=Histogram
MeasureName=MeasureNetIn
MeterStyle=XHistogram
Hidden=#GraphType#

[NetInine]
Meter=Line
MeasureName=MeasureNetIn
MeterStyle=XLine
Hidden=(#GraphType# = 0 ? 1 : 0)

[NetInLabel]
Meter=String
Text="Network in"
MeterStyle=XLabel

[NetInSeperator]
Meter=Image
MeterStyle=XSeperator

[NetInBarBackground]
Meter=Image
MeterStyle=XBarBackground

[NetInBar]
Meter=Bar
MeasureName=MeasureNetIn
MeterStyle=XBar

[NetInValue]
Meter=String
MeasureName=MeasureNetIn
MeterStyle=XValue
AutoScale=1k
Text="%1B/s"

;===Network out=======================================
[NetOutBackground]
Meter=Image
MeterStyle=XGraphBackground2

[NetOutHistogram]
Meter=Histogram
MeasureName=MeasureNetOut
MeterStyle=XHistogram2
Hidden=#GraphType#

[NetOutine]
Meter=Line
MeasureName=MeasureNetOut
MeterStyle=XLine2
Hidden=(#GraphType# = 0 ? 1 : 0)

[NetOutLabel]
Meter=String
Text="Network out"
MeterStyle=XLabel2

[NETOutSeperator]
Meter=Image
MeterStyle=XSeperator2

[NetOutBarBackground]
Meter=Image
MeterStyle=XBarBackground2

[NetOutBar]
Meter=Bar
MeasureName=MeasureNetOut
MeterStyle=XBar2

[NetOutValue]
Meter=String
MeasureName=MeasureNetOut
MeterStyle=XValue2
AutoScale=1k
Text="%1B/s"