# Created by: Daichi GOTO <daichi@FreeBSD.org>
# $FreeBSD: head/japanese/ibus-mozc/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTREVISION=	15
PKGNAMEPREFIX=	ja-ibus-

COMMENT=	Mozc engine for IBus
DATADIR=	${PREFIX}/share/ibus-${PORTNAME}

MASTERDIR=	${.CURDIR}/../../japanese/mozc-server
FILESDIR=	${.CURDIR}/files
SUB_FILES=	pkg-message

BUILD_MOZC_LIST=	ibus_mozc

.include "${MASTERDIR}/Makefile"
