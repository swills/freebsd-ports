# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/www/uwsgitop/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	uwsgitop
PORTVERSION=	0.10
CATEGORIES=	www
MASTER_SITES=	CHEESESHOP

MAINTAINER=	demon@FreeBSD.org
COMMENT=	uWSGI top-like app

USES=		python
USE_PYTHON=	distutils concurrent optsuffix

PLIST_FILES=	bin/uwsgitop %%DOCSDIR%%/README.rst

post-install:
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${WRKSRC}/README.rst ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
