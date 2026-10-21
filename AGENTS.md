# AGENTS.md

Colorways theme extension/plugin for IntelliJ IDEA and VS Code.

## Design Guidelines

Read `DESIGN.md` before creating or editing themes. Follow it as the source of truth for design decisions.

Ask the user for help when blocked by ambiguity, conflicting guidelines, missing information, or if following the guidelines takes significantly longer than expected.

Explain the issue rather than guessing or silently deviating from the guidelines.

If `DESIGN.md` and the reference images appear to conflict, ask the user instead of choosing one interpretation automatically.

## Theme - Adding or Editing

### VS Code

- Theme files: `themes-vscode/themes/<theme-name>/<theme-substyle>-color-theme.json`
- Manifest: `themes-vscode/package.json`
  - Add or update the corresponding entry in `contributes.themes[]`.
  - Set the correct `label`, `uiTheme`, and `path`.
  - Ensure `path` points to the actual theme JSON file relative to the VS Code extension root.

## Color References

- Use `references/*.png` as the source of truth for theme names and color values.
- Use the target theme names shown in the reference files when creating or updating themes.
- Extract exact color values from the reference images instead of guessing from visual appearance.
- Prefer sampling uniform areas rather than text, edges, or antialiased regions.
- Avoid web searches for reference colors; the values may be difficult to find reliably online.
- Ask the user to provide the missing information rather than guessing if a reference is inaccessible or a required color cannot be determined reliably.

## License Files

The root `LICENSE.md` is the authoritative source license file.

- Copy it unchanged when a project directory requires its own license file.
- Do not modify the source license text.

## Releasing

Do not bump version numbers.

Do not package, publish, or release the project automatically.

## Review

User performs the final review.
