# $FreeBSD: head/textproc/py-simplebayes/Makefile 475606 2018-07-28 19:31:48Z yuri $

PORTNAME=	simplebayes
PORTVERSION=	1.5.8
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Memory-based, optional-persistence naïve bayesian text classifier

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

post-extract: # https://github.com/hickeroar/simplebayes/issues/3
	@truncate -s 0 ${WRKSRC}/README.rst

.include <bsd.port.mk>
