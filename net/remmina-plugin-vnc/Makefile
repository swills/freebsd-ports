# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-vnc/Makefile 473049 2018-06-22 17:18:45Z danilo $

PORTREVISION=	1
PKGNAMESUFFIX=	-vnc

COMMENT=	Remmina plugin for VNC protocol

LIB_DEPENDS=	libgnutls.so:security/gnutls \
		libgcrypt.so:security/libgcrypt \
		libvncserver.so:net/libvncserver

USES=		jpeg
USE_GNOME+=	cairo

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
