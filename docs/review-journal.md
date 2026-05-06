# Review Journal

I treated `granite-data-quality-hub` as a project where the smallest useful behavior should still be inspectable.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 230, lane `ship`
- `stress`: `lineage depth`, score 152, lane `ship`
- `edge`: `partition skew`, score 200, lane `ship`
- `recovery`: `quality gap`, score 150, lane `ship`
- `stale`: `schema drift`, score 161, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
