; >>>Immense BARS >>> Harddrive >>> Harddrive.ini

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureDiskSpace]
Measure=FreeDiskSpace
Drive=#HDD_X#
InvertMeasure=1
UpdateDivider=#HDDUpadateDivider#

[MeasureDiskActivity]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#HDD_X#"

[MeasureDiskName]
Measure=FreeDiskSpace
Drive=#HDD_X#
UpdateDivider=-1
Label=1

[MeasureHDDTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HDD_XHWiNFOSensorID#
HWiNFOSensorInstance=#HDD_XHWiNFOSeansorInstance#
HWiNFOEntryId=#HDD_XTemperatureHWiNFOEntryID#
HWiNFOType=CurrentValue
Disabled=#HWiNFOPluginDisabled#

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

[DiskGraphBackground]
Meter=Image
MeterStyle=XGraphBackground

[DiskHistogram]
Meter=Histogram
MeasureName=MeasureDiskActivity
MeterStyle=XHistogram
Hidden=#GraphType#

[DiskLline]
Meter=Line
MeasureName=MeasureDiskActivity
MeterStyle=XLIne
Hidden=(#GraphType# = 0 ? 1 : 0)

[DiskLabel]
Meter=String
MeasureName=MeasureDiskName
Text="#HDD_X#[%1]"
MeterStyle=XLabel
Hidden=(#HWiNFOPluginDisabled# = 1 ? 0 : 1)

[DiskLabelTemperature]
Meter=String
MeasureName=MeasureDiskName
MeasureName2=MeasureHDDTemp
Text="#HDD_X#[%1]: %2°C"
MeterStyle=XLabel
Hidden=#HWiNFOPluginDisabled#

[DiskSeperator]
Meter=Image
MeterStyle=XSeperator

[DiskBarBackground]
Meter=Image
MeterStyle=XBarBackground

[DiskBar]
Meter=Bar
MeasureName=MeasureDiskSpace
MeterStyle=XBar

[DiskValue]
Meter=String
MeasureName=MeasureDiskSpace
MeterStyle=XValue
AutoScale=1k
Text="%1B"