# $FreeBSD: head/net/py-terminado/Makefile 463439 2018-03-02 18:52:29Z sunpoet $

PORTNAME=	terminado
PORTVERSION=	0.8.1
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Terminals served to term.js using Tornado websockets

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ptyprocess>0:sysutils/py-ptyprocess@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}tornado>=4:www/py-tornado@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
