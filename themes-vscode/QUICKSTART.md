# Releasing instructions

1. Take screenshot of the editor with the theme applied
2. Copy the screenshot into the current `preview` directory
3. Add the new screenshot into the `README.md` file
4. Bump `version` in `package.json` for every publish.

# Packaging and publishing

1. Switch to VS Code project directory if you haven't

```
cd themes-vscode
```

2. Install vsce.

```
npm install -g @vscode/vsce
```

3. Package into a ready-to-install extension

```
vsce package -o colorways.vsix
```

4. To install, run below OR manually do it in the editor via Extensions > Install from VSIX...

```
code --install-extension colorways.vsix
```

5. Publish changes

```
vsce publish
```

See https://code.visualstudio.com/api/working-with-extensions/publishing-extension for more information.

# License file

The `LICENSE.md` in the root directory is the canonical license file.

The same file here in this project directory was copied from that root license file.
