# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-gnome/Makefile 425739 2016-11-08 13:35:36Z woodsb02 $

PKGNAMESUFFIX=	-gnome

COMMENT=	Remmina plugin for GNOME Keyring

LIB_DEPENDS=	libgnome-keyring.so:security/libgnome-keyring \
		libsecret-1.so:security/libsecret

USES+=		gettext-runtime

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
