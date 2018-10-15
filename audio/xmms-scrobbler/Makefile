# Created by: arved
# $FreeBSD: head/audio/xmms-scrobbler/Makefile 481894 2018-10-12 11:46:32Z antoine $

PORTNAME=	xmms-scrobbler
PORTREVISION=	8

MAINTAINER=	novel@FreeBSD.org
COMMENT=	XMMS plugin for Audioscrobbler.com

DEPRECATED=	Uses obsolete glib12
EXPIRATION_DATE=	2018-12-20

CONFLICTS=	scrobbler-*

MASTERDIR=	${.CURDIR}/../scrobbler

OPTIONS_SLAVE=	XMMS

.include "${MASTERDIR}/Makefile"
