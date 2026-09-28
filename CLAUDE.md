# CLAUDE.md

Personal Arduino learning repo (Arduino Mega 2560, PlatformIO). Each project is its own folder (e.g. `2.1-RGB-LED/`) and shares settings from `common.ini`.

## Security rules

- **Never commit secrets.** WiFi passwords, API keys and tokens go in a git-ignored file (e.g. `include/secrets.h`), never in `src/`. Check `git diff --staged` for credentials before every commit.
- **No personal data** (email, serial numbers, home network names, device MAC addresses) in code, comments or commit messages.
- **Only commit or push when the user asks.** Never force-push, rewrite history, or delete branches or files without explicit confirmation.
- **Libraries:** only add them from the PlatformIO registry or well-known sources, and pin versions in `lib_deps`. Say what a new dependency is before adding it.
- **No destructive or system-wide commands** (`rm -rf`, `sudo`, global installs, editing files outside this repo) without asking first.
- **Uploads go to the board only.** Check the detected port is the Arduino (`/dev/cu.usbmodem*` or `/dev/cu.usbserial*`) and not some other serial device, and don't flash bootloaders or change fuses.

## Hardware safety

Always check the hardware specs (board, components, datasheets) and that the circuit is correct before suggesting any wiring or code that drives pins. The user is a beginner and will build what is described. Minimum checks:

- Current is limited on every path (e.g. a resistor on each LED), and there is never a direct 5V/VIN to GND path.
- No I/O pin carries more than about 20 mA. Motors, relays and servos go through a driver or transistor.
- An output pin is never connected straight to 5V or GND.
- Pins 0 and 1 (USB serial) are not used for circuits.

## Conventions

- Draw breadboard diagrams in the user's orientation: vertical, with letters A–J across and numbered rows down.
