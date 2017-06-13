# Created by: Martin Kammerhofer
# $FreeBSD: head/devel/autoconf-archive/Makefile 423465 2016-10-07 14:55:45Z kwm $

PORTNAME=	autoconf-archive
PORTVERSION=	0.${DISTDATE:C/-/./g}
CATEGORIES=	devel
MASTER_SITES=	GNU
DISTNAME=	${PORTNAME}-${DISTDATE}

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Set of useful GNU Autoconf macros

USES=		makeinfo tar:xz
DISTDATE=	2016.09.16
GNU_CONFIGURE=	yes
INFO=		${PORTNAME}

PLIST_SUB=	MACRODIR=share/aclocal

.include <bsd.port.mk>
