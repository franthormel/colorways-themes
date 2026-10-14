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

If the UI theme is not explicitly stated in the references, ask the user for manual input.

Editing a theme file without the `contributes.themes` entry produces a theme that silently does not appear in the theme picker.

## References for the Colors used

Extract and sample the files in `references/*.png` for the actual color values to be used in the respective themes.

Each of the target theme names are also located in the same reference files.

Try to avoid looking up the reference color values in the web search since it's not easily accessible.

If needed, you can always ask the user to sample out the color values if you're having a hard time to process the references.
Just ask it in a structured and formatted way so the user can give back an answer that's easier to process.

## Releasing is done manually by the user

DO NOT perform this automatically.
This will and always be done manually by the user.

## Review is done manually by the user

DO NOT perform this automatically.
Visual and file reviews will and always be done manually by the user.
