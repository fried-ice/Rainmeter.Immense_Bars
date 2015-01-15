; >>>Immense BARS >>> Notes >>> Notes.ini

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureMemo1]
Measure=Plugin
Plugin=QuotePlugin
PathName=#UserNote1#
Group=Notes
Separator=¶
UpdateDivider=-1

[MeasureMemo2]
Measure=Plugin
Plugin=QuotePlugin
PathName=#UserNote2#
Group=Notes
Separator=¶
UpdateDivider=-1

[MeasureMemo3]
Measure=Plugin
Plugin=QuotePlugin
PathName=#UserNote3#
Group=Notes
Separator=¶
UpdateDivider=-1

[MeasureMemo4]
Measure=Plugin
Plugin=QuotePlugin
PathName=#UserNote4#
Group=Notes
Separator=¶
UpdateDivider=-1

[MeasureMemo5]
Measure=Plugin
Plugin=QuotePlugin
PathName=#UserNote5#
Group=Notes
Separator=¶
UpdateDivider=-1

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

;===Header============================================
[Header_1]
Meter=Image
MeterStyle=XHeader
LeftMouseUpAction=[!ShowMeter Note_1] [!HideMeter Note_2] [!HideMeter Note_3] [!HideMeter Note_4] [!HideMeter Note_5]

[Header_2]
Meter=Image
MeterStyle=XHeader
X=#GapVertical#R
LeftMouseUpAction=[!ShowMeter Note_2] [!HideMeter Note_1] [!HideMeter Note_3] [!HideMeter Note_4] [!HideMeter Note_5]

[Header_3]
Meter=Image
MeterStyle=XHeader
X=#GapVertical#R
LeftMouseUpAction=[!ShowMeter Note_3] [!HideMeter Note_1] [!HideMeter Note_2] [!HideMeter Note_4] [!HideMeter Note_5]

[Header_4]
Meter=Image
MeterStyle=XHeader
X=#GapVertical#R
LeftMouseUpAction=[!ShowMeter Note_4] [!HideMeter Note_1] [!HideMeter Note_2] [!HideMeter Note_3] [!HideMeter Note_5]

[Header_5]
Meter=Image
MeterStyle=XHeader
X=#GapVertical#R
LeftMouseUpAction=[!ShowMeter Note_5] [!HideMeter Note_1] [!HideMeter Note_2] [!HideMeter Note_3] [!HideMeter Note_4]

[HeaderCaption_1]
Meter=String
MeterStyle=XHeaderCaption
Text="I"
X=(#HeaderWidth# * 0.5)

[HeaderCaption_2]
Meter=String
MeterStyle=XHeaderCaption
Text="II"
X=(#GapVertical# + #HeaderWidth# * 1.5)

[HeaderCaption_3]
Meter=String
MeterStyle=XHeaderCaption
Text="III"
X=(#GapVertical# * 2 + #HeaderWidth# * 2.5)

[HeaderCaption_4]
Meter=String
MeterStyle=XHeaderCaption
Text="IV"
X=(#GapVertical# * 3 + #HeaderWidth# * 3.5)

[HeaderCaption_5]
Meter=String
MeterStyle=XHeaderCaption
Text="V"
X=(#GapVertical# * 4 + #HeaderWidth# * 4.5)

;===Notes=============================================
[Note_1]
Meter=String
MeterStyle=XNote
MeasureName=MeasureMemo1
LeftMouseUpAction=["#Usernote1#"]
MiddleMouseDownAction=[!UpdateMeasureGroup Notes]

[Note_2]
Meter=String
MeterStyle=XNote
MeasureName=MeasureMemo2
LeftMouseUpAction=["#Usernote2#"]
MiddleMouseDownAction=[!UpdateMeasureGroup Notes]
Hidden=1

[Note_3]
Meter=String
MeterStyle=XNote
MeasureName=MeasureMemo3
LeftMouseUpAction=["#Usernote3#"]
MiddleMouseDownAction=[!UpdateMeasureGroup Notes]
Hidden=1

[Note_4]
Meter=String
MeterStyle=XNote
MeasureName=MeasureMemo4
LeftMouseUpAction=["#Usernote4#"]
MiddleMouseDownAction=[!UpdateMeasureGroup Notes]
Hidden=1

[Note_5]
Meter=String
MeterStyle=XNote
MeasureName=MeasureMemo5
LeftMouseUpAction=["#Usernote5#"]
MiddleMouseDownAction=[!UpdateMeasureGroup Notes]
Hidden=1