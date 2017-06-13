# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/www/uwsgitop/Makefile 429968 2016-12-30 11:56:23Z demon $

PORTNAME=	uwsgitop
PORTVERSION=	0.10
CATEGORIES=	www
MASTER_SITES=	CHEESESHOP

MAINTAINER=	demon@FreeBSD.org
COMMENT=	uWSGI top-like app

USES=		python
USE_PYTHON=	distutils

PLIST_FILES=	bin/uwsgitop %%DOCSDIR%%/README.rst

post-install:
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${WRKSRC}/README.rst ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
