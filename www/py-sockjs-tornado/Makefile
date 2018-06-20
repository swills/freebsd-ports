# $FreeBSD: head/www/py-sockjs-tornado/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	sockjs-tornado
PORTVERSION=	1.0.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	rm@FreeBSD.org
COMMENT=	SockJS python server implementation on top of Tornado framework

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tornado>0:www/py-tornado@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
