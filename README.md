# ZSN_Loadouts

This mod alters loadouts of vanilla units in Arma 3.
Apex is required, Marksmen DLC is recommended.

Changes:

- NATO now use SPAR Series as main weapon, they make more sense as a future NATO standard rifle.
- AAF now use .45 exclusively for handguns and SMGs (4-five .45 ACP and Vermin)
- ACP-C2 .45 ACP is now the NATO heavy handgun, used by officers and combat patrol
- NATO and CSAT now use 9mm ammo for handguns and SMGs
- Gendarme soldiers now use Black SPAR16s and Rook-40 pistols
- The MX Series is now a CTRG Prototype weapon system much like the Type 115 for CSAT
- NATO Sharpshooters now use Mk18 EBR, swapped with AAF
- AAF Now have tan coloured Mk20s, to match their new handgun
- AAF AR's now use LIM-85, it is the same caliber and manufacturer as their Mk20s
- AAF Marksmen now use the Mk-I EMR, swapped with NATO
- Added Recon soldiers with groups for AAF
- FIA AR's now use Zafirs, they already use TRGs and 7.62 ammo
- FIA Marksmen now use the Mk14 Battle Rifle
- CSAT AR's now use Mk200s, it is the only AR that has the same caliber as their Katibas
- CSAT infantry now use crew helmets, it think it makes for a much better "Future soldier" look
- CSAT Guardsmen now use tan weapons, heavy handguns and the old NATO Crew Helmets. 
- NATO Crewmen use AAF Helmets. The old ones were the same as CSAT.
- CSAT infantry helmets now used by CSAT Pilots, I always thought they looked like pilot helmets
- CSAT Pilot helmets now used by NATO Tropic pilots, it was the same helmet in a different color
- Vehicles and ammo crate contents updated to reflect these changes
- Some other small tweaks to loadouts that I don't remember

## Build locally

Make sure pboproject and any dependencies are installed from https://armaservices.maverick-applications.com/Products/MikerosDosTools/FileBrowserFree

Double click build.bat to generate pbo files in @zsn_loadouts.
Check temp for build logs.

Any private keys in the root Keys folder will be used to sign the PBOs.
Any public keys in the root Keys folder will be copied to the mod folder.

## Build on Jenkins

Project uses Jenkinsfile to define build steps.
Add the repository or organization to Jenkins as a pipeline job and it should pick it up automatically.

It requires a node with the label "mikero" and pboproject must be available in PATH

To enable signing of PBOs, make sure a credential secret file ZLUSKEN_PRIVATE_KEY and ZLUSKEN_PUBLIC_KEY is available.
