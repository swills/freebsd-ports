# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: head/net/bird6/Makefile 420176 2016-08-14 06:25:17Z melifaro $

PORTNAME=	bird6
COMMENT=	Dynamic IP routing daemon (IPv6 version)
DISTNAME=	bird-${PORTVERSION}

MASTERDIR=	${.CURDIR}/../bird

USE_RC_SUBR=	${PORTNAME}

PLIST_SUB=	VER="6"

CONFIGURE_ARGS=	--enable-ipv6

.include "${MASTERDIR}/Makefile"
