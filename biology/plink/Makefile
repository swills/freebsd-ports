# Created by: Jason Bacon <bacon4000@gmail.com>
# $FreeBSD: head/biology/plink/Makefile 437439 2017-04-01 15:23:30Z gerald $

PORTNAME=	plink
PORTVERSION=	1.07
PORTREVISION=	6
CATEGORIES=	biology science
MASTER_SITES=	http://pngu.mgh.harvard.edu/~purcell/plink/dist/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	bacon4000@gmail.com
COMMENT=	Whole genome association analysis toolset

LICENSE=	GPLv2

LIB_DEPENDS=	liblapack.so:math/lapack

# We need Fortran LDFLAGS to link with Lapack.
USES=		fortran gmake zip

PLIST_FILES=	bin/plink

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/plink ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
