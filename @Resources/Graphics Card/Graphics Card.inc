; >>>Immense BARS >>> Graphics Card >>> Graphics Card.inc

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureGPUUsed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPUHWiNFOSensorID#
HWiNFOSensorInstance=#GPUHWiNFOSeansorInstance#
HWiNFOEntryId=#GPULoadHWiNFOEntryID#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[MeasureGPUTemperature]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#GPUHWiNFOSensorID#
HWiNFOSensorInstance=#GPUHWiNFOSeansorInstance#
HWiNFOEntryId=#GPUTemperatureHWiNFOEntryID#
HWiNFOType=CurrentValue
Disabled=#HWiNFOPluginDisabled#

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

[GPUGraphBackground]
Meter=Image
MeterStyle=XGraphBackground

[GPUHistogram]
Meter=Histogram
MeasureName=MeasureGPUUsed
MeterStyle=XHistogram
Hidden=#GraphType#

[GPULine]
Meter=Line
MeasureName=MeasureGPUUsed
MeterStyle=XLine
Hidden=(#GraphType# = 0 ? 1 : 0)

[GPULabel]
Meter=String
Text="GPU"
MeterStyle=XLabel
Hidden=(#HWiNFOPluginDisabled# = 1 ? 0 : 1)

[GPULabelTemperature]
Meter=String
MeasureName=MeasureGPUTemperature
Text="GPU: %1°C"
MeterStyle=XLabel
Hidden=#HWiNFOPluginDisabled#

[GPUSeperator]
Meter=Image
MeterStyle=XSeperator

[GPUBarBackground]
Meter=Image
MeterStyle=XBarBackground

[GPUBar]
Meter=Bar
MeasureName=MeasureGPUUsed
MeterStyle=XBar

[GPUValue]
Meter=String
MeasureName=MeasureGPUUsed
MeterStyle=XValue
Text="%1%"
