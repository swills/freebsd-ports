# Created by: Koichiro IWAO <meta+ports@vmeta.jp>
# $FreeBSD: head/net/remmina-plugin-secret/Makefile 473049 2018-06-22 17:18:45Z danilo $

PORTREVISION=	1
PKGNAMESUFFIX=	-secret

COMMENT=	Remmina plugin for GNOME Keyring

LIB_DEPENDS=	libsecret-1.so:security/libsecret
RUN_DEPENDS=	gnome-keyring:security/gnome-keyring

USES+=		gettext-runtime

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
