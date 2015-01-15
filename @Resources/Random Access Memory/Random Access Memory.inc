; >>>Immense BARS >>> Random Access Memory >>> Random Access Memory.inc

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureRAMUsed]
Measure=PhysicalMemory

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

[RAMGraphBackground]
Meter=Image
MeterStyle=XGraphBackground

[RAMHistogram]
Meter=Histogram
MeasureName=MeasureRAMUsed
MeterStyle=XHistogram
Hidden=#GraphType#

[RAMLine]
Meter=Line
MeasureName=MeasureRAMUsed
MeterStyle=XLine
Hidden=(#GraphType# = 0 ? 1 : 0)

[RAMLabel]
Meter=String
Text="RAM"
MeterStyle=XLabel

[RAMSeperator]
Meter=Image
MeterStyle=XSeperator

[RAMBarBackground]
Meter=Image
MeterStyle=XBarBackground

[RAMBar]
Meter=Bar
MeasureName=MeasureRAMUsed
MeterStyle=XBar

[RAMValue]
Meter=String
MeasureName=MeasureRAMUsed
MeterStyle=XValue
AutoScale=1k
Text="%1B"