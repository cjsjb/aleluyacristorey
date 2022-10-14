\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"

		\key g \major
		% intro larga
		% R1*4  |

		R1  |
%% 5
		b 2 c' 4 ( d' )  |
		a 2 a 4 b 8 a  |
		g 2 ( a )  |
		g 2. r4  |
		d' 2 e' 4 ( g' )  |
%% 10
		d' 2 d' 4 d' 8 d'  |
		c' 2 ( d' )  |
		d' 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-tenor" {
		A -- le __ lu -- ya, a -- le -- lu __ ya.
		A -- le __ lu -- ya, a -- le -- lu __ ya.
	}
>>
