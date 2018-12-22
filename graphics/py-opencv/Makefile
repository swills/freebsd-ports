# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/graphics/py-opencv/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTREVISION=	1
CATEGORIES=	graphics python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	OpenCV Python library

BROKEN_aarch64=		fails to build: make[1]: cannot open Makefile
BROKEN_armv7=		fails to build: make[1]: cannot open Makefile

OCV_SLAVE=	python
OCV_PYTHON=	yes
MASTERDIR=	${.CURDIR:H}/opencv
PLIST=		${.CURDIR}/pkg-plist

.include "${MASTERDIR}/Makefile"
