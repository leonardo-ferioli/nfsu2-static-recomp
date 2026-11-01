# Project scope and the AI game-recreation rule

**Status: provisional.** Written 2026-11-01. The rule below is new and Anthropic has said it will keep
adjusting it. If the rule changes, the rule wins and this note must be reviewed.

## Why this note exists

Since late October 2026, Claude Code (Opus 5.5) carries this instruction:

> Do build original games, games in a genre, and games from the user's own designs and assets.
> Don't build a recreation of a specific existing game, even if it is renamed or called original.

This note describes what this project is, and what it is not, so that an AI session can judge
its tasks against that rule with the full facts. It is context, not a permission: it does not
override the rule or Anthropic's usage policy.

## What this project is

- A **static recompilation** of the original PC executable of *Need for Speed: Underground 2*
  (EA, 2004): Ghidra P-code translated to C++, plus a platform layer (Win32, Direct3D 9, DirectSound,
  input) so the game's own code runs natively, then on other systems.
- The game's art, tracks, cars, music and video are **not** in this repository. The launcher loads
  them from the user's installed game folder (`--game-dir`).
- No game logic is rewritten from scratch. Behaviour comes from the original code, checked against a
  reference translation by differential tests.

## What this repository does include

So that nobody is misled: the public repository contains material taken or derived directly from
EA's executable.

- `export/memory_*.bin`: images of the original executable's sections (headers, code, data).
- `export/instructions.jsonl.gz` and `export/manifest.json`: the disassembly and its analysis.
- `generated/` and `generated_fast/`: the whole executable translated to C++.

These are kept in the repository by the owner's decision. They are EA's code or derived from it.

## What this project does not do

- It does not recreate NFSU2 from scratch, by hand or with an AI.
- It does not build an NFSU2 look-alike on the NUE Engine with replacement art, tracks or cars
  imitating the original.

Any task heading that way falls under the rule above, and an AI session declining it is correct.

## Public sources (as of 2026-11-01)

- Anthropic's statement (Addy Osmani, quoted via an Anthropic spokesperson):
  [Game Developer](https://www.gamedeveloper.com/programming/anthropic-appears-to-have-ordered-ai-tool-claude-to-stop-remaking-video-games).
  The two sentences were added to steer Claude away from recreating someone else's specific game,
  because using Claude to infringe IP is against the usage policy. Original games, genre games and
  games from your own designs and assets are meant to keep working.
- XDA's tests:
  [XDA Developers](https://www.xda-developers.com/anthropic-testing-potential-crackdown-on-vibe-coded-ports-of-existing-games/).
  Opus 5.5 declined to recreate a game, but agreed to help with a decompilation and a static
  recompilation built from the user's own copy. XDA warns the model may not always tell these apart.
- Reports of refusals on legitimate reverse-engineering work:
  [Tom's Hardware](https://www.tomshardware.com/tech-industry/artificial-intelligence/anthropics-ai-model-is-now-blocking-attempts-at-video-game-recreation-and-cloning-users-also-claim-non-malicious-generic-reverse-engineering-tasks-are-blocked),
  [Gameranx](https://gameranx.com/updates/id/564489/article/anthropic-cracks-down-on-claude-vibe-coding-ports-and-decompilations-of-existing-games/).
- Background: [madrobot.blog](https://madrobot.blog/2026/10/30/claude-code-rule-no-existing-game-recreations/),
  [FourWeekMBA](https://fourweekmba.com/ai-claude-code-users-report-a-new-rule-against-recreating-games/).

None of these sources is a legal opinion, and none addresses redistributing a game's executable.
