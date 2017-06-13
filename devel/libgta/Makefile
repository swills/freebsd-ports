# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/devel/libgta/Makefile 443096 2017-06-10 14:54:34Z dbaio $

PORTNAME=	libgta
PORTVERSION=	1.0.5
CATEGORIES=	devel
MASTER_SITES=	SAVANNAH/gta

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Portable library that implements the GTA file format

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes
USES=		pathfix gmake tar:xz
USE_LDCONFIG=	yes

regression-test test: build
	cd ${WRKSR}/ && ${SETENV} ${MAKE_ENV} ${MAKE} check

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libgta.so

.include <bsd.port.mk>
