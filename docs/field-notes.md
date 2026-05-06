# Field Notes

This note keeps the data engineering assumptions visible beside the checks.

The domain cases cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`baseline` is the strongest case at 230 on `schema drift`. `recovery` is the cautious anchor at 150 on `quality gap`.

The extra check gives the repository a behavior path that can fail for a domain reason, not only a syntax reason.
