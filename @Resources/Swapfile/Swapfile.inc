; >>>Immense BARS >>> Swapfile >>> Swapfile.inc

;=====================================================
;[Measures]===========================================
;=====================================================

;[MeasureSWAP]
;Measure=SwapMemory
;Total=1

;[MeasureRAMUsed]
;Measure=PhysicalMemory

;[MeasureSWAPRAMUsed]
;Measure=SWAPMemory

;[MeasureSWAPUsed]
;Measure=Calc
;Formula= MeasureSWAPRAMUsed - MeasureRAMUsed

;[MeasureSwapUsedPercentage]
;Measure=Calc
;Formula=MeasureSWAPUsed
;MinValue=0
;MaxValue=134217728

[MeasureSwapUsed]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=Paging File
PerfMonCounter=% Usage
PerfMonInstance=_Total

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

[SWAPGraphBackground]
Meter=Image
MeterStyle=XGraphBackground

[SWAPHistogram]
Meter=Histogram
MeasureName=MeasureSwapUsed
MeterStyle=XHistogram
Hidden=0

[SWAPLine]
Meter=Line
MeasureName=MeasureSwapUsed
MeterStyle=XLine
Hidden=1

[SWAPLabel]
Meter=String
Text="SWAP"
MeterStyle=XLabel

[SWAPSeperator]
Meter=Image
MeterStyle=XSeperator

[SWAPBarBackground]
Meter=Image
MeterStyle=XBarBackground

[SWAPBar]
Meter=Bar
MeasureName=MeasureSwapUsed
MeterStyle=XBar

[SWAPValue]
Meter=String
MeasureName=MeasureSwapUsed
MeterStyle=XValue
;AutoScale=1k
Text="%1B"