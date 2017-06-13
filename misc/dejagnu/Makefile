# Created by: markm
# $FreeBSD: head/misc/dejagnu/Makefile 413498 2016-04-17 10:11:59Z gahr $

PORTNAME=	dejagnu
PORTVERSION=	1.6
CATEGORIES=	misc tcl
MASTER_SITES=	GNU

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Automated program/system tester

LICENSE=	GPLv3

LIB_DEPENDS=	libexpect.so:lang/expect

USES+=		gmake tcl:85+
GNU_CONFIGURE=	yes

INFO=		${PORTNAME}

TEST_TARGET=	check

.include <bsd.port.mk>
