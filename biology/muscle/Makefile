# Created by: Motomichi Matsuzaki <mzaki@biol.s.u-tokyo.ac.jp>
# $FreeBSD: head/biology/muscle/Makefile 425879 2016-11-11 09:31:02Z linimon $

PORTNAME=	muscle
PORTVERSION=	3.8.31
CATEGORIES=	biology
MASTER_SITES=	http://www.drive5.com/muscle/downloads${PORTVERSION}/
DISTNAME=	${PORTNAME}${PORTVERSION}_src

MAINTAINER=	mzaki@m.u-tokyo.ac.jp
COMMENT=	MUltiple Sequence Comparison by Log-Expectation

FETCH_ARGS=	-A

WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION}/src

USES=		dos2unix
DOS2UNIX_GLOB=	*.cpp

ALL_TARGET=	muscle

PLIST_FILES=	bin/muscle

ONLY_FOR_ARCHS=		amd64 i386
ONLY_FOR_ARCHS_REASON=	Fails to install: tries to modify /dev/tty

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/muscle ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
