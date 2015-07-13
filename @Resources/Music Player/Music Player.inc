; >>>Immense BARS >>> Music PLayer >>> Music Player.inc

;=====================================================
;[Measures]===========================================
;=====================================================

[MeasureMusicArtwork]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Cover
TrackChangeAction=[!UpdateMeter "Artwork"]

[MeasureMusicArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Artist

[MeasureMusicAlbum]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Album

[MeasureMusicProgress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Progress

[MeasureMusicPosition]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Position

[MeasureMusicDuration]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Duration

[MeasureMusicTitle]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Title

[MeasureMusicVolume]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Volume

[MeasureMusicYear]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayerProgramName#
PlayerType=Year

;=====================================================
;[Include]============================================
;=====================================================

@include=#@#!Configuration/Styles.inc

;=====================================================
;[Meters]=============================================
;=====================================================

;===Album Artwork=====================================
[ArtworkPlaceholder]
Meter=Image
ImageName=#MusicplayerArtworkImage#
SolidColor=0,0,0,1
ImageTint=#BarColor#
MeterStyle=XArtwork
LeftMouseUpAction=[#MusicPlayerProgramLocation#]

[Artwork]
Meter=Image
MeasureName=MeasureMusicArtwork
MeterStyle=XArtwork
UpdateDivider=-1

;===First line (Artist, Album)========================
[ArtistValue]
Meter=String
MeasureName=MeasureMusicArtist
Text="%1"
MeterStyle=XArtistValue

[AlbumValue]
Meter=String
MeasureName=MeasureMusicAlbum
MeasureName2=MEasureMusicYear
Text="%1 [%2]"
MeterStyle=XAlbumValue

;===ProgressBar=======================================
[ProgressbarBackground]
Meter=Image
MeterStyle=XProgressBarBackground

[ProgressBar]
Meter=Bar
MeasureName=MeasureMusicProgress
MeterStyle=XProgressBar

[Progress]
Meter=String
MeasureName=MeasureMusicPosition
MeasureName2=MeasureMusicDuration
MeterStyle=XProgress
Text="%1 | %2"

;===Second line=======================================
[TitleValue]
Meter=String
MeasureName=MeasureMusicTitle
Text="%1"
MeterStyle=XTitleValue

[VolumeBarBackground]
Meter=Image
MeterStyle=XSmallBackground
X=(#ArtworkWidth#  + #GapHorizontal# + #ProgressBarWidth# - #SmallBarWidth#)
Y=((#ArtworkHeight# - #ProgressBarHeight#) * 1.5)
W=#SmallBarWidth#
H=#SmallBarHeight#

[VolumeBar]
Meter=Bar
MeasureName=MeasureMusicVolume
MeterStyle=XSmallBar
X=(#ArtworkWidth#  + #GapHorizontal# + #ProgressBarWidth# - #SmallBarWidth#)
Y=((#ArtworkHeight# - #ProgressBarHeight#) * 1.5)
W=#SmallBarWidth#
H=#SmallBarHeight#
