# Created by: Martin Kammerhofer
# $FreeBSD: head/devel/autoconf-archive/Makefile 448226 2017-08-18 12:45:46Z kwm $

PORTNAME=	autoconf-archive
PORTVERSION=	0.${DISTDATE:C/-/./g}
CATEGORIES=	devel
MASTER_SITES=	GNU
DISTNAME=	${PORTNAME}-${DISTDATE}

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Set of useful GNU Autoconf macros

USES=		makeinfo tar:xz
DISTDATE=	2017.03.21
GNU_CONFIGURE=	yes
INFO=		${PORTNAME}

PLIST_SUB=	MACRODIR=share/aclocal

.include <bsd.port.mk>
