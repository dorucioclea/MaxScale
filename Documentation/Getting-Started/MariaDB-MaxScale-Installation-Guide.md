# MariaDB MaxScale Installation Guide

## Normal Installation

Download the MaxScale package from the MariaDB Downloads page:

* [https://mariadb.com/downloads/#mariadb_platform-mariadb_maxscale](https://mariadb.com/downloads/#mariadb_platform-mariadb_maxscale)

Select your operating system and download either the RPM or the DEB package.

* For RHEL/CentOS variants, use `yum` to install the downloaded RPM

* For SLES, use `zypper`

* For Debian/Ubuntu systems, install the package with `dpkg -i` and run `apt-get install`
  after it to install the dependencies

You can also use
[the MariaDB package repository](https://mariadb.com/kb/en/library/mariadb-package-repository-setup-and-usage/)
to install MaxScale by first configuring the repository and then
installing the `maxscale` package via your package manager.

## Install MariaDB MaxScale Using a Tarball

MaxScale can also be installed using a tarball.
That may be required if you are using a Linux distribution for which there
exist no installation package or if you want to install many different
MaxScale versions side by side. For instructions on how to do that, please refer to
[Install MariaDB MaxScale using a Tarball](Install-MariaDB-MaxScale-Using-a-Tarball.md).

## Building MariaDB MaxScale From Source Code

Alternatively you may download the MariaDB MaxScale source and build your own binaries.
To do this, refer to the separate document
[Building MariaDB MaxScale from Source Code](Building-MaxScale-from-Source-Code.md)

## Configuring MariaDB MaxScale

[The MaxScale Tutorial](../Tutorials/MaxScale-Tutorial.md) covers the first
steps in configuring your MariaDB MaxScale installation. Follow this tutorial
to learn how to configure and start using MaxScale.

For a detailed list of all configuration parameters, refer to the
[Configuration Guide](Configuration-Guide.md) and the module specific documents
listed in the [Documentation Contents](../Documentation-Contents.md#routers).

## Encrypting Passwords

Read the [Encrypting Passwords](Configuration-Guide.md#encrypting-passwords)
section of the configuration guide to set up password encryption for the
configuration file.

## Administration Of MariaDB MaxScale

There are various administration tasks that may be done with MariaDB MaxScale.
Two command line tools are available, `maxctrl` and `maxadmin`, that will interact with a running
MariaDB MaxScale and allow the status of MariaDB MaxScale to be monitored and
give some control of the MariaDB MaxScale functionality.
There are a separate reference guides for the [maxctrl](../Reference/MaxCtrl.md) and [maxadmin](../Reference/MaxAdmin.md) utilities.

[The administration tutorial](../Tutorials/Administration-Tutorial.md)
covers the common administration tasks that need to be done with MariaDB MaxScale.
