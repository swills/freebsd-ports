# $FreeBSD: head/sysutils/chyves/Makefile 489777 2019-01-09 13:05:31Z lme $

PORTNAME=	chyves
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.0
CATEGORIES=	sysutils

MAINTAINER=	lme@FreeBSD.org
COMMENT=	bhyve front-end manager

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes

NO_BUILD=	yes
NO_ARCH=	yes

MAKE_ARGS+=	-e

do-patch:
	${REINPLACE_CMD} 's%\$$(PREFIX)%${STAGEDIR}/$$(PREFIX)%g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
