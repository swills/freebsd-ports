# $FreeBSD: head/net/py-terminado/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	terminado
PORTVERSION=	0.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Terminals served to term.js using Tornado websockets

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ptyprocess>0:sysutils/py-ptyprocess \
		${PYTHON_PKGNAMEPREFIX}tornado>0:www/py-tornado

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
