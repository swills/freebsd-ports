# Created by: John Marino <marino@FreeBSD.org>
# $FreeBSD: head/devel/aunit/Makefile 448301 2017-08-19 12:10:45Z vanilla $

PORTNAME=	aunit
PORTVERSION=	2017
CATEGORIES=	devel
MASTER_SITES=	http://downloads.dragonlace.net/src/
DISTNAME=	aunit-gpl-${PORTVERSION}-src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ada unit testing framework

LICENSE=	GPLv3

BUILD_DEPENDS=	gprbuild:devel/gprbuild

USES=		ada gmake

post-patch:
	${REINPLACE_CMD} -e 's|LIBDIR|MYLIBDIR|' \
		${WRKSRC}/lib/gnat/aunit_shared.gpr

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/lib/gnat/manifests

.include <bsd.port.mk>
