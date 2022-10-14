\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		\key g \major
		% intro larga
		% R1*4  |

		R1  |
%% 5
		b' 2 c'' 4 ( d'' )  |
		a' 2 a' 4 b' 8 a'  |
		g' 2 ( a' )  |
		g' 2. r4  |
		g' 2 g' 4 ( g' )  |
%% 10
		fis' 2 fis' 4 fis' 8 fis'  |
		e' 2 ( fis' )  |
		d' 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzo" {
		A -- le __ lu -- ya, a -- le -- lu __ ya.
		A -- le __ lu -- ya, a -- le -- lu __ ya.
	}
>>
