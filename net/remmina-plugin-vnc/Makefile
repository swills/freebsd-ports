# Created by: Alexander Logvinov <avl@FreeBSD.org>
# $FreeBSD: head/net/remmina-plugin-vnc/Makefile 478203 2018-08-27 13:05:13Z woodsb02 $

PKGNAMESUFFIX=	-vnc

COMMENT=	Remmina plugin for VNC protocol

LIB_DEPENDS=	libgnutls.so:security/gnutls \
		libgcrypt.so:security/libgcrypt \
		libvncserver.so:net/libvncserver

USES=		jpeg
USE_GNOME+=	cairo

MASTERDIR=	${.CURDIR}/../remmina-plugins

.include "${MASTERDIR}/Makefile"
