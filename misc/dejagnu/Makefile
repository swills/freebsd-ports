# Created by: markm
# $FreeBSD: head/misc/dejagnu/Makefile 486159 2018-11-29 09:51:46Z gahr $

PORTNAME=	dejagnu
PORTVERSION=	1.6.2
CATEGORIES=	misc tcl
MASTER_SITES=	GNU

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Automated program/system tester

LICENSE=	GPLv3

LIB_DEPENDS=	libexpect.so:lang/expect

USES+=		gmake tcl

GNU_CONFIGURE=	yes

INFO=		${PORTNAME}

TEST_TARGET=	check

.include <bsd.port.mk>
