# Created by: Daichi GOTO <daichi@FreeBSD.org>
# $FreeBSD: head/japanese/ibus-mozc/Makefile 494682 2019-03-05 07:05:53Z hrs $

PKGNAMEPREFIX=	ja-ibus-

COMMENT=	Mozc engine for IBus
DATADIR=	${PREFIX}/share/ibus-${PORTNAME}

MASTERDIR=	${.CURDIR}/../../japanese/mozc-server
FILESDIR=	${.CURDIR}/files
SUB_FILES=	pkg-message

BUILD_MOZC_LIST=	ibus_mozc

.include "${MASTERDIR}/Makefile"
