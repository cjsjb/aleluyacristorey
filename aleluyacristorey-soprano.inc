\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
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
		b' 2 c'' 4 ( d'' )  |
%% 10
		a' 2 a' 4 b' 8 a'  |
		g' 2 ( a' )  |
		g' 1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		A -- le __ lu -- ya, a -- le -- lu __ ya.
		A -- le __ lu -- ya, a -- le -- lu __ ya.
	}
>>
