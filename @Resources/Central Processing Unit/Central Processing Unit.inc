; >>>Immense BARS >>> Central Processing Unit >>> Central Processing Unit.inc

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureCPUTotal]
Measure=CPU
Processor=0

[MeasureCPUTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#CPUHWiNFOSensorID#
HWiNFOSensorInstance=#CPUHWiNFOSeansorInstance#
HWiNFOEntryId=#CPUTemperatureHWiNFOEntryID#
HWiNFOType=CurrentValue
Disabled=#HWiNFOPluginDisabled#

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

;===CPU Total=========================================
[CPUTotalGraphBackground]
Meter=Image
MeterStyle=XGraphBackground
MiddleMouseDownAction=["#@#!Configuration\!General.inc"]

[CPUTotalHistogram]
Meter=Histogram
MeasureName=MeasureCPUTotal
MeterStyle=XHistogram
Hidden=#GraphType#

[CPUTotaline]
Meter=Line
MeasureName=MeasureCPUTotal
MeterStyle=XLine
Hidden=(#GraphType# = 0 ? 1 : 0)

[CPUTotalLabel]
Meter=String
MeterStyle=XLabel
Text="CPU"
Hidden=(#HWiNFOPluginDisabled# = 1 ? 0 : 1)

[CPUTotalLabelTemperature]
Meter=String
MeasureName=MeasureCPUTemp
Text="CPU: %1"
Postfix=#TemperatureUnit#
MeterStyle=XLabel
Hidden=#HWiNFOPluginDisabled#

[CPUTotalSeperator]
Meter=Image
MeterStyle=XSeperator

[CPUTotalBarBackground]
Meter=Image
MeterStyle=XBarBackground

[CPUTotalnBar]
Meter=Bar
MeasureName=MeasureCPUTotal
MeterStyle=XBar

[CPUTotalValue]
Meter=String
MeasureName=MeasureCPUTotal
MeterStyle=XValue
Text="%1 %"
