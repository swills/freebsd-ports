# Created by: Martin Kammerhofer
# $FreeBSD: head/devel/autoconf-archive/Makefile 452547 2017-10-20 18:13:57Z kwm $

PORTNAME=	autoconf-archive
PORTVERSION=	0.${DISTDATE:C/-/./g}
CATEGORIES=	devel
MASTER_SITES=	GNU
DISTNAME=	${PORTNAME}-${DISTDATE}

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Set of useful GNU Autoconf macros

USES=		makeinfo tar:xz
DISTDATE=	2017.09.28
GNU_CONFIGURE=	yes
INFO=		${PORTNAME}

PLIST_SUB=	MACRODIR=share/aclocal

.include <bsd.port.mk>
