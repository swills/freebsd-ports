# $FreeBSD: head/devel/py-fastnumbers/Makefile 470365 2018-05-19 07:45:40Z yuri $

PORTNAME=	fastnumbers
DISTVERSION=	2.0.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Super-fast and clean conversions to numbers

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/fastnumbers.so

.include <bsd.port.mk>
