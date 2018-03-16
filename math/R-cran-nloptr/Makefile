# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: head/math/R-cran-nloptr/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	nloptr
PORTVERSION=	1.0.4
PORTREVISION=	2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface to NLopt

LICENSE=	LGPL3

LIB_DEPENDS=	libnlopt.so:math/nlopt

USES=		cran:auto-plist,compiles pkgconfig

post-patch:
	@${REINPLACE_CMD} -e 's/<<</</' ${WRKSRC}/configure

.include <bsd.port.mk>
