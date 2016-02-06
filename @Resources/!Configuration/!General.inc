; >>>Immense BARS >>> @Resources >>> !Configuration >>> General.inc

; Hello and welcome to the all new Fried.Ice Suite: IMMENSE BARS!
; Feel free to costumize all the values below, every value behind the equal sign can be personalisized.
;
; Make sure to adjust your personal information needed for the network, music player and HWiNfo Skins/Plugin!
;
; If you have any questions, relate to http://ibloodghosti.deviantart.com/
; If you are new to Rainmeter, consider taking a look at http://docs.rainmeter.net/manual

; The Semicolon is used as a commentar sign, that means, lines beginning with ";" will not be used by the program itself!

[Variables]
;=====================================================
;===[GENERAL]=========================================
;=====================================================

;===Bevel Type========================================
; Refer to http://docs.rainmeter.net/manual-beta/meters/general-options#BevelType
BevelType=0

;===Colors============================================
;Enter Value in RR,GG,BB,Alpha
BackgroundColor=255,255,255,50

;===Orange Scheme===
BarColor=255,170,00,240
SeperatorColor=250,250,250,100
HistogramColor=#BarColor#
LineColor=#HistogramColor#
LineHorizontalLineColor=#LineColor#
LabelFontColor=255,255,255,255
LabelFontEffectColor=0,0,0,255
ValueFontColor=#LabelFontColor#
ValueFontEffectColor=#LabelFontEffectColor#

;===Font & Strings====================================
; Refer to http://docs.rainmeter.net/manual/meters/string
Bar.GraphNumberDecimals=1

LabelFontSize=15
LabelFontFace=Calibri
LabelStringStyle=Normal
LabelStringCase=None
LabelStringEffect=Shadow

ValueFontSize=20
ValueFontFace=#LabelFontFace#
ValueStringStyle=#LabelStringStyle#
ValueStringCase=#LabelStringCase#
ValueStringEffect=#LabelStringEffect#

