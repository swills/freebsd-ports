# Created by: Daichi GOTO <daichi@FreeBSD.org>
# $FreeBSD: head/japanese/ibus-mozc/Makefile 469110 2018-05-05 13:59:47Z danfe $

PKGNAMEPREFIX=	ja-ibus-

COMMENT=	Mozc engine for IBus
DATADIR=	${PREFIX}/share/ibus-${PORTNAME}

MASTERDIR=	${.CURDIR}/../../japanese/mozc-server
FILESDIR=	${.CURDIR}/files
SUB_FILES=	pkg-message

BUILD_MOZC_LIST=	ibus_mozc

.include "${MASTERDIR}/Makefile"
