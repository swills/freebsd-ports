# Created by: Fukang Chen <loader@FreeBSD.org>
# $FreeBSD: head/devel/py-cov-core/Makefile 464627 2018-03-15 19:54:36Z bdrewery $

PORTNAME=	cov-core
PORTVERSION=	1.15.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	loader@FreeBSD.org
COMMENT=	Plugin core for use by pytest-cov, nose-cov and nose2-cov

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coverage>=3.6:devel/py-coverage@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

PLIST_FILES+=	${PYTHON_SITELIBDIR}/init_cov_core.pth
post-install:
	${INSTALL_DATA} ${WRKSRC}/init_cov_core.pth \
	    ${STAGEDIR}${PYTHON_SITELIBDIR}/

.include <bsd.port.mk>
