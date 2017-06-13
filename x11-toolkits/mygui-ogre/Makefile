# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/mygui-ogre/Makefile 406252 2016-01-16 17:48:12Z amdmi3 $

PORTREVISION=	0
PKGNAMESUFFIX=	-ogre

COMMENT=	Ogre3d renderer for MyGUI

MASTERDIR=	${.CURDIR}/../mygui

LIB_DEPENDS=	libOgreMain.so:graphics/ogre3d

MYGUI_RENDERSYSTEM=	3
MYGUI_SUBDIR=		Platforms/Ogre/OgrePlatform

.include "${MASTERDIR}/Makefile"
