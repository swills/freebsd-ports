# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/editors/abiword-docs/Makefile 412346 2016-04-01 14:00:51Z mat $
#   $MCom: ports/editors/abiword-docs/Makefile,v 1.1 2009/11/10 14:08:20 kwm Exp $

PORTNAME=	abiword-docs
PORTVERSION=	3.0.1
CATEGORIES=	editors
MASTER_SITES=	http://www.abisource.com/downloads/abiword/${PORTVERSION}/source/
DIST_SUBDIR=	AbiWord

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	AbiWord help files

BUILD_DEPENDS=	abiword:editors/abiword
RUN_DEPENDS=	abiword:editors/abiword

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
# Don't give X warnings if DISPLAY is set
CONFIGURE_ENV=	DISPLAY=""
MAKE_ENV=	DISPLAY=""

.include <bsd.port.mk>
