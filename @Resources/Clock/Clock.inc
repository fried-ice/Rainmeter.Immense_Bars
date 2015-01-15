; >>>Immense BARS >>> Clock >>> Clock.inc

;=====================================================
;[Measures]===========================================
;=====================================================


[MeasureSecond]
Measure=Time
Format=%S
MinValue=0
MaxValue=60

[MeasureMinute]
Measure=Time
Format=%M
MinValue=0
MaxValue=60

[MeasureHour]
Measure=Time
Format=%H
MinValue=0
MaxValue=24

[MeasureDynamicMonthLenght]
Measure=Time
Format=-%m
Substitute="-01":"31","-02":"28","-03":"31","-04":"30","-05":"31","-06":"30","-07":"31","-08":"31","-09":"30","-10":"31","-11":"30","-12":"31"

[MeasureDate]
Measure=Time
Format=%d
DynamicVariables=1
MinValue=0
MaxValue=[MeasureDynamicMonthLenght]

[MeasureMonth]
Measure=Time
Format=%m
MinValue=0
MaxValue=12


;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

[SecondBarBackground]
Meter=Image
MeterStyle=XClockBarBackground

[SecondsBar]
Meter=Bar
MeasureName=MeasureSecond
MeterStyle=XClockBar

[SecondValue]
Meter=String
MeasureName=MeasureSecond
MeterStyle=XClockValue
Y=(#BarHeight# * 0.5)

[MinuteBarBackground]
Meter=Image
MeterStyle=XClockBarBackground
Y=(#GraphHeight# + #GapVertical#)

[MinuteBar]
Meter=Bar
MeasureName=MeasureMinute
MeterStyle=XClockBar
Y=(#GraphHeight# + #GapVertical#)

[MinuteValue]
Meter=String
MeasureName=MeasureMinute
MeterStyle=XClockValue
Y=(#BarHeight# * 1.5 + #GapVertical#)

[HourBarBackground]
Meter=Image
MeterStyle=XClockBarBackground
Y=(#GraphHeight# * 2 + #GapVertical# *2)

[HourBar]
Meter=Bar
MeasureName=MeasureHour
MeterStyle=XClockBar
Y=(#GraphHeight# * 2 + #GapVertical# *2)

[HourValue]
Meter=String
MeasureName=MeasureHour
MeterStyle=XClockValue
Y=(#BarHeight# * 2.5 + #GapVertical# *2)

[DateBarBackground]
Meter=Image
MeterStyle=XClockBarBackground
Y=(#GraphHeight# * 3 + #GapVertical# * 3)

[DateBar]
Meter=Bar
MeasureName=MeasureDate
MeterStyle=XClockBar
Y=(#GraphHeight# * 3 + #GapVertical# * 3)

[DateValue]
Meter=String
MeasureName=MeasureDate
MeterStyle=XClockValue
Y=(#BarHeight# * 3.5 + #GapVertical# * 3)

[MonthBarBackground]
Meter=Image
MeterStyle=XClockBarBackground
Y=(#GraphHeight# * 4 + #GapVertical# * 4)

[MonthBar]
Meter=Bar
MeasureName=MeasureMonth
MeterStyle=XClockBar
Y=(#GraphHeight# * 4 + #GapVertical# * 4)

[MonthValue]
Meter=String
MeasureName=MeasureMonth
MeterStyle=XClockValue
Y=(#BarHeight# * 4.5 + #GapVertical# * 4)