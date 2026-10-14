# AGENTS.md

VS Code **color-theme extension**.

`vsce` is the only devDependency.

There is no test/lint/typecheck step.

## Guidelines

See `DESIGN.md` for the full guidelines.

If following the guidelines takes a longer time than expected, you can always ask the user for help.
The user can and will finalize the design decision.

## Theme - Adding or Editing

Required to modify the following:

1. The theme itself
   - `themes/<colorway>/<style>-color-theme.json`
1. `package.json`
   - Include/update in `contributes.themes[]` the theme's `label`, `uiTheme`, and `path`.

Editing a theme file without the `contributes.themes` entry produces a theme that silently does not appear in the theme picker.

## References

Use `references/*.png` for the actual color values

## Releasing is done manually by the developer

DO NOT perform this automatically.
This will and always be done manually by the developer.
