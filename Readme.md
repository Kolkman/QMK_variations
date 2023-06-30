# My QMK variations and resources.

As I go on my journey on keyboard mapping and modding with QMK. I've created this repository.

It relies on the directories under users being logical linked to link under the users directory  in the QMK directory tree.
And the keymaps linked to the appropriate and similar locations in the keyboards/<brand>/<type>/keymap directory. 

For instance
```
cd ~/qmk_firmware/keyboards/splitkb/kyria/keymap
ln -s ./../../../../../QMK-variations/keyboards/splitkb/kyria/keymaps/kolkman ./

cd ~/qmkfirmwqre/users
ln -s ../../QMK-variations/users/kolkman ./
```

 ### Some useful resources.
 - [keymapdb](https.keymapdb.com), in particular the [kyria keymap](https://keymapdb.com/keymaps/default-kyria/).
 - https://precondition.github.io/
