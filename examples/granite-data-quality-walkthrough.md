# Granite Data Quality Hub Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 230 | ship |
| stress | lineage depth | 152 | ship |
| edge | partition skew | 200 | ship |
| recovery | quality gap | 150 | ship |
| stale | schema drift | 161 | ship |

Start with `baseline` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around lineage depth and quality gap.
