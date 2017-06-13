# Created by: Dave Cottlehuber <dch@skunkwerks.at>
# $FreeBSD: head/devel/py-structlog/Makefile 443110 2017-06-10 18:07:09Z dbaio $

PORTNAME=	structlog
PORTVERSION=	17.2.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dch@skunkwerks.at
COMMENT=	Structured Logging for Python

LICENSE=	APACHE20 MIT
LICENSE_COMB=	dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE.apache2
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE.mit

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}colorama>=0.3.3:devel/py-colorama \
			${PYTHON_PKGNAMEPREFIX}six>=1.10.0:devel/py-six

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
