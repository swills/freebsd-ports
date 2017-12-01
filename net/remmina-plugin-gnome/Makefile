# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-gnome/Makefile 455118 2017-11-29 16:06:40Z woodsb02 $

PKGNAMESUFFIX=	-gnome

COMMENT=	Remmina plugin for GNOME Keyring

LIB_DEPENDS=	libsecret-1.so:security/libsecret
RUN_DEPENDS=	gnome-keyring:security/gnome-keyring

USES+=		gettext-runtime

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
