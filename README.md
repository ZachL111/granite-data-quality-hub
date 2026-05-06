# granite-data-quality-hub

`granite-data-quality-hub` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies quality behavior through append-only fixtures, with checkpoint recovery checks and offline replay mode.

## Purpose

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Granite Data Quality Hub Review Notes

For a quick review, compare `schema drift` with `quality gap` before reading the middle cases.

## What Is Covered

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/granite-data-quality-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `quality gap`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Notes

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Command

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Audit Path

The same command runs the local verification path. The highest-scoring domain case is `baseline` at 230, which lands in `ship`. The most cautious case is `recovery` at 150, which lands in `ship`.

## Limits

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
