/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfb_sleep(void);
int vmsfs_connect(int);
int vmsfs_fclose(int, int);
int vmsfs_fdelete(int, int);
int vmsfs_fdelete_ex(int, int, int);
int vmsfs_format(int, int, int, int, int);
int vmsfs_fread(int, int, int);
int vmsfs_frename(int, int, int);
int vmsfs_fsetattr(int, int, int, int);
int vmsfs_fwrite(int, int, int);
int vmsfs_load_file(int, int, int, int);
int vmsfs_load_file_ex(int, int, int, int, int);
int vmsfs_mount(int);
int vmsfs_read_disk_image(int, int, int, int);
int vmsfs_rewrite_exec_file(int, int, int, int, int);
int vmsfs_save_exec_file(int, int, int, int, int, int);
int vmsfs_save_file(int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_disk_image(int, int);
int vmsfs_xdefrag(int, int);
void vmsfs_c_dispatch(int a4, int a5, int a6, int a7);

