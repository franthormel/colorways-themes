# AGENTS.md

VS Code **color-theme extension**.

`vsce` is the only devDependency.

There is no test/lint/typecheck step.

## Theme - Adding or Editing

Required to modify the following:

1. The theme itself
   - `themes/<colorway>/<style>-color-theme.json`
1. `package.json`
   - Include/update in `contributes.themes[]` the theme's `label`, `uiTheme`, and `path`.

Editing a theme file without the `contributes.themes` entry produces a theme that silently does not appear in the theme picker.

## References

Use `references/*.png` for the actual color values

## Reviewing

Ensure, as much as possible, that all of the colors in the references are actually applied and incorporated into the themes.

## Releasing is done manually by the developer

DO NOT perform this automatically.
This will and always be done manually by the developer.
