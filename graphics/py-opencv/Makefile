# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/graphics/py-opencv/Makefile 469420 2018-05-09 01:10:11Z swills $

PORTREVISION=	0
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
