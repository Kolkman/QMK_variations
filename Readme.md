# My QMK variations and resources.

As I go on my journey on keyboard mapping and modding with QMK. I've created this repository.


For now I only have a splitkb/kyria/kolkman keyboard. [This readme documents it](./keyboards/splitkb/kyria/keymaps/kolkman/readme.md).

The development environments relies on the directories under this develoment environment to be logical linked fromn the qmk_firmware equivlents. So, any directories under users need to be logical linked to link under the users directory  in the QMK directory tree while keymaps will need to be linked to the appropriate and similar locations in the keyboards/<brand>/<type>/keymap directory. 
For instance:

```
cd ~/qmk_firmware/keyboards/splitkb/kyria/keymap
ln -s ./../../../../../QMK-variations/keyboards/splitkb/kyria/keymaps/kolkman ./

cd ~/qmkfirmwqre/users
ln -s ../../QMK-variations/users/kolkman ./
```
 Also, if you work with VStudio, you may want to link your compile_commands.json file from the qmk_firmware directory to your QMK-variations directory.

 ```
 cd ~/QMK-variations 
 ln -s ../qmk_firmware/compile_commands.json ./
 ```

 ### Some useful resources.
 - [keymapdb](https.keymapdb.com), in particular the [kyria keymap](https://keymapdb.com/keymaps/default-kyria/).
 - https://precondition.github.io/
 - https://github.com/andrewjrae/kyria-keymap contains a few fetures that I am considdering
 - https://github.com/getreuer/qmk-keymap
