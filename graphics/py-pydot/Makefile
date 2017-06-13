# Created by: Stefan Walter <sw@gegenunendlich.de>
# $FreeBSD: head/graphics/py-pydot/Makefile 428939 2016-12-19 15:54:24Z sunpoet $

PORTNAME=	pydot
PORTVERSION=	1.2.3
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python interface to the Graphviz Dot language

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	dot:graphics/graphviz \
		${PYTHON_PKGNAMEPREFIX}pyparsing>=2.1.4:devel/py-pyparsing

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