MusicFontSize=(#ValueFontSize# - 3)

NoteFontSize=(#ValueFontSize# - 10)

;===Geometry=========================================
; Standart Layout has a gap of 10px in vertical and 14px in horizontal orientation
; between every skin
; Enter Values in pixels
GraphWidth=226
GraphHeight=34

BarHeight=#GraphHeight#
BarWidth=#GraphWidth#

SeperatorHeight=1

GapHorizontal=10
GapVertical=10

SmallBarVerticalGap=(#GapVertical# * 0.8)
SmallBarWidth=(#GraphWidth# * 0.5 - #GapHorizontal# * 0.5)
SmallBarHeight=(#GraphHeight# * 0.5 - #SmallBarVerticalGap# * 0.5)

MediumBarWidth=#SmallBarWidth#
MediumBarHeight=#GraphHeight#

MicroBarWidth=(#GraphWidth# / 3 - #GapHorizontal# * (2/3) )
MicroBarHeight=#SmallBarHeight#

ArtworkHeight=(#GraphHeight# * 2 + 10)
ArtworkWidth=#ArtworkHeight#

ProgressBarWidth=((#GraphWidth# * 4 + #GapHorizontal# + 14) - #ArtworkWidth#)
ProgressBarHeight=#GraphHeight#

HeaderHeight=(#BarHeight# * 0.5)
HeaderWidth=((#BarWidth# - 4 * #GapHorizontal#) * 0.2)

NotesMaxHeight=(#GraphHeight# * 5 + #GapVertical# * 3 - #HeaderHeight#)

;===Graph Type=======================================
; Enter 0 to use Histograms or 1 for Lines
GraphType=0

;===Histogram========================================
; Refer to http://docs.rainmeter.net/manual/meters/histogram
HistogramGraphStart=Right
HistogramGraphOrientation=Vertical
HistogramFlip=1
HistogramAutoScale=0

;===Line=============================================
; Refer to http://docs.rainmeter.net/manual/meters/line
LineGraphStart=#HistogramGraphStart#
LineGraphOrientation=#HistogramGraphOrientation#
LineFlip=#HistogramFlip#
LineAutoscale=#HistogramAutoScale#
LineWidth=2
LineHorizontalLines=0

;===Bar==============================================
;===Refer to http://docs.rainmeter.net/manual/meters/bar
BarOrientation=Horizontal
BarFlip=0


;=====================================================
;===[HardDisk]========================================
;=====================================================
; Enter the refresh rate in seconds
HDDUpadateDivider=300
HDD_1=C:
HDD_2=D:
HDD_3=E:
HDD_4=F:
HDD_5=G:
HDD_6=H:
HDD_7=I:
HDD_8=J:


;=====================================================
;===[Network]=========================================
;=====================================================
; Refer to http://docs.rainmeter.net/manual/measures/net
; Enter your maximum Network In/Out Traffic per second in Bits
; e.g. DSL 6000=6000kBit/s=1024*6144000
NetIn=6144000
NetOut=614400
NetworkInterface=Best


;=====================================================
;===[MusicPlayer]=====================================
;=====================================================
; See http://docs.rainmeter.net/manual/plugins/nowplaying for how to use your player
MusicPlayerProgramName=CAD
; Enter the path to your musicplayer´s executable if you want to start it by clicking the icon
MusicPlayerProgramLocation=D:\Programme\foobar2000\foobar2000.exe
; Enter the name of your musicplayers executable
MusicPlayerProgramExe=foobar2000.exe
; Copy your custom icon to the musicplayer ressource folder and adjust the path
; or use integrated icons: aimp, foobar2000, itunes, itunes_alt, lastfm, spotify, spotify_alt, vlc, winamp, wmp
MusicplayerArtworkImage=#@#Music Player\foobar2000


;=====================================================
;===[Notes]===========================================
;=====================================================
;Define the path to the Usernotes files
UserNote1=#@#Notes/Note1.txt
UserNote2=#@#Notes/Note2.txt
UserNote3=#@#Notes/Note3.txt
UserNote4=#@#Notes/Note4.txt
UserNote5=#@#Notes/Note5.txt


;=====================================================
;===[HWiNFO Plugin]===================================
;=====================================================
; Enter the information correspondending to your system Configuration
; INSTRUCTIONS:
;  1.) Download HWiNFO at "http://www.hwinfo.com/download.php", the portable version works as well
;  2.) Start HWiNFO
;  3.) Go to settings->enable Autostart, show sensors on startup, minimize main window and sensors and shared memory support
;      This will start the program minimized at boot with the shared sensors rainmeter uses
;  4.) Start "HWiNFOSharedMemoryViewer.exe" located in Immense Bars\@Resources\!Configuration and search for the relevant values
;      Enter these values below
;  5.) You can enable temperature output in °F instead of °C by clicking the gear wheel icon in the sensors window
;
; See http://www.hwinfo.com/forum/Thread-Rainmeter-plug-in-for-HWiNFO-2-0 for more detailed information

; If you do not want to use the HWinFO Plugin at all, set HWiNFOPluginDisabled to 1
HWiNFOPluginDisabled=0

; Use °C for Celsius or °F for Fahrenheit
TemperatureUnit=°C

; Graphics Card (GPU) Temperature
GPUHWiNFOSensorID=0xe0001800
GPUHWiNFOSeansorInstance=0x0
GPULoadHWiNFOEntryID=0x7000000

GPUTemperatureHWiNFOEntryID=0x1000000

; Processor (CPU) Temperature
CPUHWiNFOSensorID=0xf0000400
CPUHWiNFOSeansorInstance=0x0
CPUTemperatureHWiNFOEntryID=0x100007f

; Different Hard Disk (HDD) Temperatures
HDD_1HWiNFOSensorID=0xf0000100
HDD_1HWiNFOSeansorInstance=0x0
HDD_1TemperatureHWiNFOEntryID=0x1000001

HDD_2HWiNFOSensorID=0xf0000100
HDD_2HWiNFOSeansorInstance=0x0
HDD_2TemperatureHWiNFOEntryID=0x1000001

HDD_3HWiNFOSensorID=0xf0000100
HDD_3HWiNFOSeansorInstance=0x2
HDD_3TemperatureHWiNFOEntryID=0x1000000

HDD_4HWiNFOSensorID=0xf0000100
HDD_4HWiNFOSeansorInstance=0x1
HDD_4TemperatureHWiNFOEntryID=0x1000001

HDD_5HWiNFOSensorID=0xf0000100
HDD_5HWiNFOSeansorInstance=0x2
HDD_5TemperatureHWiNFOEntryID=0x1000000

HDD_6HWiNFOSensorID=
HDD_6HWiNFOSeansorInstance=
HDD_6TemperatureHWiNFOEntryID=

HDD_7HWiNFOSensorID=
HDD_7HWiNFOSeansorInstance=
HDD_7TemperatureHWiNFOEntryID=

HDD_8HWiNFOSensorID=
HDD_8HWiNFOSeansorInstance=
HDD_8TemperatureHWiNFOEntryID=
