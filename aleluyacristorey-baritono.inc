\context Staff = "baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-baritono" {
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
		g 2 g 4 ( g )  |
%% 10
		fis 2 fis 4 fis 8 fis  |
		e 2 ( fis )  |
		g 1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-baritono" {
		A -- le __ lu -- ya, a -- le -- lu __ ya.
		A -- le __ lu -- ya, a -- le -- lu __ ya.
	}
>>
