# Theme Design Guidelines

## Picking the Colors

Ensure, as much as possible, that all of the colors in the references are actually applied and incorporated into the themes.

However, _the core rules must and always be prioritized_ if following the actual reference colors violates any of the core rules.

However, the colors required to satisfy these core rules might also be missing from the given reference palette.

This is why the `other-colors.txt` file is created under the `/references` directory. Anytime a new color is chosen to satisfy the core rules:

1. This new color must be added into the `other-colors.txt` file
2. Try to document it well on how it was used in the theme files
   1. However, descriptions can be omitted if the color is used in a general or generic manner. (e.g. green colors for a success state, etc.)

If the existing colors in the text file still fails to meet the core rules, repeat the same step of choosing another color (perhaps in the same color family).

The colors in the text file are not rigid but rather serve as a reminder.

This will also serve as a guide in the future whenever it comes to deciding the colors that will satisfy the core rules.

## Review

As needed, perform multiple rounds of reviews to ensure that the designed themes are actually usable and doesn't just follow the given color values blindlessly.

## Core Rules

### Control contrast and hierarchy

Suggested targets:

- Editor body text
  - 4.5:1 minimum against background
- UI text
  - 4.5:1 for normal, 3:1 for large/disabled
- Comments
  - At least 3:1, ideally 4.5:1 if people read them often
- Selection/Search
  - Selected text should still meet 4.5:1 against the selection background
- Syntax colors
  - Aim for 4.5:1 for most; decorative punctuation can be lower
- Borders/Guides
  - Low contrast, usually 1.5–3:1

### Intentionally design light, dark, and balanced variants

Don’t just invert. Perceived brightness changes with hue.

Light themes

- Background
  - Off-white / light warm or cool gray, not pure white.
- Foreground
  - Near-black, not pure black.
- Accents
  - Darker and slightly more saturated.
- Avoid bright yellow/cyan on white. Use amber/orange instead of yellow, teal instead of cyan.
- Comments
  - Medium gray, often italic.

Dark themes

- Background
  - Dark gray / blue-gray / warm black, not pure black.
- Foreground
  - Off-white, not pure white.
- Accents
  - Lighter and slightly desaturated.
- Avoid highly saturated red/blue on black; they can cause unwanted visual vibrations.
- Reduce overall chroma. Dark themes feel brighter than they are.

Balanced themes:

- Treat as its own variant, not just "medium light" or "medium dark."
- Use a mid-lightness background, muted accents, and lower contrast ratios—but still keep body text ≥ 4.5:1.

### Accessibility and colorblindness

Test with deuteranopia, protanopia, and tritanopia simulators.

Don’t rely on red vs. green alone. Use blue/orange, purple/teal, plus bold/italic/underline.

Ensure focus rings, cursor, and selection are visible in all variants.

Check contrast against both active and inactive states.

### Always include the non-syntax UI elements

A theme is more than code colors. Check:

1. Sidebar, tabs, status bar, activity bar
1. Autocomplete, hover, peek view, command palette
1. Bracket matching, indent guides, whitespace, line numbers
1. Current line highlight, selection, search results
1. Diff added/removed/changed
1. Git gutter colors
1. Terminal ANSI colors, if applicable

These should feel like the same theme, not an afterthought.

### Test with real code, multiple languages

Use realistic files. See the sample files in `/test-files`

Check and ask the following:

1. Can you scan for functions quickly?
1. Do strings and variables look different?
1. Are comments readable but secondary?
1. Does selection preserve syntax readability?
1. Does it still feel good after 30–60 minutes?

## Common Pitfalls

1. Too many hues.
1. Over-saturated backgrounds.
1. Pure black/white.
1. Comments too dim.
1. Selection hides syntax.
1. Inverting light/dark instead of rebalancing.
