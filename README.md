<div align=center><img src="https://raw.githubusercontent.com/geeetech3d/smartto-iar/master/docs/assets/smartto-logo.png" width="400" height="100" alt="smartto-logo" /></div>

## Status
[![Opensource](https://img.shields.io/badge/Opensource%20by-Geeetech3D-blue.svg)](https://www.geeetech.com/)
[![Join the chat at https://gitter.im/geeetech3d/Smartto](https://badges.gitter.im/geeetech3d/Smartto.svg)](https://gitter.im/geeetech3d/Smartto?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

## Introduction
3D printer firmware and hardware for stm32

### Why we split the project into two versions
Yes, they have almost same code. At the beginning, we compiled the code in IAR and it works fine. But it was not very easy for people to use and then we decided to do code transplant from IAR to eclipse. But we found the eclipse version was not stable and it may has hidden trouble in long-time running. so our machines still using the IAR version at the bottom.

### What's the project plan
We decide to focus on the eclipse version in the future, hoping our users can use the firmware more easily. We also welcome people who interested in this project to join us to improve printer performing.

## What's included
Folder | Description
--- | ---
src | source code of this project
log | changelog of firmwares
test | compiled firmwares
tools | mini scripts for using firmwares or controlling motor

## Support
Company | Production
--- | ---
Geeetech | A30 / E180 / 30

## License
GPL v2
