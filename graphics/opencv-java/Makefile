# $FreeBSD: head/graphics/opencv-java/Makefile 438490 2017-04-14 05:30:25Z jbeich $

PORTREVISION=	1
CATEGORIES=	graphics java
PKGNAMESUFFIX=	-${OCV_SLAVE}

COMMENT=	OpenCV Java library

OCV_SLAVE=	java
OCV_JAVA=	yes
MASTERDIR=	${.CURDIR:H}/opencv
PLIST=		${.CURDIR}/pkg-plist

PLIST_SUB+=	OCV_VER=${DISTVERSION:R:S|.||g}

.include "${MASTERDIR}/Makefile"
