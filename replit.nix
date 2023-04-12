{ pkgs }: {
	deps = [
		pkgs.sudo
  pkgs.php74
    pkgs.php74Extensions.pdo
    pkgs.sqlite
	];
}