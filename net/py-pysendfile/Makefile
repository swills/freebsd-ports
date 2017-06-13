# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/net/py-pysendfile/Makefile 437267 2017-03-30 02:40:48Z lwhsu $

PORTNAME=	pysendfile
PORTVERSION=	2.0.1
PORTREVISION=	1
CATEGORIES=	net python devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python interface to sendfile(2)

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	py*-sendfile-[0-9]*

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/sendfile.so

.include <bsd.port.mk>
