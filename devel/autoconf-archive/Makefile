# Created by: Martin Kammerhofer
# $FreeBSD: head/devel/autoconf-archive/Makefile 484628 2018-11-10 18:12:57Z bapt $

PORTNAME=	autoconf-archive
PORTVERSION=	0.${DISTDATE:C/-/./g}
PORTREVISION=	1
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
